#include <iostream>
#include <raylib.h>
#define NUM_FRAMES 3

const int screenWidth = 1024;
const int screenHeight = 768;

Texture2D texBackground;
Texture2D texToast;
Texture2D texFridge;
Texture2D texWash;

int pullNum;

void GameStartup() {
	//Image imgBackground = LoadImage("assets/background.png");
	//texBackground = LoadTextureFromImage(imgBackground);
	//UnloadImage(imgBackground);

}

void GameUpdate() {
	int pullNum;

	while (IsKeyPressed(KEY_R)){
		pullNum = GetRandomValue(1,3);
	

	if (pullNum == 1){
		Image imgToast = LoadImage("assets/toast.png");
		texToast = LoadTextureFromImage(imgToast);
		    DrawTexture(texToast, screenWidth/2 - texToast.width/2, screenHeight/2 - texToast.height/2 - 40, WHITE);
		    UnloadImage(imgToast);
		    break;
	}

	if (pullNum == 2) {
		Image imgFridge = LoadImage("assets/fridge.jpg");
		texFridge = LoadTextureFromImage(imgFridge);
		    DrawTexture(texFridge, screenWidth/2 - texFridge.width/2, screenHeight/2 - texFridge.height/2 - 40, WHITE);
		    UnloadImage(imgFridge);
		    break;
		}

	if (pullNum == 3) {
		Image imgWash = LoadImage("assets/wash.png");
		texWash = LoadTextureFromImage(imgWash);
		    DrawTexture(texWash, screenWidth/4 - texWash.width/4, screenHeight/4 - texWash.height/4 - 40, WHITE);
		    UnloadImage(imgWash);
		    break;
	}
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

