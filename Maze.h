#ifndef MAZE_H
#define MAZE_H
#include "Cell.h"
//#include "Maze.cpp" 
#include <iostream>
#include <stack>
#include <queue>
#include <stdlib.h>
#include <time.h>
using namespace std;
class Maze
{
public:
  //Constructor
  Maze (int maxSize);
  //Deconstructor   
  `Maze ();
  //Function to print a maze    
  void printMaze ();
  //Function to create a maze    
  void createMaze ();
   //Function to use DFS and print the shortest path void DFS ();
  //Function to use BFS and print the shortest path    
  void BFS ();
  //overriding operator= for pointer data members    
  Maze & operator= (const Maze & other);
protected:
  int size;
  Cell *blocks;
};
#endif
