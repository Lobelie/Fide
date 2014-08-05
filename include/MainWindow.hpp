#include <QMainWindow>

class FileTreeView;
class QTabWidget;
class MainWindow : public QMainWindow {
public:
    MainWindow(QWidget* _parent = 0);
    virtual ~MainWindow();

protected:

private:
    FileTreeView* tree;
    QTabWidget* tab;

    void initTreeView();
    void initTabWidget();

};
