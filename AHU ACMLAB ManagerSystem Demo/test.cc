#include <iostream>
#include "member.h"
#include "student.h"
#include "student_leader.h"
#include "teacher.h"
using namespace std;

int main(){
	Member * member1 = new Student("E01814184", "����", "ѧ��");
	Member * member2 = new StudentLeader("P01914253", "��˼��", "ѧ��������");
	Member * member3 = new Teacher("123456", "�ܽ�", "��ʦ");
	member1->ShowInfo();
	member2->ShowInfo();
	member3->ShowInfo();
	delete member1;
	delete member2;
	delete member3;

	return 0;
}