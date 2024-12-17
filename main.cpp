#include <iostream>
#include <raylib.h>

using namespace std;

int main () {

    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 800;
    const int SQUARE_SIZE = 600;
    int insideCircle = 0;
    int outsideCircle = 0;
    int totalDots = 0;
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Monte Carlo Simulation");
    SetTargetFPS(60);

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(BLACK);
        DrawRectangle((SCREEN_WIDTH-SQUARE_SIZE)/2,(SCREEN_HEIGHT-SQUARE_SIZE)/2,SQUARE_SIZE,SQUARE_SIZE,WHITE);
        EndDrawing();
    }

    CloseWindow();
}