#include "teacher.h"

Teacher::Teacher(const string id, const string name, const string position){
    this->member_id_ = id;
    this->member_name_ = name;
    this->member_position_ = position;
}

void Teacher::ShowInfo(){
    cout << "工号: " << this->member_id_ << endl;
    cout << "姓名: " << this->member_name_ << endl;
    cout << "身份: " << this->GetPosition() << endl;
	return ;
}

string Teacher::GetPosition(){
	return "老师";
}