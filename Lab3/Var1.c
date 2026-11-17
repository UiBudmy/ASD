#include <stdio.h>
#include <windows.h>


// Встановлюємо розміри консолі
#define width 80
#define height 24

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

    //Відкрити нову консоль
    FreeConsole();
    AllocConsole();
    SetConsoleTitle("Console Animation");

    sleep(50);
    
    int diag = 0;
    
    for (int d = width - 1; d >= -(height - 1); d--)
    {
        if (diag % 2 == 0)
        {
            //Напис зверху вниз
            for (int y = 0; y < height; y++)
            {
                int x = d + y;

                if (x >= 0 && x < width)
                {
                    gotoxy(x, y);
                    printf("*");

                    Sleep(20);
                }
            }
        }
        else 
        {
            //Напис знизу вверх
            for (int y = height - 1; y >= 0; y--)
            {
                int x = d + y;

                if (x >= 0 && x < width)
                {
                    gotoxy(x, y);
                    printf("*");

                    Sleep(20);
                }
            }
        }

        diag++;
    }


    //Очікування реакції користувача
    gotoxy(0, height + 1);
    system(" pause");
    return 0;
}