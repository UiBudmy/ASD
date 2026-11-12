#include <stdio.h>
#include <math.h>

//лічильник
long long total = 0;

//Функція для обчислення суми
double sum(int n) {
    double res = 0.0;
    
    //Обчислюємо
    for (int i = 1; i <= n; i++) {
        total +=2;
        double res_und_line = 1.0;

        //Отримуємо значення знаменника
        for (int j = 1; j <= i; j++) {
            total +=2;
            double sum_und_line = ((j+1) * sin(j));
            total += 2;
            res_und_line *= sum_und_line;
            total++;
        }

        //Отримуємо значення чисельника
        double up_line = i * (i + 1);
        total += 2;

        //Рахуємо та додаємо до результату
        res += up_line / res_und_line;
        total += 2;
    }
    return res;
}

//Головна функція
int main() {
    int n;

    //запит "Write 'n':"
    printf("Write 'n':\n");
    if (scanf("%d", &n) !=1 || n <= 0) {
        printf("INVALID");
        return 1;
    }
    
    double res = sum(n);

    //Результати
    printf("Your result: %8f\n", res);
    printf("Total operations: %lld\n", total);
    return 0;
}