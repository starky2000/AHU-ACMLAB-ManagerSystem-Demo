#ifndef AHU_ACMLAB_MANAGERSYSTEM_STUDENT_H_
#define AHU_ACMLAB_MANAGERSYSTEM_STUDENT_H_

#include <iostream>
#include "member.h"
using namespace std;
class Student : public Member{
 public:
  //���캯��
  Student(const string &id, const string  &name, const string &position);
  //��ʾ��Ա��Ϣ
  virtual void ShowInfo();
  //��ȡ���
  virtual string GetPosition();
};

#endif