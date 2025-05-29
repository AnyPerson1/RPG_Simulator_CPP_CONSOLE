#include <iostream>
#include "worldController.h"

class Enemy {
	public:
		std::string name;
		bool isLiving;
		int index;
		int level;
		int hp;
		int attackPoint;
		int armorLevel;
		int damageDivide; // e�er armor level vurulan vuru�un levelinden y�ksek ise verilen hasar damageDivide ye b�l�n�r.

		Enemy(std::string name,int hp, int attackPoint, int armorLevel, int damageDivide, int level, int index) : name(name),index(index), hp(hp), level(level), attackPoint(attackPoint), armorLevel(armorLevel), damageDivide(damageDivide)
		{
			isLiving = true;
		}

		bool damage(int* damage, int* level)
		{
			bool hit = armorLevel < *level;
			bool died;
			if (hit)
			{
				died = (hp - *damage) < 0;
				hp -= *damage;
			}
			if (died)
			{
				std::cout << "Enemy " << name << " died.";
				Controller::kill(&index);
			}
			else
			{
				std::cout << "Enemy " << name << "health : " << hp;
			}
			return hit;
		}

};
