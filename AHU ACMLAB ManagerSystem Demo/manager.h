#ifndef AHU_ACMLAB_MANAGERSYSTEM_MANAGER_H_
#define AHU_ACMLAB_MANAGERSYSTEM_MANAGER_H_

#include <iostream>
#include "member.h"
using namespace std;

class Manager{
 public:
  Manager();
  //显示菜单
  void ShowMenu();
  //退出系统
  void ExitSystem();
  //添加成员
  void AddMember();

  ~Manager();
 private:
  int member_number_;//实验室总人数
  Member ** member_array_;//顺序表存储所有成员
};

#endif