#include "Texture.h"
#include "glad/glad.h"
#include "GLFW/glfw3.h"

Texture::Texture()
{
}


Texture::Texture(unsigned char * data, int width, int height, int nrChannels)
{
	// load a single texture
	glGenTextures(1, &(this->textureID));
	glBindTexture(GL_TEXTURE_2D, this->textureID);
	
	if (nrChannels == 1) 
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RED, width, height, 0, GL_RED, GL_UNSIGNED_BYTE, data);
	}
	else if (nrChannels == 3) 
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);
	}
	else if (nrChannels == 4) 
	{
		glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, width, height, 0, GL_RGBA, GL_UNSIGNED_BYTE, data);
	}
	glGenerateMipmap(GL_TEXTURE_2D);
}

Texture::~Texture()
{
}
