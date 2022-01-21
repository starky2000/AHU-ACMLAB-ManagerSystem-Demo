#ifndef AHU_ACMLAB_MANAGERSYSTEM_STUDENT_LEADER_H_
#define AHU_ACMLAB_MANAGERSYSTEM_STUDENT_LEADER_H_

#include <iostream>
#include "member.h"
using namespace std;
class StudentLeader : public Member{
 public:
  //构造函数
  StudentLeader(const string &id, const string  &name, const string &position);
  //显示成员信息
  virtual void ShowInfo();
  //获取身份
  virtual string GetPosition();
};

#endif