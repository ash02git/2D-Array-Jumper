#include "../../header/Level/LevelModel.h"
namespace Level
{
	LevelModel::LevelModel() { current_level_index = 0; }
	LevelModel::~LevelModel() {}

	
	BlockType LevelModel::getCurrentBoxValue(int currentPosition)
	{
		//return current_level_data.level_boxes[currentPosition];
		return level_configuration.levels[current_level_index].level_boxes[currentPosition];
	}

	void LevelModel::loadNextLevel()
	{
		current_level_index++;
	}

	int LevelModel::getCurrentLevelNumber()
	{
		return current_level_index + 1;
	}

	bool LevelModel::isLastLevel()
	{
		if (current_level_index == LevelConfiguration::number_of_levels -1)
			return true;
		else
			return false;
	}

	void LevelModel::reset()
	{
		current_level_index = 0;
	}
	
}