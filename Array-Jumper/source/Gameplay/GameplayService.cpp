#include "../../header/Gameplay/GameplayService.h"
namespace Gameplay
{
	void GameplayService::destroy()
	{
	}
	void GameplayService::initialize()
	{
	}
	void GameplayService::update()
	{
	}
	void GameplayService::render()
	{
	}
	void GameplayService::onPositionChanged(int position)
	{
		gameplay_controller->onPositionChanged(position);
	}
}