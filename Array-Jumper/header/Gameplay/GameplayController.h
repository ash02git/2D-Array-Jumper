#pragma once
#include "../../header/Level/BlockType.h"
namespace Gameplay
{
	class GameplayController
	{
	private:
		void processObstacle();
		void processEndBlock();
		bool isObstacle(Level::BlockType value);
		bool isEndBlock(Level::BlockType value);

		bool isLastLevel();
		void loadNextLevel();

		void gameOver();

		void gameWon();
	public:
		void initialize();
		void update();
		void render();

		void onPositionChanged(int position);
		void onDeath();
	};
}