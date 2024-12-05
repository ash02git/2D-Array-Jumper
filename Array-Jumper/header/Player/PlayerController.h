#pragma once
#include "../../header/Player/MovementDirection.h"
#include "../../header/Event/EventService.h"
namespace Player
{
	class PlayerModel;
	class PlayerView;
	enum class PlayerState;

	class PlayerController
	{
	private:
		PlayerModel* player_model;
		PlayerView* player_view;

		Event::EventService* event_service;

		void destroy();

		void Move(MovementDirection direction);
		bool isPositionInBound(int targetPosition);
		void ReadInput();

	public:
		PlayerController();
		~PlayerController();

		void initialize();
		void update();
		void render();

		PlayerState getPlayerState();
		void setPlayerState(PlayerState new_player_state);

		int getCurrentPosition();

	};
}