#include "fileform.h"
#include "ui_fileform.h"

FileForm::FileForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FileForm)
{
    ui->setupUi(this);
}

FileForm::~FileForm()
{
    delete ui;
}
