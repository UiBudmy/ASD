#include <stdio.h>
#include <math.h>



double res = 0.0;
double sum(int n) {

    //Обчислюємо суму
    for (int i = 1; i <= n; i++) {
        double res_und_line = 1.0;

        //Отримуємо значення знаменника
        for (double j = 1; j <= i; j++) {
            double sum_und_line = ((j+1) * sin(j));
            res_und_line *= sum_und_line;
        }
        double up_line = i * (i + 1);
        res += up_line / res_und_line;

    }
    return res;
}


int main() {
    int n;
    printf("Write 'n':\n");
    scanf("%d", &n);

    printf("Your result: %8f\n", res);
    return 0;
}
