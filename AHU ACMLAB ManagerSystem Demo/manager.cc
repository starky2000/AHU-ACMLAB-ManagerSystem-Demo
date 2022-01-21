#include "manager.h"

using namespace std;

//默认构造
Manager::Manager(){
	this->member_number_=0;
	this->member_array_=NULL;
}

Manager::~Manager(){
}

//显示菜单
void Manager::ShowMenu(){
	cout << "*********************************************" << endl;
	cout << "*********欢迎使用AHUACM实验室管理系统********" << endl;
	cout << "***************0.退出管理程序****************" << endl;
	cout << "***************1.增加成员信息****************" << endl;
	cout << "***************2.显示成员信息****************" << endl;
	cout << "***************3.删除毕业成员****************" << endl;
	cout << "***************4.修改成员信息****************" << endl;
	cout << "***************5.查找成员信息****************" << endl;
	cout << "***************6.按照序号编号****************" << endl;
	cout << "***************7.清空所有存档****************" << endl;
	cout << "*********************************************" << endl;

}

//退出系统
void Manager::ExitSystem(){
	system("cls");
	cout << "欢迎下次使用!" << endl;
	exit(0);
	return;
}

//添加成员
void Manager::AddMember(){
	cout << "请输入添加成员的数量: " << endl;
	int addnum=0;
	cin >> addnum;

}