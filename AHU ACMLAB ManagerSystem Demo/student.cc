#include "student.h"

Student::Student(const string &id, const string &name, const string &position){
    this->member_id_ = id;
    this->member_name_ = name;
    this->member_position_ = position;
}

void Student::ShowInfo(){
    cout << "学号: " << this->member_id_ << endl;
    cout << "姓名: " << this->member_name_ << endl;
    cout << "身份: " << GetPosition() << endl;

}

string Student::GetPosition(){
	return "学生";
}