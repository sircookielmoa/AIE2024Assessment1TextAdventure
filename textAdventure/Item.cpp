#include "Item.h"

#include <iostream>

Item::Item() {

}

Item::Item(String name, String description) : _name{ name }, _description{ description } {}

Item::~Item() {}

void Item::Description() const
{
	std::cout << "\n\t\t[" << _name << "]" << std::endl;
	std::cout << "\t\t" << _description << std::endl;
}

void Item::Use()
{

}

String Item::GetName()
{
	return _name;
}

Stick::Stick() {
	_name = "\n\t\t[Stick]";
	_description = "\n\t\tits sticky";
	
}

void Stick::Description() const
{
	_name.WriteToConsole();
	_description.WriteToConsole();
}

void Stick::Use()
{
	std::cout << "\n\t\tyou throw the stick" << std::endl;
}

String Stick::GetName()
{
	_name.WriteToConsole();
	return _name;
}

SmallBoy::SmallBoy()
{
	_name = "\n\t\t[Small boy]";
	_description = "\n\t\tA small boy, without a right hand. He thinks his name is Hayden.";
}

void SmallBoy::Description() const
{
	_name.WriteToConsole();
	_description.WriteToConsole();
}

void SmallBoy::Use()
{
}

String SmallBoy::GetName()
{
	_name.WriteToConsole();
	return _name;
}

Hand::Hand()
{
	_name = "\n\t\t[Hand]";
	_description = "A hand(?)."
}

void Hand::Description() const
{
	_name.WriteToConsole();
	_description.WriteToConsole();
}

void Hand::Use()
{
}

String Hand::GetName()
{
	_name.WriteToConsole();
	return _name;
}
