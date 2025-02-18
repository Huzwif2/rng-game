#include <iostream>
#include <raylib.h>
#define NUM_FRAMES 3

const int screenWidth = 500;
const int screenHeight = 600;

Texture2D texBackground;


void GameStartup() {
	

}

void GameUpdate() {
	Image imgBackground = LoadImage("assets/background.png");
	texBackground = LoadTextureFromImage(imgBackground);
	UnloadImage(imgBackground);

	//load button texture
	Texture2D button = LoadTexture("assets/button.png");
	// define frame rectangle to draw
	float frameHeight = (float) button.height/NUM_FRAMES;
	Rectangle sourceRec = {0, 0, (float) button.width, frameHeight};
	Rectangle btnBounds = { screenWidth/2.0f - button.width/2.0f, screen

}

void GameRender() {
	DrawTexture (texBackground, 0, 0, RAYWHITE);

}

void GameShutdown() {

}

int main () {
	std::cout << "hello world!\n";
	InitWindow (screenWidth, screenHeight, "Kitchen RNG");

	SetTargetFPS(60);

	GameStartup();

	while (!WindowShouldClose()) {
		
		GameUpdate();

		BeginDrawing();
		ClearBackground(GREEN);

		GameRender();

		EndDrawing();
	}

	GameShutdown();
	CloseWindow();

	return 0;
}

