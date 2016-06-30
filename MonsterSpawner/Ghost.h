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
		cout << "부름에 명 받아 'Ghost'(체력 :" << m_health << "이속 :" << m_speed <<")가 소환 되었습니다." << endl;
	}

};

