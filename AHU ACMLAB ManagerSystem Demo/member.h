#ifndef AHU_ACMLAB_MANAGERSYSTEM_MEMBER_H_
#define AHU_ACMLAB_MANAGERSYSTEM_MEMBER_H_

#include <iostream>
#include <string>
using namespace std;

//成员抽象类
class Member{
 public:
  //显示个人信息
  virtual void ShowInfo() = 0;
  //获取身份
  virtual string GetPosition() = 0;

  string member_id_;//成员学号/工号
  string member_name_;//成员姓名
  string member_position_;//成员身份
};

#endif