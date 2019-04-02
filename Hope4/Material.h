#ifndef MATERIAL_H
#define MATERIAL_H
#include "Texture.h"
class Material
{
private:
	Texture * DiffuseMap;
	Texture * SpecularMap;
	Texture * BumpMap;
	Texture * DisplacementMap;
	Texture * NormalMap;
	Texture * ReflectionMap;
	Texture * TransparencyMap;
public:
	Material();
	Material(Texture* DiffuseMap, Texture* SpecularMap, Texture* BumpMap, Texture* DisplacementMap, Texture* NormalMap, Texture* ReflectionMap, Texture* TransparencyMap);
	~Material();

public:
	void SetDiffuseMap(Texture* map);
	void SetSpecularMap(Texture* map);
	void SetBumpMap(Texture* map);
	void SetDisplacementMap(Texture* map);
	void SetNormalMap(Texture* map);
	void SetReflectionMap(Texture* map);
	void SetTransparencyMap(Texture* map);
};
#endif

