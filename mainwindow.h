#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QDir>
#include <QFile>
#include <QFileDialog>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startButton_clicked();
    void processFiles();


private:
    Ui::MainWindow *ui;
    QTimer *timer;
    QByteArray xorValue;
    QString inputMask;
    QString outputPath;
    bool deleteInputFiles;
    bool overwriteFiles;
    int checkInterval;
    bool isFileClosed(const QString &fileName);
    void modifyFile(const QString &filePath);
};
#endif // MAINWINDOW_H
