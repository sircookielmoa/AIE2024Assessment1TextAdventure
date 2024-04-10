#pragma once
#include "String.h"
class Item
{
public:
	Item();
	Item(String name, String description);
	virtual ~Item();

	virtual void Description() const;
	virtual void Use();

	virtual String GetName();
protected:
	String _description;
	String _name;
};

class Stick : public Item {
public:
	Stick();
	
	void Description() const override;
	void Use() override;

	String GetName() override;

protected:
	String _description;
	String _name;
};

class SmallBoy : public Item {
public:
	SmallBoy();

	void Description() const override;
	void Use() override;

	String GetName() override;

protected:
	String _description;
	String _name;
};

class Hand : public Item {
public:
	Hand();

	void Description() const override;
	void Use() override;

	String GetName() override;

protected:
	String _description;
	String _name;

};