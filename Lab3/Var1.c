#include <stdio.h>
#include <windows.h>
#include <unistd.h>

// Встановлюємо розміри консолі
#define WIDTH 80
#define HEIGHT 24


void gotoxy(int x, int y) {
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {

    FreeConsole();
    AllocConsole();
    
    system("pause");
    return 0;
}