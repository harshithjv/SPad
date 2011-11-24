#include "spad_frontend.h"
#include "ui_spad_frontend.h"
#include "fileform.h"

spad_frontend::spad_frontend(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::spad_frontend)
{
    ui->setupUi(this);
    FileForm *child = new FileForm(this);
    ui->mdiArea->addSubWindow(child);
}

spad_frontend::~spad_frontend()
{
    delete ui;
}
