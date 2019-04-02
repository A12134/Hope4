#ifndef TEXTURE_H
#define TEXTURE_H
class Texture
{
private:
	unsigned int textureID;
public:
	Texture();
	Texture(unsigned char* data, int width, int height, int nrChannels);
	~Texture();
};
#endif

