#pragma once
#include"Monster.h"

class CSpawner
{
	CMonster* m_prototype;
public:

	CSpawner(CMonster* prototype):m_prototype(prototype){}

	~CSpawner(){}

	CMonster* spawnMonster()
	{
		return m_prototype->clone();
	}

};

