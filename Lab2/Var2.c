#include <stdio.h>
#include <math.h>


int main() {
    int i;
    double res = 0.0;
    printf("Write 'i':\n");
    scanf("%d", &i);
    double res_und_line = 1.0;
    for (int j = 1; j <= i; j++) {
        double sum_und_line = ((j+1) * sin(j));
        res_und_line *= sum_und_line;
        return res_und_line;
    }
    double up_line = i * (i + 1);
        res += up_line / res_und_line;
}