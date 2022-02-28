#include <stdio.h>
// faktoriális függvény, kimenete a num! értéke
int factorial(int num){
    if(num==0){
        return 1;
    }
    int fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    double sum = 0;
    // n a képletben szereplő összegzésnek a felső indexe, növelésével pontosíthatjuk az Euler szám értékét
    for (int n = 0; n < 15; n++) {
        sum += (double) 1/factorial(n);
    }
    printf("e = ");
    printf("%f",sum);
    return 0;
}


