#include <iostream>
#include "worldController.h"

class Enemy {
	public:
		Enemy(std::string name,int hp, int attackPoint, int armorLevel, int damageDivide, int level, int index) : name(name),index(index), hp(hp), level(level), attackPoint(attackPoint), armorLevel(armorLevel), damageDivide(damageDivide)
		{

		}
		bool damage(int damage, int level)
		{

		}

		std::string name;
		int index;
		int level;
		int hp;
		int attackPoint;
		int armorLevel;
		int damageDivide; // e�er armor level vurulan vuru�un levelinden y�ksek ise verilen hasar damageDivide ye b�l�n�r.
};
