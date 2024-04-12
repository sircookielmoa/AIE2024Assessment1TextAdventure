#include "Game.h"
#include "Item.h"
#include "SmallBoy.h"
#include "Stick.h"
#include "Toilet.h"
#include "Hand.h"




Game::Game()
{
	//Make new player 
	mainPlayer = new Player;

	//Make items
	collectionItems = new Item * [9];

	Item* item00 = new Stick("Stick", "\n\tThis is a stick... Its brown and sticky. ");
	Item* item01 = new SmallBoy("Hayden", "\n\tA small boy missing both his hands, could prove useful. ");
	Item* item02 = new Hand("Hand", "\n\tA gross severed hand... I wonder whos this is. ");
	Item* item03 = new Toilet("Toilet", "\n\tA Golden d20 with a seat on it throne, fit for Tom: the god of 20 sided dice.");
	Item* item04 = new SmallBoy("Hugh", "\n\tA small boy with both his hands, much cooler then Hayden. ");

	collectionItems[0] = item00; //stick
	collectionItems[1] = item03; //toilet
	collectionItems[2] = item02; //hand
	collectionItems[3] = item01; //hayden
	collectionItems[4] = item04; //hugh

	//Make rooms
	castle[0][0] = new Room(*collectionItems[0]); //Room1 Hallway
	castle[0][1] = new Room(*collectionItems[2]); //Room2 Lab
	castle[0][2] = new Room(*collectionItems[0]); //Room3 Hallway
	castle[1][0] = new Room(*collectionItems[1]); //Room4 Throne Room
	castle[1][1] = new Room(*collectionItems[3]); //Room5 Spawn Room
	castle[1][2] = new Room(*collectionItems[1]); //Room6 Library
	castle[2][0] = new Room(*collectionItems[0]); //Room7 Kitchen
	castle[2][1] = new Room(*collectionItems[2]); //Room8 Torture Chamber
	castle[2][2] = new Room(*collectionItems[4]); //Room9 Pit
	//	   x  y

	castle[0][0]->description = ("\n\tJust a corner hallway. | [east][south]");
	castle[0][1]->description = ("\n\tThis room is very futuristic with lots of shiny doohickeys | [north][east][south]");
	castle[0][2]->description = ("\n\tJust a corner hallway. | [north][east]");
	castle[1][0]->description = ("\n\tA grand throne room with a toilet(?) where the throne should be | [west][south][east]");
	castle[1][1]->description = ("\n\tThere is a ladder, up the ladder there are doors all around you | [north][east][south][west]");
	castle[1][2]->description = ("\n\tA library with a high roof and too many books to read in a lifetime | [west][north][east]");
	castle[2][0]->description = ("\n\tA kitchen. but there are no ingredients... | [west][south]");
	castle[2][1]->description = ("\n\tLooks like a torture chamber, there's blood everywhere | [north][west][south]");
	castle[2][2]->description = ("\n\tThis room has a large bottomless pit with a prisoner hanging over it in the middle | [west][north]");
}

Game::~Game()
{
	//delete every room
	for (int x = 0; x < 3; x++)
	{
		for (int y = 0; y < 3; y++)
		{
			delete castle[x][y];
		}
	}

	delete mainPlayer;

	//delete every item
	for (int i = 0; i < 9; i++)
	{
		delete collectionItems[i];
	}
	delete collectionItems;
}


//Make new room[3][3]
	// [o]	[o]	[o]
	// [o]	[x]	[o]
	// [o]	[o]	[o]
//Find spell "what ever" 
// Binary search the collection of spells.
// 
// make new room[3][6]
	// [x]	[o]	[x]
	// [x]	[o]	[o]
	// [o]	[o]	[o]
	// [o]	[o]	[o]
	// [x]	[o]	[x]
	// [x]	[o]	[x]