#ifndef FILEFORM_H
#define FILEFORM_H

#include <QWidget>

namespace Ui {
    class FileForm;
}

class FileForm : public QWidget
{
    Q_OBJECT

public:
    explicit FileForm(QWidget *parent = 0);
    ~FileForm();

private:
    Ui::FileForm *ui;
};

#endif // FILEFORM_H
