// Darian Marvel
// 9/24/18
// Learning C++, creating a cool game based on the Revolutionary War

#include "stdafx.h"

#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "Soldier.h"

using namespace std;

int main()
{

	Army pArmy;
	Army eArmy;

	pArmy.addSoldier(5000);
	//eArmy.addSoldier(5000);

	cout << "Army Size: " << pArmy.size() << endl;

	cin.get();

	pArmy.clear();

	cout << "Army Size: " << pArmy.size() << endl;

	cin.get();

	pArmy.addSoldier(5000);

	cout << "Army Size: " << pArmy.size() << endl;

	cin.get();

    return 0;
}

