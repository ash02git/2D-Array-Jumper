#pragma once
#include "../../header/UI/UIElement/ImageView.h"
namespace Player
{
	class PlayerView
	{
	private:
		UI::UIElement::ImageView* player_image;
		sf::RenderWindow* game_window;

		float player_height;
		float player_width;

		void initializePlayerImage(); //Initialize player_image 
		void drawPlayer(); //Called every frame to render the sprite on the screen
		void loadPlayer(); //Loads the information needed to render the player
		void calculatePlayerDimensions(); //Calculate the size of image
		void updatePlayerPosition(); //Updates the Player Sprite's position on each frame
		sf::Vector2f calulcatePlayerPosition();

	public:
		PlayerView();
		~PlayerView();

		void initialize();
		void update();
		void render();
	};
}