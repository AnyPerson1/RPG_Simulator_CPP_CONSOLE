#include <iostream>

class Enemy {
	public:
		Enemy(std::string name,int hp, int attackPoint, int armorLevel, int damageDivide) : name(name), hp(hp), attackPoint(attackPoint), armorLevel(armorLevel), damageDivide(damageDivide)
		{

		}
	private:
		std::string name;
		int hp;
		int attackPoint;
		int armorLevel;
		int damageDivide; // e�er armor level vurulan vuru�un levelinden y�ksek ise verilen hasar damageDivide ye b�l�n�r.
};
