#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSystemTrayIcon>
#include <QCloseEvent>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

private slots:
	void update();
	void toggleTray(QSystemTrayIcon::ActivationReason);
	void quit();
	void save();

private:
	Ui::MainWindow *ui;

	void createTray();
	void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H