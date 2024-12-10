#pragma once
#include "GameplayController.h"
namespace Gameplay
{
	class GameplayService
	{
	private:
		GameplayController* gameplay_controller;
		void destroy();

	public:
		void initialize();
		void update();
		void render();

		void onPositionChanged(int position);
	};
}