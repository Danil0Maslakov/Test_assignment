#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    ,timer(new QTimer(this))
{
    ui->setupUi(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::processFiles);
}

MainWindow::~MainWindow()
{
    delete ui;
}


bool MainWindow::isFileClosed(const QString &fileName)
{
    QFile file(fileName);
    return file.open(QIODevice::ReadWrite);
}

void MainWindow::processFiles()
{
    QDir inputDir(QDir::currentPath());
    QStringList files = inputDir.entryList(QStringList() << inputMask, QDir::Files);
    foreach(QString fileName, files) {
        QString filePath = inputDir.absoluteFilePath(fileName);
        if (isFileClosed(filePath)) {
            modifyFile(filePath);
            if (deleteInputFiles) {
                QFile::remove(filePath);
            }
        }
    }
}

void MainWindow::modifyFile(const QString &filePath)
{
    QFile inputFile(filePath);
    if (inputFile.open(QIODevice::ReadOnly)) {
        QByteArray fileData = inputFile.readAll();
        inputFile.close();

        for (int i = 0; i < fileData.size(); i++) {
            fileData[i] = fileData[i] ^ xorValue[i % xorValue.size()];
        }

        QString outputFileName = outputPath + "/" + QFileInfo(filePath).fileName();
        if (!overwriteFiles) {
            int counter = 1;
            while (QFile::exists(outputFileName)) {
                outputFileName = outputPath + "/" + QFileInfo(filePath).baseName() + "_" + QString::number(counter++) + "." + QFileInfo(filePath).suffix();
            }
        }

        QFile outputFile(outputFileName);
        if (outputFile.open(QIODevice::WriteOnly)) {
            outputFile.write(fileData);
            outputFile.close();
        }
    }
}

void MainWindow::on_startButton_clicked()
{
    inputMask = ui->inputMaskLineEdit->text();
    outputPath = ui->outputPathLineEdit->text();
    deleteInputFiles = ui->deleteFilesCheckBox->isChecked();
    overwriteFiles = ui->overwriteFilesCheckBox->isChecked();
    checkInterval = ui->intervalSpinBox->value();
    xorValue = QByteArray::fromHex(ui->xorValueLineEdit->text().toUtf8());

    if (ui->timerCheckBox->isChecked()) {
        timer->start(checkInterval * 1000);
    } else {
        processFiles();
    }
}

