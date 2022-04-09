#include "Box.h"
#include <iostream>
using namespace std;

// Implement setters and getters
void box::setLength(int l)
{
  length = l;
}
void box::setWidth(int w)
{
  width = w;
}
void box::setHeight(int h)
{
  height = h;
}

// Implemenet the calcVolume() unction
int box::getLength()
{
  return length;
}
int box::getWidth()
{
  return width;
}
int box::getHeight()
{
  return height;
}

//calculation
int box::calcVolume() 
{
  return length * width * height;
}
