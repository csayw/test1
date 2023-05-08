#ifndef HELLODIALOG_H
#define HELLODIALOG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class hellodialog; }
QT_END_NAMESPACE

class hellodialog : public QMainWindow
{
    Q_OBJECT

public:
    hellodialog(QWidget *parent = nullptr);
    ~hellodialog();

private:
    Ui::hellodialog *ui;
};
#endif // HELLODIALOG_H
