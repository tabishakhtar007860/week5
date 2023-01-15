#include <iostream>
#include <windows.h>
using namespace std;
// function prototype
void printMaze();
void gotoxy(int x,int y);
void erease(int x,int y);
void printPacman(int x,int y);
void getCharxy(short int x,short int y);
main()
{
    int pacmanX = 4; // X coordinates of pacman
    int pacmanY = 4; // Y coordinates of pacman
    bool gameRuunning = true ;

    system("cls");
    printMaze();
    printPacman(pacmanX,pacmanY);
    while (gameRunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1,pacmanY);
        if (nextLocation = ' ')
        {
            erease(pacmanX,pacmanY);
           pacmanX = pacmanY - 1;
           printPacman(pacmanX,pacmanY);

        }

        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pacmanX - 1,pacmanY);
        if (nextLocation = ' ')
        {
            erease(pacmanX,pacmanY);
           pacmanX = pacmanY - 1;
           printPacman(pacmanX,pacmanY);
                }

        }
         if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pacmanX - 1,pacmanY);
        if (nextLocation = ' ')
        {
            erease(pacmanX,pacmanY);
           pacmanX = pacmanY - 1;
           printPacman(pacmanX,pacmanY);
                }

        }
     if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pacmanX - 1,pacmanY);
        if (nextLocation = ' ')
        {
            erease(pacmanX,pacmanY);
           pacmanX = pacmanY - 1;
           printPacman(pacmanX,pacmanY);
                }

        }
    If (GetAsyncKeyState(VK_ESCAPE))
    {
        gamerunning = false;
    }
    Sleep(200);

    }
    }
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
    
}
char getCharAtxy(short int x,short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0 };
    SMALL_RECT rect = {x, y ,x ,y};
    coordBufSize.X = 1;
    coordBufSize.Y =1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ' ;
}
void erease(int x,int y)
{
    gotoxy(x,y);
    cout<< " ";

}
void printPacmen(int x,int y);
    {
      gotoxy(x ,y);
    cout<< "P";
    }
void printMaze()
{
cout<<"%%%%%%%%%%";
cout<<"%        %";
cout<<"%        %";
cout<<"%        %";
cout<<"%        %";
cout<<"%        %";
cout<<"%        %";
cout<<"%        %";
cout<<"%        %";
cout<<"%%%%%%%%%%";
}  

