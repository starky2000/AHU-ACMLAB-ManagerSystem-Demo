#ifndef AHU_ACMLAB_MANAGERSYSTEM_MANAGER_H_
#define AHU_ACMLAB_MANAGERSYSTEM_MANAGER_H_

#include <iostream>
#include "member.h"
using namespace std;

class Manager{
 public:
  Manager();
  //��ʾ�˵�
  void ShowMenu();
  //�˳�ϵͳ
  void ExitSystem();
  //��ӳ�Ա
  void AddMember();

  ~Manager();
 private:
  int member_number_;//ʵ����������
  Member ** member_array_;//˳���洢���г�Ա
};

#endif