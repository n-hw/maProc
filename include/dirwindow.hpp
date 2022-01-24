#pragma once

#include <QDialog>

#include "include/ps.hpp"
#include "include/mainwindow.hpp"

namespace Ui
{
    class DirWindow;
}

class DirWindow : public QDialog
{
    Q_OBJECT

public:
    explicit DirWindow(QWidget *parent = nullptr);
    virtual ~DirWindow();

    pid_t getPid();
private:
    Ui::DirWindow *ui;
    pid_t pid;
    Ps ps;

    void Conf_pidTable(void);
    void Set_pidTable(void);

private slots:
    void on_pidTable_doubleClicked(const QModelIndex &index);
};
