#include "teacher.h"

Teacher::Teacher(const string id, const string name, const string position){
    this->member_id_ = id;
    this->member_name_ = name;
    this->member_position_ = position;
}

void Teacher::ShowInfo(){
    cout << "����: " << this->member_id_ << endl;
    cout << "����: " << this->member_name_ << endl;
    cout << "���: " << this->GetPosition() << endl;
	return ;
}

string Teacher::GetPosition(){
	return "��ʦ";
}