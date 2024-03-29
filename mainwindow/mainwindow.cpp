#include <QtGui>
#include "finddialog.h"
#include "gotocelldialog.h"
#include "sortdialog.h"

MainWindow::MainWindow()
{
  spreadsheet = new Spreadsheet;
  setCentralWidget(spreadsheet);
  
  createActions();
  createMenus();
  createContextMenu();
  createToolBars();
  createStatusBar();

  readSettings();
  
  findDialog = 0;
  
  setWindowIcon(QIcon(":/images/icon.png"));
  setCurrentFile("");
}

