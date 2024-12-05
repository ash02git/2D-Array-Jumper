#include "../../header/Player/PlayerModel.h"
#include <iostream>
namespace Player
{
	int PlayerModel::getCurrentPosition()
	{
		std::cout << "Current position of player is " << current_position << "\n";
		return current_position;
	}
	void PlayerModel::SetCurrentPosition(int newPosition)
	{
		std::cout << "New position of player is " << newPosition << "\n";
		current_position = newPosition;
	}
	PlayerState PlayerModel::GetPlayerState()
	{
		return player_state;
	}
	void PlayerModel::SetPlayerState(PlayerState new_player_state)
	{
		player_state = new_player_state;
	}
	void PlayerModel::initialize()
	{
	}
	void PlayerModel::update()
	{
	}
	void PlayerModel::render()
	{
	}
}