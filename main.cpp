 #include <iostream>
 #include <raylib.h>
 #define NUM_FRAMES 3

 const int screenWidth = 1024;
 const int screenHeight = 768;

 int main() {

         std::cout << "hello world!\n";
         InitWindow (screenWidth, screenHeight, "Kitchen RNG");

         SetTargetFPS(60);


	 Image imgBackground = LoadImage("assets/background.jpg");
	 Texture2D texBackground = LoadTextureFromImage(imgBackground);
	 UnloadImage(imgBackground);

         Image toast = LoadImage("assets/toast.png");
         Texture2D texToast = LoadTextureFromImage(toast);
         UnloadImage(toast);

         Image wash = LoadImage("assets/wash.png");
         Texture2D texWash = LoadTextureFromImage(wash);
         UnloadImage(wash);

         Image fridge = LoadImage("assets/fridge.jpg");
         Texture2D texFridge = LoadTextureFromImage(fridge);
         UnloadImage(wash);



 //      if (IsKeyDown(KEY_SPACE)) {
 //              image imgToast = LoadImage("assets/toast.png");
 //              texToast = LoadTextureFromImage(imgToast);
 //                  DrawTexture(texToast, screenWidth/2 - texToast.width/2, screenHeight/2 - texToast.height/2 - 40, WHITE)    ;
 //                  UnloadImage(imgToast);
 //              }
 //
 //      if (iskeyDown(KEY_K)) {
 //              image imgFridge = LoadImage("assets/fridge.jpg");
 //              texFridge = LoadTextureFromImage(imgFridge);
 //                  DrawTexture(texFridge, screenWidth/2 - texFridge.width/2, screenHeight/2 - texFridge.height/2 - 40, WHI    TE);
 //                  UnloadImage(imgFridge);
 //              }
 //
 //      if (iskeyDown(KEY_W)) {
 //              image imgWash = LoadImage("assets/wash.png");
 //              texWash = LoadTextureFromImage(imgWash);
 //                  DrawTexture(texWash, screenWidth/4 - texWash.width/4, screenHeight/4 - texWash.height/4 - 40, WHITE);
 //                  UnloadImage(imgWash);

         int num = 0;

         while (!WindowShouldClose()) {


                 if(IsKeyPressed(KEY_SPACE)) {
                         num = GetRandomValue(0,2); // Three possible outcomes
                 }

                 BeginDrawing();
		 DrawTexture(texBackground, 0, 0, WHITE);
                 ClearBackground(GREEN);

                 if (num == 0) {
                         DrawTexture(texToast, screenWidth/2 - texToast.width/2, screenHeight/2 - texToast.height/2 - 40, WHITE);
                 }
                 else if (num == 1) {
                         DrawTexture(texWash, screenWidth/4 - texWash.width/4, screenHeight/4 - texWash.height/4 - 40, WHITE    );
                 }
                 else if (num == 2) {
                         DrawTexture(texFridge, screenWidth/2 - texFridge.width/2, screenHeight/2 - texFridge.height/2 - 40,     WHITE);
                 }


                 EndDrawing();
         }

         CloseWindow();

         return 0;
 }

