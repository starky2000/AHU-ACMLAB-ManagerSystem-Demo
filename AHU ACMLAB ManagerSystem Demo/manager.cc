#include "manager.h"

using namespace std;

//Ĭ�Ϲ���
Manager::Manager(){
	this->member_number_=0;
	this->member_array_=NULL;
}

Manager::~Manager(){
}

//��ʾ�˵�
void Manager::ShowMenu(){
	cout << "*********************************************" << endl;
	cout << "*********��ӭʹ��AHUACMʵ���ҹ���ϵͳ********" << endl;
	cout << "***************0.�˳��������****************" << endl;
	cout << "***************1.���ӳ�Ա��Ϣ****************" << endl;
	cout << "***************2.��ʾ��Ա��Ϣ****************" << endl;
	cout << "***************3.ɾ����ҵ��Ա****************" << endl;
	cout << "***************4.�޸ĳ�Ա��Ϣ****************" << endl;
	cout << "***************5.���ҳ�Ա��Ϣ****************" << endl;
	cout << "***************6.������ű��****************" << endl;
	cout << "***************7.������д浵****************" << endl;
	cout << "*********************************************" << endl;

}

//�˳�ϵͳ
void Manager::ExitSystem(){
	system("cls");
	cout << "��ӭ�´�ʹ��!" << endl;
	exit(0);
	return;
}

//��ӳ�Ա
void Manager::AddMember(){
	cout << "��������ӳ�Ա������: " << endl;
	int addnum=0;
	cin >> addnum;

}