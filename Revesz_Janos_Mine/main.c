#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    srand(time(0));

    // letrehozom a 2D-s karakter tombot ami reprezentalja a palyat es egy 1D-s tombot,
    // ami a sorokban levo aknak szamat tarolja
    // max/minAknaSzam a legtobb es legkevesebb aknat tartalmazo sorban levo aknak szamat tarolja
    // max/minAknaSor a legtobb es legkevesebb aknat tartalmazo sor szamat tarolja
    char palya[10][10];
    int aknakSorban[10]={0,0,0,0,0,0,0,0,0,0};
    int maxAknaSzam = 0;
    int minAknaSzam = 10;
    int maxAknaSor;
    int minAknaSor;

    // feltoltom a tombot .-okkal amik az ures mezoket reprezentaljak
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            palya[i][j]='.';
        }
    }

    // a feladat leirasa szerint random legeneralok 20 akna poziciot
    for (int i = 0; i < 20; ++i) {
        int x = rand() % 10;
        int y = rand() % 10;
        palya[x][y] = 'x';
    }

    // a palya kiirasa es az aknak szamanak megszamolasa soronkent, valamint a c feladat megoldasa
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            printf("%c  ",palya[i][j]);
            if(palya[i][j]=='x'){
                aknakSorban[i]++;
            }
        }
        if(aknakSorban[i] > maxAknaSzam){
            maxAknaSzam = aknakSorban[i];
            maxAknaSor = i;
        }
        if(aknakSorban[i] < minAknaSzam){
            minAknaSzam = aknakSorban[i];
            minAknaSor = i;
        }
        printf("\n");
    }

    // sor szamanak beolvasasa
    int sorszam;
    printf("Adja meg a sor szamat 1 es 10 kozott \n");
    scanf("%d",&sorszam);
     sorszam = sorszam-1;

    // a b feladatok megoldasa
    int elsohely=0;
    for (int i = 0; i < 10; ++i) {
        if(palya[sorszam][i]=='x'){
            elsohely = ++i;
            break;
        }
    }
    printf("A(z) %d. sorban %d akna van es az elso akna az %d helyen van.\n", sorszam+1,aknakSorban[sorszam],elsohely);
    printf("A legtobb akna a(z) %d. sorban van.\n",maxAknaSor+1);
    printf("A legkevesebb akna a(z) %d. sorban van.",minAknaSor+1);
    return 0;

}
