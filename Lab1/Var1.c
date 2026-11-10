#include <stdio.h>

int main() {
    float x;
    float y;

    printf("Write 'x': \n");
    scanf("%f", &x);
    if (x >= 0) {

        if (x <= 8) {
            y = ((-3 * x * 2) / 5) + 9;
            printf("y = %f\n", y);
        } 
        else if (x >= 16) {
            y = ((-3 * x * 2) / 5) + 9;
            printf("y = %f\n", y);
        } 
        else {
            printf("ERROR\n");
        }
        
    } else if (x < -1) {
        y = (15 * x) - 2; 
        printf("y = %f\n", y);
    } else {
        printf("ERROR\n");
    }



    return 0;
}