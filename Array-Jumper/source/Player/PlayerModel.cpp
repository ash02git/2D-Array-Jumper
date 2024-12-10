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
	void PlayerModel::resetPlayer()
	{
		current_position = 0;
		player_state = PlayerState::ALIVE;
		current_lives = max_lives;
	}
	void PlayerModel::resetPosition()
	{
		current_position = 0;
	}
	int PlayerModel::getCurrentLives()
	{
		return current_lives;
	}
	void PlayerModel::decrementLife()
	{
		current_lives -= 1;
	}
}