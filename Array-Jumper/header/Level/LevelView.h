#pragma once
#include "../../header/UI/UIElement/ImageView.h"
#include "LevelModel.h"
namespace Level
{
	class LevelController;
	class LevelView
	{
	private:
		sf::RenderWindow* game_window;
		LevelController* level_controller;
		LevelModel* level_model;

		UI::UIElement::ImageView* background_image;
		const float background_alpha = 110.f;

		BoxDimensions box_dimensions;

		UI::UIElement::ImageView* box_image;
		
		UI::UIElement::ImageView* target_overlay_image;
		UI::UIElement::ImageView* letter_one_overlay_image;
		UI::UIElement::ImageView* letter_two_overlay_image;
		UI::UIElement::ImageView* letter_three_overlay_image;
		UI::UIElement::ImageView* obstacle_one_overlay_image;
		UI::UIElement::ImageView* obstacle_two_overlay_image;
		

		void createImages();
		void initializeImages();
		void updateImages();
		void drawLevel();
		void deleteImages();
		void calculateBoxDimensions();
		void drawBox(sf::Vector2f position);
		UI::UIElement::ImageView* getBoxOverlayImage(BlockType block_type);
		void drawBoxValue(sf::Vector2f position, BlockType box_value);

	public:
		LevelView(LevelController* controller);
		~LevelView();

		void initialize();
		void update();
		void render();
	};
}