#ifndef AHU_ACMLAB_MANAGERSYSTEM_TEACHER_H_
#define AHU_ACMLAB_MANAGERSYSTEM_TEACHER_H_

#include <iostream>
#include "member.h"
using namespace std;
class Teacher : public Member{
 public:
  //构造函数
  Teacher(const string &id, const string  &name, const string &position);
  //显示成员信息
  virtual void ShowInfo();
  //获取身份
  virtual string GetPosition();
};

#endif