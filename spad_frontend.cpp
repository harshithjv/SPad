#include "spad_frontend.h"
#include "ui_spad_frontend.h"

spad_frontend::spad_frontend(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::spad_frontend)
{
    ui->setupUi(this);
}

spad_frontend::~spad_frontend()
{
    delete ui;
}
