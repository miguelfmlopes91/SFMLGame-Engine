#pragma once
#include <memory>
#include <string>
#include "SFML/Graphics.hpp"
#include "StateMachine.h"
#include "AssetManager.h"
#include "InputManager.h"

namespace Bardo 
{
	struct GameData
	{
		StateMachine machine;
		sf::RenderWindow window;
		AssetManager assets;
		InputManager input;

	};

	typedef std::shared_ptr<GameData> GameDataRef;

	class GameLoop
	{
	public:
		GameLoop(int width, int height, std::string title);
		~GameLoop();
	private:
		const float dt = 1.0f / 60.0f; //frame rate --- update per second
		sf::Clock _clock;
		GameDataRef _data = std::make_shared<GameData>();

		void Run();

	};
}

