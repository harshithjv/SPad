#ifndef SPAD_FRONTEND_H
#define SPAD_FRONTEND_H

#include <QMainWindow>

namespace Ui {
    class spad_frontend;
}

class spad_frontend : public QMainWindow
{
    Q_OBJECT

public:
    explicit spad_frontend(QWidget *parent = 0);
    ~spad_frontend();

private:
    Ui::spad_frontend *ui;
};

#endif // SPAD_FRONTEND_H
