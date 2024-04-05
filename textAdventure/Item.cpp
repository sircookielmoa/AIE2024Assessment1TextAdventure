#include "Item.h"

#include <iostream>

Item::Item() {}

Item::Item(String name, String description) : _name{ name }, _description{ description } {}

Item::~Item() {}

void Item::Description() const
{
	std::cout << "\n\t\t(" << _name << ")" << std::endl;
	std::cout << "\t\t" << _description << std::endl;
}

void Item::Use()
{

}

String Item::GetName()
{
	return _name;
}

