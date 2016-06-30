#pragma once
#include "Monster.h"
#include<iostream>
using namespace std;

class CGhost :
	public CMonster
{
	int m_health;
	int m_speed;
public:

	CGhost(int health, int speed):m_health(health), m_speed(speed){}

	~CGhost(){}

	virtual CMonster* clone()
	{
		return new CGhost(m_health, m_speed);
	}

	virtual void hi()
	{
		cout << "�θ��� �� �޾� 'Ghost'(ü�� :" << m_health << "�̼� :" << m_speed <<")�� ��ȯ �Ǿ����ϴ�." << endl;
	}

};

