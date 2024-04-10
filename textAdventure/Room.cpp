#include "Room.h"

#include <iostream>

Room::Room() {

}

Room::Room(String name, String description, Item* item) : _name{ name }, _description{ description }, _item{ item } {}

Room::~Room(){}

void Room::Description() const
{
	_description.WriteToConsole();
}

String Room::GetName() const
{
	return _name;
}

Item* Room::GetItem()
{
	if (_item != nullptr) return _item;
	return nullptr;
}


ThroneRoom::ThroneRoom()
{
	_name = "\n\t\t[Throne Room]";
	_description = "\n\t\tThe throne room of Tom: God of 20 sided dice";
}

void ThroneRoom::Description() const
{
	_name.WriteToConsole();
	_description.WriteToConsole();
}

String ThroneRoom::GetName() const
{
	_name.WriteToConsole();
	return _name;
}
