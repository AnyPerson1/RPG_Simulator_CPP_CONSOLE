#pragma once

#ifndef ENEMY_H;
#define ENEMY_H;

#include <iostream>

class Enemy {

public:
	Enemy(std::string name, int hp, int attackPoint, int armorLevel, int damageDivide, int level, int index) : name(name), index(index), hp(hp), level(level), attackPoint(attackPoint), armorLevel(armorLevel), damageDivide(damageDivide) {};
	bool damage(int* damage, int* level);

	std::string name;
	bool isLiving;
	int index;
	int hp;
	int level;
	int attackPoint;
	int armorLevel;
	int damageDivide; // eðer armor level vurulan vuruþun levelinden yüksek ise verilen hasar damageDivide ye bölünür.
};

#endif