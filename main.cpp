#include <iostream>
#include <raylib.h>
#define NUM_FRAMES 3

const int screenWidth = 500;
const int screenHeight = 600;

Texture2D texBackground;
Texture2D texToast;
Texture2D texFridge;

void GameStartup() {
	//Image imgBackground = LoadImage("assets/background.png");
	//texBackground = LoadTextureFromImage(imgBackground);
	//UnloadImage(imgBackground);

}

void GameUpdate() {

	if (IsKeyDown(KEY_SPACE)) {
		Image imgToast = LoadImage("assets/toast.png");
		texToast = LoadTextureFromImage(imgToast);
		    DrawTexture(texToast, screenWidth/2 - texToast.width/2, screenHeight/2 - texToast.height/2 - 40, WHITE);
		    UnloadImage(imgToast);
		}

	if (IsKeyDown(KEY_K)) {
		Image imgFridge = LoadImage("assets/fridge.jpg");
		texFridge = LoadTextureFromImage(imgFridge);
		    DrawTexture(texFridge, screenWidth/2 - texFridge.width/2, screenHeight/2 - texFridge.height/2 - 40, WHITE);
		    UnloadImage(imgFridge);
		}
}

void GameRender() {
	//DrawTexture (texBackground, 0, 0, RAYWHITE);
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

