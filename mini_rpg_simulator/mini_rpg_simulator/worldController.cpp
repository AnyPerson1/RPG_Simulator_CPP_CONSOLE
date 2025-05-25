#include <iostream>
#include <vector>
#include <cstdlib>
#include "Enemy.h"

class Controller {
	public:
		static std::vector<Enemy*> enemies;

		void addEnemyToGlobalVector(Enemy* enemy)
		{
			enemies.push_back(enemy);
			std::cout << "Enemy added to global list" << std::endl;
		}

		Enemy* pickRandomEnemy(int level)
		{
			int index;
			do
			{
				index = rand() % enemies.size() + 1;

			} while (enemies[index]->level != level);
				return enemies[index];
		}

		void kill(int* index)
		{
			delete enemies[*index];
			enemies.erase(enemies.begin() + *index);
			std::cout << "Enemy Killed";
		}

};