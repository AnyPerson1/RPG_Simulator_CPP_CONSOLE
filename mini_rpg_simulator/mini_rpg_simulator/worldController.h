#pragma once
#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <iostream>
#include <vector>
#include <cstdlib>
#include "Enemy.h"

class Controller {
public:
	std::vector<Enemy*> enemies;
	static void addEnemyToGlobalVector(Enemy* enemy);
	static Enemy* pickRandomEnemy(int level);
	static void kill(int* index);
};
#endif