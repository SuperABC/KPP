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
	int idFile = addMenuList("文件", 0);
	int idEdit = addMenuList("编辑", 0);
	int idView = addMenuList("视图", 0);
	int idSetting = addMenuList("设置", 0);
	int idHelp = addMenuList("帮助", 0);
	addMenuItem("新建\tCtrl + N", idFile, nullFunc);
	addMenuItem("打开\tCtrl + O", idFile, nullFunc);
	addMenuItem("保存\tCtrl + S", idFile, nullFunc);
	addMenuItem("关闭", idFile, nullFunc);
	addMenuItem("退出\tAlt + F4", idFile, nullFunc);
	addMenuItem("撤销\tCtrl + Z", idEdit, nullFunc);
	addMenuItem("重做\tCtrl + Y", idEdit, nullFunc);
	addMenuItem("复制\tCtrl + C", idEdit, nullFunc);
	addMenuItem("剪切\tCtrl + X", idEdit, nullFunc);
	addMenuItem("粘贴\tCtrl + V", idEdit, nullFunc);
	addMenuItem("清空", idEdit, nullFunc);
	addMenuItem("琴键", idView, nullFunc);
	dropDown = addMenuItem("瀑布", idView, nullFunc);
	addMenuItem("乐谱", idView, nullFunc);
	addMenuItem("调音板", idView, nullFunc);
	addMenuItem("文件", idView, nullFunc);
	addMenuItem("键盘", idView, nullFunc);
	addMenuItem("显示", idSetting, nullFunc);
	addMenuItem("声音", idSetting, nullFunc);
	addMenuItem("键盘", idSetting, nullFunc);
	addMenuItem("关于", idHelp, nullFunc);
	addMenuItem("说明书", idHelp, nullFunc);
}