#ifndef CELL_H
#define CELL_H
#include <iostream>
using namespace std;
class Cell
{
public:
//Constructor
Cell();
//Destructor
 ̃Cell();
//Mutators
void setLeft(Cell*);
void setRight(Cell*);
void setUp(Cell*);

void setDown(Cell*);
void setParent(Cell*);
void setColor(int);
void setNum(int);
void setSym(char);
void setDownSym(char);
void setLeftSym(char);
//Accessors
Cell* getLeft();
Cell* getRight();
Cell* getUp();
Cell* getDown();
Cell* getParent();
int getColor();
int getNum();
char getSym();
char getDownSym();
char getLeftSym();
protected:
//Member items
Cell *up;
Cell *down;
Cell *left;
Cell *right;
int color;
Cell *parent;
int num;
char sym;
char downSym;
char leftSym;
};
#endif
