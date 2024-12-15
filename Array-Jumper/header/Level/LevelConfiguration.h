#pragma once
#include "LevelData.h"
namespace Level
{
	class LevelConfiguration
	{
	private:
		BlockType level_1[LevelData::number_of_boxes] = 
		{
		ONE, TWO, OBSTACLE_ONE, TWO, THREE, ONE, OBSTACLE_TWO, TWO, ONE, TARGET
		};

		BlockType level_2[LevelData::number_of_boxes] = 
		{
	   ONE, TWO, OBSTACLE_TWO, ONE, TWO, OBSTACLE_ONE, THREE, OBSTACLE_ONE, ONE, TARGET
		};

		BlockType level_3[LevelData::number_of_boxes] =
		{
			ONE, THREE, OBSTACLE_ONE, OBSTACLE_TWO, ONE, TWO, OBSTACLE_ONE, TWO, ONE, TARGET
		};
	public:
		static const int number_of_levels = 3;
		LevelData levels[number_of_levels];

		LevelConfiguration()
		{
			for (int j = 0;j < LevelData::number_of_boxes;j++)
			{
				levels[0].level_boxes[j] = level_1[j];
			}

			for (int j = 0;j < LevelData::number_of_boxes;j++)
			{
				levels[1].level_boxes[j] = level_2[j];
			}

			for (int j = 0;j < LevelData::number_of_boxes;j++)
			{
				levels[2].level_boxes[j] = level_3[j];
			}
		}
	};
}