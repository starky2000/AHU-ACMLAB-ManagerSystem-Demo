#ifndef AHU_ACMLAB_MANAGERSYSTEM_TEACHER_H_
#define AHU_ACMLAB_MANAGERSYSTEM_TEACHER_H_

#include <iostream>
#include "member.h"
using namespace std;
class Teacher : public Member{
 public:
  //���캯��
  Teacher(const string &id, const string  &name, const string &position);
  //��ʾ��Ա��Ϣ
  virtual void ShowInfo();
  //��ȡ���
  virtual string GetPosition();
};

#endif