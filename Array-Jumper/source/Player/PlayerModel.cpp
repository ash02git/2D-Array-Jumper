#include "../../header/Player/PlayerModel.h"
namespace Player
{
	int PlayerModel::GetCurrentPosition()
	{
		return 0;
	}
	void PlayerModel::SetCurrentPosition(int newPosition)
	{
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