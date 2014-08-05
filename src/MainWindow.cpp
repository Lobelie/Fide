#include "MainWindow.hpp"

#include <QDockWidget>
#include <QTableWidget>
#include <QTextEdit>
#include <string>

#include "FileTreeView.hpp"

MainWindow::MainWindow(QWidget *_parent) :
    QMainWindow(_parent)
{
    initTreeView();
    initTabWidget();
}

MainWindow::~MainWindow() {
}

void MainWindow::initTreeView() {
    QDockWidget* dock = new QDockWidget(this);
    tree = new FileTreeView(dock);
    dock->setWidget(tree);
    addDockWidget(Qt::LeftDockWidgetArea, dock);
}

void MainWindow::initTabWidget() {
    tab = new QTabWidget(this);
    tab->insertTab(0, new QTextEdit(tab), QString::fromStdString("Untitled file"));
    setCentralWidget(tab);
}
