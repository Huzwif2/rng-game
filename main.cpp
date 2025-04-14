 #include <iostream>
 #include <raylib.h>
 #define NUM_FRAMES 3

 const int screenWidth = 1200;
 const int screenHeight = 660;

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
         UnloadImage(fridge);

         int num = 0;
         while (!WindowShouldClose()) {
                 if(IsKeyPressed(KEY_SPACE)) {
                         num = GetRandomValue(0,2); // Three possible outcomes
                 }

                 BeginDrawing();
				 DrawTexture(texBackground, 0, 0, WHITE);
                 ClearBackground(GREEN);
				
				 if (num == 0) {
						 Rectangle washRect = {0, 500, 400, 400};
					 // DrawTexturePro(Texture2D , Rectangle source, Rectangle dest, Vector2 origin, float rotation, Color tint); 
						DrawTexturePro(
										texToast,
										washRect,  
										(Rectangle) {s, 
										0,
									   	WHITE
										); 
                 }

                 else if (num == 1) {
                         DrawTexture(
							 texWash,
							 screenWidth/4 - texWash.width/4,
							 screenHeight/4 - texWash.height/4 - 40,
							 WHITE
							 );
                 }
                 else if (num == 2) {
                         DrawTexture(
									texFridge,
									screenWidth/2 - texFridge.width/2,
									screenHeight/2 - texFridge.height/2 - 40,
									WHITE
									);
                 }
                 EndDrawing();
         }

         CloseWindow();
         return 0;
 }
