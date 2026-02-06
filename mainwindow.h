#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QRadioButton>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QString>

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
protected:
    // 重写鼠标事件处理函数
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
private slots:
    void on_checkBox_toggled(bool checked);

    void on_LoginButton_clicked();

    void on_RegisterButton_clicked();

    void on_pushButton_clicked();
    void on_pushButtonClose_clicked();

    void on_pushButtonMin_clicked();

signals:

private:
    Ui::MainWindow *ui;
    // 用于拖动窗口的变量
    bool m_dragging;
    QPoint m_dragPosition;

};
#endif // MAINWINDOW_H
