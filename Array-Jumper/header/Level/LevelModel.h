#pragma once
#include "../../header/Level/LevelData.h"
#include "LevelConfiguration.h"
namespace Level
{
	struct BoxDimensions
	{
		float box_width;
		float box_height;
		float box_spacing;
		float box_spacing_percentage = 0.3f;
		float bottom_offset = 200.0f;
	};
	class LevelModel
	{
	private:
		//LevelData current_level_data;
		LevelConfiguration level_configuration;
		int current_level_index;

	public:
		LevelModel();
		~LevelModel();
		BlockType getCurrentBoxValue(int currentPosition);
		void loadNextLevel();
		int getCurrentLevelNumber();
		bool isLastLevel();
		void reset();
	};
}