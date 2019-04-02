#include "ResourceManager.h"
#include "LogManager.h"

std::unordered_map<std::string, Material*> ResourceManager::materials = std::unordered_map<std::string, Material*>();
std::unordered_map<std::string, Texture*> ResourceManager::textures = std::unordered_map<std::string, Texture*>();

bool ResourceManager::loadTextureFromFile(std::string fileName)
{
	int width, height, nrChannels;
	unsigned char *data = stbi_load(fileName.c_str(), &width, &height, &nrChannels, 0);

	if (data) {
		ResourceManager::textures.insert({fileName, new Texture(data, width, height, nrChannels)});
	}
	else {
		LogManager::getInstance().addLog(ELogType::E_WARNING, "Failed to load texture " + fileName + ".");
		return false;
	}
	
	return true;
}
