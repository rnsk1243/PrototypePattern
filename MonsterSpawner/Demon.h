#pragma once
#include "Monster.h"
#include<iostream>
using namespace std;

class CDemon :
	public CMonster
{
	int m_health;
	int m_speed;
public:
	CDemon(int health, int speed);
	~CDemon();

	virtual CMonster* clone()
	{
		return new CDemon(m_health, m_speed);
	}
	virtual void hi()
	{
		cout << "�θ��� �� �޾� 'Demon'(ü�� :" << m_health << "�̼� :" << m_speed << ")�� ��ȯ �Ǿ����ϴ�." << endl;
	}

	virtual void attack()
	{
		cout << "������ ���� ����" << endl;
	}

};

