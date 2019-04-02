#ifndef RESOURCE_MANAGER_H
#define RESOURCE_MANAGER_H
#include <unordered_map>
#include <string>
#include "Texture.h"
#include "Material.h"
#include "stb_image.h"

class ResourceManager
{
private:
	ResourceManager() {};
public:
	static ResourceManager& getInstance() {
		static ResourceManager theInstance;
		return theInstance;
	}
	
	ResourceManager(ResourceManager const&) = delete;
	void operator=(ResourceManager const&) = delete;

private:
	static std::unordered_map<std::string, Texture*> textures;
	static std::unordered_map<std::string, Material*> materials;

public:
	static bool loadTextureFromFile(std::string fileName);
};
#endif

