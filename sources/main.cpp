#include "raylib.h"
#define screenW 800
#define screenH 400

int main()
{
	InitWindow(screenW, screenH, "Cockenders the video game");
	// Audio Device
	InitAudioDevice();
	Music music = LoadMusicStream("assets/audio.mp3");

	float timePlayed = 0.0f;
	bool pause = false;

	SetTargetFPS(30);

	while (!WindowShouldClose())
	{
		UpdateMusicStream(music);
		// Restart 
		if (IsKeyPressed(KEY_SPACE))
		{
			StopMusicStream(music);
			PlayMusicStream(music);
		}

		// Pause Resume music
		if (IsKeyPressed(KEY_P))
		{
			pause = !pause;
			if (pause) PauseMusicStream(music);
			else ResumeMusicStream(music);
		}
		// Time Played
		timePlayed = GetMusicTimePlayed(music) / GetMusicTimeLength(music);
		if (timePlayed > 1.0f) timePlayed = 1.0f;

		BeginDrawing();

			ClearBackground(BLACK);

			DrawText(TextFormat("%f",timePlayed),200,200,20,YELLOW);
			DrawRectangle(200, 200, 400, 12, GREEN);
			DrawRectangleGradientV(200, 200, (int)( timePlayed*400.0f), 12, MAROON, WHITE);
			DrawRectangleLines(200, 200, 400, 12, LIGHTGRAY);
			DrawText(" SPACE - Restart ", 100, 250, 20, YELLOW);
			DrawText(" P - PAUSE/PLAY  ", 100, 280, 20, YELLOW);

			// TapeMaster Logo
			DrawRectangle(0, 0, 800, 70, WHITE);
			DrawText("T A P E M A S T E R", 10, 20, 50, BLACK);
			GetWorkingDirectory();
		EndDrawing();

	}
	UnloadMusicStream(music);
	CloseAudioDevice();
	CloseWindow();
	return 0;
}