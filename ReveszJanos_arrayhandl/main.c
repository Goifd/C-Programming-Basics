#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void feltoltes(double arr[]);
void kiiratas(double arr[]);
int kivalasztas(double arr[]);
void beolvasas(double* intMin,double* intMax);
double atlag(double arr[],double min, double max);
int main() {
    srand(time(0));
    double arr[10];
    double intervalMin;
    double intervalMax;
    feltoltes(arr);
    kiiratas(arr);
    printf(" min ami nagyobb mint 100: %d \n",kivalasztas(arr));
    beolvasas(&intervalMin,&intervalMax);
    printf(" atlag= %fl",atlag(arr,intervalMin,intervalMax));
    return 0;
}
void feltoltes(double arr[]){
    for(int i=0;i<10;i++){
        double randNum = 95 +  rand()/(double) RAND_MAX * 10;
        arr[i] = (double) ((int) (randNum*100))/100;
    }
}
void kiiratas(double arr[]){
    for(int i=0;i<10;i++){
        printf("%f \n",arr[i]);
    }
}
int kivalasztas(double arr[]){
    double min = INT_MAX;
    int place;
    for(int i=0;i<10;i++){
        if(arr[i]>100 && arr[i]<min){
            min = arr[i];
            place = i;
        }
    }
    return place;
}
void beolvasas(double* intMin,double* intMax){
    double min;
    double max;
    char c;
    int ok;
    do {
        ok = 1;
        printf("\nKerem a minimumot es maximumot vesszovel elvalasztva: ");
        if (scanf("%lf,%lf", &min , &max) != 2 || min<95 || min>100 || max<95 || max>100 || max<min) { printf("Hibas adatok!\n"); ok = 0; }
        while ( (c = getchar()) != '\n') ;
    } while (!ok);

    (*intMin) = min;
    (*intMax) = max;
}
double atlag(double arr[],double min,double max){
    double sum = 0;
    int darab = 0;
    for(int i=0;i<10;i++){
        if(arr[i]>= min && arr[i]<=max){
            sum+=arr[i];
            darab++;
        }
    }
    return (sum/darab);
}

