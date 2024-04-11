#include "Room.h"
#include "Item.h"
int main() {
	//SmallBoy hayden;
	//hayden.Description();
	//hayden.GetName();

	//Stick stick1;
	//stick1.Description();
	////stick1.GetName();
	//SmallBoy hayden;
	//hayden.Description();
	////hayden.GetName();
	//Hand hand1;
	//hand1.Description();
	////hand1.GetName();
	// 
	
	String PlayerInput;
	bool gamestate = true;
	while (gamestate)
	{
		Stick stick1;
		stick1.Description();
		PlayerInput.ReadFromConsole().ToLower();
		if (PlayerInput == "use")
		{

			stick1.Use();
		}

	}
	


	//Game textAdventure = new Game;
	} 