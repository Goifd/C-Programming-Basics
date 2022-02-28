#include <stdio.h>
#include <stdbool.h>

double celsiusToFar(double celsius);
void createFar(double* p, double* pC);
void intervalTest(double* far);
double maxMin(double* far);
int main() {

    double celsius[7] = {10.1,13.2,11.0,12.3,14.0,13.5,13.3};
    double far[7];
    createFar(far,celsius);
    intervalTest(far);
    printf("hoingas: %lf",maxMin(far));



    return 0;
}

double celsiusToFar(double celsius){
    double far;

    far = 1.8*celsius+32;

    return far;
}
void createFar(double* p,double* pC){
    for (int i = 0; i < 7; ++i) {
        *(p+i) = celsiusToFar(*(pC+i));
    }
}
void intervalTest(double* far){
    double up;
    double low;
    printf("Lower limit: \n");
    bool ok=true;
    char ch;
    do{
        ok = true;
        if(scanf("%lf",&low)!=1){
            printf("Hibas ertek.\n");
            ok = false;
        }
        while((ch=getchar())!='\n');

    }while(!ok);

    printf("Upper limit: \n");
    ok=true;
    do{
        ok = true;
        if(scanf("%lf",&up)!=1 || up<low){
            printf("Hibas ertek.\n");
            ok = false;
        }
        while((ch=getchar())!='\n');

    }while(!ok);

    for (int i = 0; i < 7; ++i) {
        if(*(far+i) >= low && *(far+i)<= up){
            printf("%d. elem: %lf",i,*(far+i));
        }
    }

}
double maxMin(double* far){
    double max = *(far);
    double min = *(far);

    for(int i=0;i<7;i++){
        if(*(far+i)>max){
            max = *(far+i);
        }
        if(*(far+i)<min){
            min = *(far+i);
        }
    }

    return (max-min);
}

void sort(double* far){
    double min = 55555;
    double temp;
    int hely;
    for(int i=0;i<7;i++){
        for (int j = i; j < 7; ++j) {
            if(*(far+j)<min){
                min=*(far+j);
                hely = j;
            }
        }
        temp = *(far+i);
        *(far+i) = min;
        *(far+hely) = temp;
    }
}
