#include "Menu.h"

#include "raylib.h"

#include "Game.h"
#include "Gameplay.h"

namespace Game
{
	void DrawWindowMenu()
	{
		ClearBackground(BLACK);
	}

	void DrawTextMenu()
	{
		DrawText("Elias Arkanoid!", 300, 100, 20, RAYWHITE);
		DrawText("To Play the game, press the key: ENTER", 300, 120, 20, RAYWHITE);
		DrawText("How To play, press the key: H", 300, 140, 20, RAYWHITE);
		DrawText("To Exit, press the key: ESCAPE", 300, 160, 20, RAYWHITE);
	}

	void InputMenu()
	{
		if (IsKeyDown(KEY_ENTER))
		{
			state = GameState::Game;
			InitGame();
		}
		if (IsKeyDown(KEY_H))
		{

		}
		if (IsKeyDown(KEY_ESCAPE))
		{
			state = GameState::CloseAll;
		}
	}

	void Menu()
	{
		DrawWindowMenu();
		DrawTextMenu();
		InputMenu();
	}
}