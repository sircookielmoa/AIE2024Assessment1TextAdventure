#pragma once
#include "Item.h"

class Room
{
public:
	Room();
	Room(String name, String description, Item* item);
	~Room();

	virtual void Description() const;

	virtual String GetName() const;

	Item* GetItem();

protected:
	String _description;
	String _name;
	Item* _item;
};


//spawn room
class Dungeon : public Room {
public:
	Dungeon();

	void Description() const override;

	String GetName() const override;

protected:
	String _description;
	String _name;
	Item* _item;
};

//hidden room houses hayden (required to beat tom)
//accessed via a secret lever in a bookshelf in the dungeon behind the player
class HiddenRoom : public Room {
public:
	HiddenRoom();

	void Description() const override;

	String GetName() const override;

protected:
	String _description;
	String _name;
	Item* _item;
};


class Hall1 : public Room {
public:
	Hall1();

	void Description() const override;

	String GetName() const override;

protected:
	String _description;
	String _name;
	Item* _item;
};

class Hall2 : public Room {
public:
	Hall2();

	void Description() const override;

	String GetName() const override;

protected:
	String _description;
	String _name;
	Item* _item;
};

class Hall3 : public Room {
public:
	Hall3();

	void Description() const override;

	String GetName() const override;

protected:
	String _description;
	String _name;
	Item* _item;
};


class ThroneRoom : public Room {
public:
	ThroneRoom();
		
	void Description() const override;

	String GetName() const override;

protected:
	String _description;
	String _name;
	Item* _item;

};