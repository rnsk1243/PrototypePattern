#pragma once
#include<iostream>
using namespace std;
class CMonster
{
public:
	CMonster() {}
	virtual ~CMonster() {}
	// � ���� ��ü���� �ڽŰ� ����� ���� ��ü�� ����� ����
	virtual CMonster* clone() = 0;
	virtual void hi() = 0;
	virtual void attack() {
		cout << "�⺻ ����" << endl;
	}
};

