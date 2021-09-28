#include <raylib.h>
#include <iostream>
#include <cmath>
#include <vector>

#include "display.hpp"
#include "object.hpp"

#define LOG(x) std::cout << x << std::endl
#define screenWidth 800
#define screenHeight 450
#define screenTitle "[Example] Ray Marching"
#define screenFPS 60
#define minRadius .0008
#define depth 20


int main(){
  Display screen(
    screenWidth,
    screenHeight,
    screenTitle,
    screenFPS
  );

  Square x(10, 10, 20, 20);

  screen.attachShape(&x);

  while (!WindowShouldClose()){
    BeginDrawing();
    ClearBackground(RAYWHITE);
    screen.drawShape();
    EndDrawing();
  }

  screen.closeScreen();

  return 0;
}
