#include "student_leader.h"

StudentLeader::StudentLeader(const string id, const string name, const string position){
    this->member_id_ = id;
    this->member_name_ = name;
    this->member_position_ = position;
}

void StudentLeader::ShowInfo(){
    cout << "学号: " << this->member_id_ << endl;
    cout << "姓名: " << this->member_name_ << endl;
    cout << "身份: " << this->GetPosition() << endl;
	return ;
}

string StudentLeader::GetPosition(){
	return "学生负责人";
}