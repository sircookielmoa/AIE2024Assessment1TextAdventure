#include "Player.h"

#include <iostream>

Player::Player() {}

Player::~Player() 
{
	for (auto spell : spellList) {
		delete spell;
	}
}

bool Player::FindSpell(String& spell)
{
	return true;
}

Spell* Player::CastSpell(String& spell)
{
	return nullptr;
}

std::vector<Spell*> Player::GetSpellList()
{
	return this -> spellList;
}

void Player::SpellList()
{
	/*for (int i = 0; i < spellList; i++)
	{
		std::cout << "\t\t" << spellList[i]->Getname() << "\n";
	}*/
}

void Player::AddSpell(Spell* spell)
{
}
