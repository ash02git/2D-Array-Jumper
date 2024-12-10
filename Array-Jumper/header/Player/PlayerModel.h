#pragma once
namespace Player
{
	enum class PlayerState
	{
		ALIVE,
		DEAD
	};
	
	class PlayerModel
	{
	private:
		int current_position;
		PlayerState player_state;
		const int max_lives = 3;
		int current_lives;

	public:
		int getCurrentPosition();
		void SetCurrentPosition(int newPosition);
		PlayerState GetPlayerState();
		void SetPlayerState(PlayerState new_player_state);

		void initialize();
		void update();
		void render();

		void resetPlayer();
		void resetPosition();

		int getCurrentLives();
		void decrementLife();
	};
}
