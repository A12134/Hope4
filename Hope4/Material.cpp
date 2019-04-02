#include "Material.h"



Material::Material()
{
}

Material::Material(Texture * DiffuseMap, Texture * SpecularMap, Texture * BumpMap, Texture * DisplacementMap, Texture * NormalMap, Texture * ReflectionMap, Texture * TransparencyMap)
{
	this->DiffuseMap = DiffuseMap;
	this->SpecularMap = SpecularMap;
	this->BumpMap = BumpMap;
	this->DisplacementMap = DisplacementMap;
	this->NormalMap = NormalMap;
	this->ReflectionMap = ReflectionMap;
	this->TransparencyMap = TransparencyMap;
}


Material::~Material()
{
}

void Material::SetDiffuseMap(Texture * map)
{
	this->DiffuseMap = map;
}

void Material::SetSpecularMap(Texture * map)
{
	this->SpecularMap = map;
}

void Material::SetBumpMap(Texture * map)
{
	this->BumpMap = map;
}

void Material::SetDisplacementMap(Texture * map)
{
	this->DisplacementMap = map;
}

void Material::SetNormalMap(Texture * map)
{
	this->NormalMap = map;
}

void Material::SetReflectionMap(Texture * map)
{
	this->ReflectionMap = map;
}

void Material::SetTransparencyMap(Texture * map)
{
	this->TransparencyMap = map;
}
