#include "hellodialog.h"
#include "./ui_hellodialog.h"

hellodialog::hellodialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::hellodialog)
{
    ui->setupUi(this);
}

hellodialog::~hellodialog()
{
    delete ui;
}

