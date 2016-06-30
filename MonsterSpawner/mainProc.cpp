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
	잡담... &과 *에 관하여..

	int num1 = 10;
	int &ref1 = num1; // 초기화 방법 1

	num1 = 1;
	cout << ref1 << endl;

	cout << &ref1 << endl;
	cout << "값은 = " << *&num1 << endl;
	// &ref1 == &num1 은 같다.
	// &는 어떤객체의 주소를 나타낸다.
	// *는 주소의 객체를 나타낸다.
	int num2(10);
	int &ref2(num2); // 초기화 방법 2
	*/

}