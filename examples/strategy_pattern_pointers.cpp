/* 
 *  This is the default license template.
 *  
 *  File: strategy_pattern_pointers.cpp
 *  Author: abdullah
 *  Copyright (c) 2022 abdullah
 *  
 *  To edit this license information: Press Ctrl+Shift+P and press 'Create new License Template...'.
 */

#include <iostream>
#include <vector>

using std::cout;

struct AbstractShape
{
  virtual void Print() const = 0;
};

struct Square : public AbstractShape
{
  void Print() const override
  {
    cout << "Square\n";
  }
};

struct Triangle : public AbstractShape
{
  void Print() const override
  {
    cout << "Triangle\n";
  }
};

int main()
{
  std::vector<AbstractShape*> shapes;
  Square square;
  Triangle triangle;

  shapes.push_back(&square);
  shapes.push_back(&triangle);

  shapes[0]->Print();
  shapes[1]->Print();
  return 0;
}