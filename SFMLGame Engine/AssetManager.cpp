#include "AssetManager.h"

namespace Bardo
{
	void AssetManager::LoadTextureManager(std::string name, std::string fileName)
	{
		sf::Texture tex;

		if(tex.loadFromFile(fileName))
		{
			this->_texture[name] = tex;
		}
	}
	sf::Texture & AssetManager::GetTexture(std::string name)
	{
		return this->_texture.at(name);
	}

	void AssetManager::LoadFont(std::string name, std::string fileName)
	{
		sf::Font font;

		if (font.loadFromFile(fileName))
		{
			this->_font[name] = font;
		}
	}

	sf::Font & AssetManager::GetFont(std::string name)
	{
		return this->_font.at(name);
	}
}

