#include "Room.h"

//In your rooms you need to make new items.
Room::Room(){}

Room::Room(Item& _itemSlot)
{
	item = &_itemSlot;
}

Room::~Room(){}
