#pragma once
#include "Misc.h"
#include "Item.h"

class Room
{
public:
	Room();
	Room(Item& _itemSlot);
	~Room();
	
	Item* item;
	String description;

private:

protected:


////spawn room
//class Dungeon : public Room {
//public:
//	Dungeon();
//
//	void Description() const override;
//
//	String GetName() const override;
//
//protected:
//	String _description;
//	String _name;
//	Item* _item;
//};
//
////hidden room houses hayden (required to beat tom)
////if insight is used will hint towards ULTIMATE EXPLOSION
////accessed via blasting the cracked wall south of spawn with ULTIMATE EXPLOSION spell
//class HiddenRoom : public Room {
//public:
//	HiddenRoom();
//
//	void Description() const override;
//
//	String GetName() const override;
//
//protected:
//	String _description;
//	String _name;
//	Item* _item;
//};
//
////empty hallway
////move east for Room1
////move west for Room2
//class Hall1 : public Room {
//public:
//	Hall1();
//
//	void Description() const override;
//
//	String GetName() const override;
//
//protected:
//	String _description;
//	String _name;
//	Item* _item;
//};
//
////--------Room 1--------
////east of Hall1, has a stick
//class Room1 : public Room {
//public:
//	Room1();
//
//	void Description() const override;
//
//	String GetName() const override;
//
//protected:
//	String _description;
//	String _name;
//	Item* _item;
//};
//
////--------Room 2--------
////west of Hall1, has a boulder(can be lifted with levitate)
////under the boulder is a 'rusted key'
//class Room2 : public Room {
//public:
//	Room2();
//
//	void Description() const override;
//
//	String GetName() const override;
//
//protected:
//	String _description;
//	String _name;
//	Item* _item;
//};
//
////empty hallway
////move east for Room3(burning)
////move west for Room4(locked)
//class Hall2 : public Room {
//public:
//	Hall2();
//
//	void Description() const override;
//
//	String GetName() const override;
//
//protected:
//	String _description;
//	String _name;
//	Item* _item;
//};
//
////--------Room 3--------
////burning room(can be accessed via using extinguish spell
////has 'hand' and 'grimoire[ULTIMATE EXPLOSION]'
//class Room3 : public Room {
//public:
//	Room3();
//
//	void Description() const override;
//
//	String GetName() const override;
//
//protected:
//	String _description;
//	String _name;
//	Item* _item;
//};
//
////--------Room 4--------
////locked room(can be accessed via using 'rusted key')
////once unlocked, is library filled with grimoires (most spells unlocked)
//class Room4 : public Room {
//public:
//	Room4();
//
//	void Description() const override;
//
//	String GetName() const override;
//
//protected:
//	String _description;
//	String _name;
//	Item* _item;
//};
//
//
//class Hall3 : public Room {
//public:
//	Hall3();
//
//	void Description() const override;
//
//	String GetName() const override;
//
//protected:
//	String _description;
//	String _name;
//	Item* _item;
//};
//
////has 'grimoire[extinguish]'
////on top of a high shelf, use for stick
//class Room5 : public Room {
//public:
//	Room5();
//
//	void Description() const override;
//
//	String GetName() const override;
//
//protected:
//	String _description;
//	String _name;
//	Item* _item;
//};
//
//
//class ThroneRoom : public Room {
//public:
//	ThroneRoom();
//		
//	void Description() const override;
//
//	String GetName() const override;
//
//protected:
//	String _description;
//	String _name;
//	Item* _item;
//
};