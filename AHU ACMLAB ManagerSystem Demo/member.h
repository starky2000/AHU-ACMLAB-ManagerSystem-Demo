#ifndef AHU_ACMLAB_MANAGERSYSTEM_MEMBER_H_
#define AHU_ACMLAB_MANAGERSYSTEM_MEMBER_H_

#include <iostream>
#include <string>
using namespace std;

//��Ա������
class Member{
 public:
  //��ʾ������Ϣ
  virtual void ShowInfo() = 0;
  //��ȡ���
  virtual string GetPosition() = 0;

  string member_id_;//��Աѧ��/����
  string member_name_;//��Ա����
  string member_position_;//��Ա���
};

#endif