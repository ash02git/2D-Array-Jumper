#pragma once
#include "../../header/UI/UIElement/ImageView.h"
#include "../../header/Level/LevelModel.h"
namespace Player
{
	class PlayerController;
	class PlayerView
	{
	private:
		UI::UIElement::ImageView* player_image;
		sf::RenderWindow* game_window;
		PlayerController* player_controller;

		float player_height;
		float player_width;
		//maybe change later
		Level::BoxDimensions current_box_dimensions;

		void initializePlayerImage(); //Initialize player_image 
		void drawPlayer(); //Called every frame to render the sprite on the screen
		void loadPlayer(); //Loads the information needed to render the player
		void calculatePlayerDimensions(); //Calculate the size of image
		void updatePlayerPosition(); //Updates the Player Sprite's position on each frame
		sf::Vector2f calulcatePlayerPosition();

	public:
		PlayerView(PlayerController *controller);
		~PlayerView();

		void initialize();
		void update();
		void render();

	};
}