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
	void addEnemyToGlobalVector(Enemy* enemy);
	Enemy* pickRandomEnemy(int level);
	void kill(int* index);
};
#endif