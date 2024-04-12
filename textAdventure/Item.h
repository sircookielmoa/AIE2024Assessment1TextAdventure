#pragma once
#include "String.h"
#include "Misc.h"

class Item
{
public:
	Item();
	Item(String name, String description);
	virtual ~Item();

	String _description;
	String _name;

	virtual void Use();
	virtual void Use(String _playerInput);

private:

};
