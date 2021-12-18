#pragma once
#include "object.hpp"
#include <vector>
#include <raylib.h>
#include <map>


class Display{
private:
  int screenWidth, screenHeight;

  std::string profile;
  std::vector<Object*>* profileRef = nullptr;
  std::map<std::string, std::vector<Object*>> profiles;

  Vector2 WtoS(Vector2);

public:
  Display(int width, int height, const char* title, int fps, std::string profile = "main");
  void switchProfile(std::string profile);
  void attachShape(Object* shape);
  void removeShape(Object* shape);
  void drawShape();
  void closeScreen() const;
  void clear();
  std::vector<Object*> exposeShapes() const;
};
