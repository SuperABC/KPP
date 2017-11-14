#include "main.h"

int dropDown;

void sgSetup() {
	initWindow(800, 600, "Keyboard Piano Player", BIT_MAP);
	setMenu();
}
void sgLoop() {
	disableItem(dropDown);
}

void nullFunc() {}
void setMenu() {
	initMenu();
	int idFile = addMenuList("�ļ�", 0);
	int idEdit = addMenuList("�༭", 0);
	int idView = addMenuList("��ͼ", 0);
	int idSetting = addMenuList("����", 0);
	int idHelp = addMenuList("����", 0);
	addMenuItem("�½�\tCtrl + N", idFile, nullFunc);
	addMenuItem("��\tCtrl + O", idFile, nullFunc);
	addMenuItem("����\tCtrl + S", idFile, nullFunc);
	addMenuItem("�ر�", idFile, nullFunc);
	addMenuItem("�˳�\tAlt + F4", idFile, nullFunc);
	addMenuItem("����\tCtrl + Z", idEdit, nullFunc);
	addMenuItem("����\tCtrl + Y", idEdit, nullFunc);
	addMenuItem("����\tCtrl + C", idEdit, nullFunc);
	addMenuItem("����\tCtrl + X", idEdit, nullFunc);
	addMenuItem("ճ��\tCtrl + V", idEdit, nullFunc);
	addMenuItem("���", idEdit, nullFunc);
	addMenuItem("�ټ�", idView, nullFunc);
	dropDown = addMenuItem("�ٲ�", idView, nullFunc);
	addMenuItem("����", idView, nullFunc);
	addMenuItem("������", idView, nullFunc);
	addMenuItem("�ļ�", idView, nullFunc);
	addMenuItem("����", idView, nullFunc);
	addMenuItem("��ʾ", idSetting, nullFunc);
	addMenuItem("����", idSetting, nullFunc);
	addMenuItem("����", idSetting, nullFunc);
	addMenuItem("����", idHelp, nullFunc);
	addMenuItem("˵����", idHelp, nullFunc);
}