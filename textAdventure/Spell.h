#pragma once
#include "String.h"
#include "Misc.h"

class Spell
{
public:
	Spell();
	Spell(String name, String description, int damage);
	~Spell();

	String name;
	String description;
	int damage;

private:

protected:

};