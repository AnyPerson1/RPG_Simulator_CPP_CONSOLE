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
		int damageDivide; // eðer armor level vurulan vuruþun levelinden yüksek ise verilen hasar damageDivide ye bölünür.
};
