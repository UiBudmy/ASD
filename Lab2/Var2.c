#include <stdio.h>
#include <math.h>

//лічильник
long long total = 0;

//Функція для обчислення суми
double sum(int n) {
    double res = 0.0;

    double dp[n + 1];

    dp[0] = 1.0;

    for (int i = 1; i <= n; i++) {
        total++;

        dp[i] = dp[i - 1] * ((i + 1) * sin(i));
        total += 3;

        double up_line = i * (i + 1);
        total += 2;

        res += up_line / dp[i];
        total += 2;
    }

    return res;
}

//Головна функція
int main() {
    int n;

    //запит "Write 'n':"
    printf("Write 'n':\n");
    scanf("%d", &n);
    
    double res = sum(n);

    //Результати
    printf("Your result: %8f\n", res);
    printf("Total operations: %lld\n", total);
    return 0;
}
