#include "student.h"

Student::Student(const string &id, const string &name, const string &position){
    this->member_id_ = id;
    this->member_name_ = name;
    this->member_position_ = position;
}

void Student::ShowInfo(){
    cout << "ѧ��: " << this->member_id_ << endl;
    cout << "����: " << this->member_name_ << endl;
    cout << "���: " << GetPosition() << endl;

}

string Student::GetPosition(){
	return "ѧ��";
}