
#include "SplashState.hpp"
#include <sstream>
#include <iostream>
#include "DEFINITIONS.hpp"



namespace Bardo
{
	SplashState::SplashState( GameDataRef data) : _data(data)
	{

	}
	void SplashState::Init() //loads texture and sets the background sprite
	{
		_data->assets.LoadTextureManager("Splash State Background", SPLASH_SCENE_BACKGROUND_FILEPATH);

		_background.setTexture(this->_data->assets.GetTexture("Splash State Background"));

	}

	void SplashState::HandleInput() //check if window is being close
	{
		sf::Event event;
		while (_data->window.pollEvent(event))
		{
			if(sf::Event::Closed == event.type)
			{
				_data->window.close();
			}
		}
	}

	void SplashState::Update(float dt)
	{
		if (_clock.getElapsedTime().asSeconds()> SPLASH_STATE_SHOW_TIME)
		{
			std::cout << "GO TO MAIN MENU" << std::endl;
		}
	}

	void SplashState::Draw(float dt)
	{
		_data->window.clear();

		_data->window.draw(_background);

		_data->window.display();
	}
}
