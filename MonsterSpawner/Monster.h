#pragma once
#include<iostream>
using namespace std;
class CMonster
{
public:
	CMonster() {}
	virtual ~CMonster() {}
	// 어떤 몬스터 객체든지 자신과 비슷한 몬스터 객체를 만드는 원형
	virtual CMonster* clone() = 0;
	virtual void hi() = 0;
	virtual void attack() {
		cout << "기본 공격" << endl;
	}
};

