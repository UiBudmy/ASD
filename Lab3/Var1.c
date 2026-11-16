#include <stdio.h>
#include <windows.h>
#include <unistd.h>

#define WIDTH 80
#define HEIGHT 24

void gotoxy(int x, int y)
{
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {

    FreeConsole();
    AllocConsole();
    printf("Console opened\n");
    return 0;
}