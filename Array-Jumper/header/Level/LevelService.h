#pragma once
#include "../../header/Level/LevelController.h"
namespace Level
{
	class LevelService
	{
	private:
		LevelController* level_controller;

		void destroy();
	public:
		LevelService();
		~LevelService();

		void intialize();
		void update();
		void render();
	};
}