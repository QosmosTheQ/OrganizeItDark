#ifndef ORGANIZEIT_H
#define ORGANIZEIT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class OrganizeIt; }
QT_END_NAMESPACE

class OrganizeIt : public QMainWindow
{
    Q_OBJECT

public:
    OrganizeIt(QWidget *parent = nullptr);
    ~OrganizeIt();

private slots:
    void on_selectFolderButton_clicked();



    void on_organizeItButton_clicked();

private:
    Ui::OrganizeIt *ui;
};
#endif // ORGANIZEIT_H
