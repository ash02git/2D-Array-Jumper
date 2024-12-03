#pragma once
#include "../../header/Level/LevelModel.h"
#include "../../header/Level/LevelView.h"
namespace Level
{
	class LevelController
	{
	private:
		LevelView* level_view;
		LevelModel* level_model;

		LevelData current_level_data;

	public:
		LevelController();
		~LevelController();

		void initialize();
		void update();
		void render();

		BlockType getCurrentBoxValue(int currentPosition);
	};
}