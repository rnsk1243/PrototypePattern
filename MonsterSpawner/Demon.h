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
		cout << "부름에 명 받아 'Demon'(체력 :" << m_health << "이속 :" << m_speed << ")가 소환 되었습니다." << endl;
	}

	virtual void attack()
	{
		cout << "데몬의 스윙 어택" << endl;
	}

};

