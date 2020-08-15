#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>

namespace Ui {
	class SettingsDialog;
}

class SettingsDialog : public QDialog {
Q_OBJECT

signals:

	void iconSpacingValueChanged(int spacing);

	void iconScaleValueChanged(int scale);

public:
	explicit SettingsDialog(QWidget* parent = nullptr);

	~SettingsDialog() override;


private:
	Ui::SettingsDialog* ui;
};

#endif // SETTINGSDIALOG_H