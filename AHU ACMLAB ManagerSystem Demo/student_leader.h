#ifndef AHU_ACMLAB_MANAGERSYSTEM_STUDENT_LEADER_H_
#define AHU_ACMLAB_MANAGERSYSTEM_STUDENT_LEADER_H_

#include <iostream>
#include "member.h"
using namespace std;
class StudentLeader : public Member{
 public:
  //���캯��
  StudentLeader(const string &id, const string  &name, const string &position);
  //��ʾ��Ա��Ϣ
  virtual void ShowInfo();
  //��ȡ���
  virtual string GetPosition();
};

#endif