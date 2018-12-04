#include "Maze.h"
#include"Maze.cpp"
using namespace std;
int main()
{
int choice;
int size;
int n = size + size;
cout << "Welcome to the maze generator and solver. Enter size." << endl;
cin >>size;
Maze* maze = new Maze(size);

cout << "Which method would you like to use to make the maze?." << endl;
cout << "1) DPS " << endl;
cout << "2) BFS " << endl;
cout << "3) Djkstra’s " << endl;
cout << "Enter choice: " ;
cin >> choice;
if(choice == 1)
{
maze->createMaze();
cout<<"Maze"<<endl;
maze->printMaze();
cout<<"DFS"<<endl;
maze->DFS();
}

}
