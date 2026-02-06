#ifndef GOVERNOR_H
#define GOVERNOR_H

#include <QWidget>

namespace Ui {
class governor;
}

class governor : public QWidget
{
    Q_OBJECT

public:
    explicit governor(QWidget *parent = nullptr);
    ~governor();

private slots:
    void on_btnAdd_clicked();    // 添加航班按钮
    void on_btnDelete_clicked(); // 删除航班按钮
    void on_btnChange_clicked(); // 查询航班按钮
    void on_btnSereach_clicked();// 返回按钮

private:
    Ui::governor *ui;
};

#endif // GOVERNOR_H
