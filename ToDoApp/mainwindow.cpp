#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnAdd_clicked()
{

    QListWidgetItem* item=new QListWidgetItem(ui->txtTask->text(),ui->listWidget);
    ui->listWidget->addItem(item);
    ui->txtTask->setFocus();

}


void MainWindow::on_btnRemove_clicked()
{
    int rowItem=ui->listWidget->currentRow();
    ui->listWidget->takeItem(rowItem);
}


void MainWindow::on_btnRemoveAll_clicked()
{
    ui->listWidget->clear();
}


void MainWindow::on_txtTask_returnPressed()
{
    ui->btnAdd->click();
}

