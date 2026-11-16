#include <stdio.h>
#include <windows.h>
#include <unistd.h>

// Встановлюємо розміри консолі
#define WIDTH 80
#define HEIGHT 24

// Функція для переміщення курсора в консолі
void gotoxy(int x, int y) {

    // Створюємо структуру COORD для зберігання координат
    COORD pos;
    pos.X = x;
    pos.Y = y;

    // Встановлюємо позицію курсора в консолі
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int main() {
    // Відкрити нову консоль
    FreeConsole();
    AllocConsole();
    SetConsoleTitle("Console Animation");

    
    for (int sum = 0; sum <= WIDTH + HEIGHT - 2; sum++) {
        if (sum % 2 == 0) {
            // зверху вниз
            for (int y = 0; y < HEIGHT; y++) {
                int x = sum - y;
                if (x >= 0 && x < WIDTH) {
                    gotoxy(x, y);
                    printf("*");
                    fflush(stdout);
                    Sleep(15);
                }
            }
        } else {
            // знизу вверх
            for (int y = HEIGHT - 1; y >= 0; y--) {
                int x = sum - y;
                if (x >= 0 && x < WIDTH) {
                    gotoxy(x, y);
                    printf("*");
                    fflush(stdout);
                    Sleep(15);
                }
            }
        }
    }

    //Очікування реакції користувача
    printf("\n ");
    system(" pause");
    return 0;
}