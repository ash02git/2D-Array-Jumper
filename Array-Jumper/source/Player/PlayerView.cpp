#include "../../header/Player/PlayerView.h"
#include "../../header//Global/Config.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Player/PlayerModel.h"
#include "../../header/Player/PlayerController.h"

using namespace Global; //-------------Needed for Config

namespace Player
{
	void PlayerView::initializePlayerImage()
	{
		player_image->initialize(Config::character_texture_path,player_width,player_height,sf::Vector2f(0,0));
	}
	void PlayerView::drawPlayer()
	{
		player_image->render();
	}
	void PlayerView::loadPlayer()
	{
		calculatePlayerDimensions();
		initializePlayerImage();
	}
	void PlayerView::calculatePlayerDimensions()
	{
		player_height = 1000.f;
		player_width = 1000.f;
	}
	void PlayerView::updatePlayerPosition()
	{
		player_image->setPosition(calulcatePlayerPosition());
	}
	sf::Vector2f PlayerView::calulcatePlayerPosition()
	{
		return sf::Vector2f(0,0);
	}

	PlayerView::PlayerView(PlayerController* controller)
	{
		game_window = nullptr;
		player_image = new UI::UIElement::ImageView();
		player_controller = controller;
	}

	PlayerView::~PlayerView() {}

	void PlayerView::initialize()
	{
		game_window = ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
		loadPlayer();
	}

	void PlayerView::update()
	{
		updatePlayerPosition();
	}

	void PlayerView::render()
	{
		PlayerState current_state = player_controller->getPlayerState();
		switch (player_controller->getPlayerState())
		{
		case PlayerState::ALIVE: 
			drawPlayer();
			break;
		}
	}
}