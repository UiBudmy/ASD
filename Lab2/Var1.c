#include <stdio.h>
#include <math.h>


unsigned long long total = 0;

double sum(int n) {
    double res = 0.0;
    
    //Обчислюємо суму
    for (int i = 1; i <= n; i++) {
        total++;
        double res_und_line = 1.0;

        //Отримуємо значення знаменника
        for (int j = 1; j <= i; j++) {
            total++;
            double sum_und_line = ((j+1) * sin(j));
            res_und_line *= sum_und_line;
        }
        double up_line = i * (i + 1);
        res += up_line / res_und_line;
    }
    return res;
}


int main() {
    total++;
    int n;
    printf("Write 'n':\n");
    scanf("%d", &n);

    double res = sum(n);

    printf("Your result: %8f\n", res);
    printf("Total operations: %llu\n", total);
    return 0;
}
