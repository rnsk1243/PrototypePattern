#include"Monster.h"
#include"Spawner.h"
#include"Ghost.h"
#include"Demon.h"

void main()
{
	CMonster* ghostPrototype = new CGhost(80, 5);
	CMonster* demonPrototype = new CDemon(100, 2);

	CSpawner* ghostSpawner = new CSpawner(ghostPrototype);
	CSpawner* demonSpawner = new CSpawner(demonPrototype);
	
	CMonster* ghost = ghostSpawner->spawnMonster();
	CMonster* demon = demonSpawner->spawnMonster();

	ghost->hi();
	ghost->attack();

	cout << endl;

	demon->hi();
	demon->attack();

	cout << endl;
	/*
	ghostSpawner->spawnMonster()->hi();
	demonSpawner->spawnMonster()->hi();

	demonSpawner->spawnMonster()->attack();

	ghostSpawner->spawnMonster()->attack();
	*/
	/*
	���... &�� *�� ���Ͽ�..

	int num1 = 10;
	int &ref1 = num1; // �ʱ�ȭ ��� 1

	num1 = 1;
	cout << ref1 << endl;

	cout << &ref1 << endl;
	cout << "���� = " << *&num1 << endl;
	// &ref1 == &num1 �� ����.
	// &�� ���ü�� �ּҸ� ��Ÿ����.
	// *�� �ּ��� ��ü�� ��Ÿ����.
	int num2(10);
	int &ref2(num2); // �ʱ�ȭ ��� 2
	*/

}