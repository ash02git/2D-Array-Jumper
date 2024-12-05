#include "../../header/Player/PlayerView.h"
#include "../../header//Global/Config.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Player/PlayerModel.h"
#include "../../header/Player/PlayerController.h"
#include <iostream>

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
		player_height = 143.f;
		player_width = 143.f;
		//maybe change later
		//current_box_dimensions = ServiceLocator::getInstance()->getLevelService()->getBoxDimensions();
		//player_height = current_box_dimensions.box_height;
		//player_width = current_box_dimensions.box_width;

		std::cout << "Player height and width in Player view is " << player_height << "," << player_width << "\n";
	}
	void PlayerView::updatePlayerPosition()
	{
		player_image->setPosition(calulcatePlayerPosition());
	}
	sf::Vector2f PlayerView::calulcatePlayerPosition()
	{
		//return sf::Vector2f(0,0);

		std::cout << "Current box dimensions. box spacing = " << current_box_dimensions.box_spacing << "\n";
		std::cout << "Current box dimensions. box width = " << current_box_dimensions.box_width << "\n";
		std::cout << "Current box dimensions. box height = " << current_box_dimensions.box_height << "\n";

		float xPosition = 143.0f*0.3f + static_cast<float>(player_controller->getCurrentPosition()) * (143.0f + 143.0f * 0.3f);//current_box_dimensions.box_width changed to 143.0f   current_box_dimensions.box_spacing changed to 143.f
		float yPosition = static_cast<float>(game_window->getSize().y) - 143.0f - current_box_dimensions.bottom_offset - player_height;//current_box_dimensions.box_height changed to 143
		return sf::Vector2f(xPosition, yPosition);
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