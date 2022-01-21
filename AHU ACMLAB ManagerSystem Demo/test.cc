#include <iostream>
#include "member.h"
#include "student.h"
#include "student_leader.h"
#include "teacher.h"
using namespace std;

int main(){
	Member * member1 = new Student("E01814184", "程晗", "学生");
	Member * member2 = new StudentLeader("P01914253", "余思龙", "学生负责人");
	Member * member3 = new Teacher("123456", "周健", "老师");
	member1->ShowInfo();
	member2->ShowInfo();
	member3->ShowInfo();
	delete member1;
	delete member2;
	delete member3;

	return 0;
}