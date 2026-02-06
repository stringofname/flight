#ifndef USERSPACE_H
#define USERSPACE_H

#include <QWidget>
#include <QSqlDatabase>

namespace Ui {
class userspace; // 注意这里类名应为小写
}

class userspace : public QWidget
{
    Q_OBJECT

public:
    explicit userspace(QWidget *parent = nullptr);
    ~userspace();

    void setUserAccount(const QString &account);

private slots:
    void loadPurchasedTickets();
     void on_ReturnButton_clicked();
    void cancelTicket(const QString &flightNumber, const QString &flightDate, const QString &seatClass);

private:
    Ui::userspace *ui;
    QSqlDatabase db;
    QString currentAccount;
};

#endif // USERSPACE_H
