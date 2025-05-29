#include <iostream>
#include <vector>
#include <cstdlib>
#include "Enemy.h"

class Controller {
	public:
		static std::vector<Enemy*> enemies;

		static void addEnemyToGlobalVector(Enemy* enemy)
		{
			enemies.push_back(enemy);
			std::cout << "Enemy added to global list" << std::endl;
		}

		static Enemy* pickRandomEnemy(int level)
		{
			int index;
			do
			{
				index = rand() % enemies.size() + 1;

			} while (enemies[index]->level != level && enemies[index]->isLiving);

			return enemies[index];
		}

		static void kill(int* index)
		{
			enemies[*index]->isLiving = false;
			std::cout << "Enemy Killed";
		}

};