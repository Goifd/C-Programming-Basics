#include <stdio.h>
typedef struct Date{
    int year;
    int month;
    int day;
}date;

void beolvasas(date*);
void kiiras(date);
int napszam(date);
date milyenNap(date);
int main() {
    date date1;
    beolvasas(&date1);
    kiiras(date1);
    int nap = napszam(date1);
    printf("\nA datum az ev %d-ik napja.",nap);
    date date2 = milyenNap(date1);
    kiiras(date2);
    return 0;
}
// adatok ellenorzese es eltarolasa
void beolvasas(date* dateTemp){
    int ok;
    char c;
    do{
        ok = 0;
        printf("Adjon meg egy datumot ponttal elvalasztva.\n");
        printf("A formatum: ev.honap(1-12).nap(1-31)\n");
        //ellenorzes
        if(scanf("%d.%d.%d",&(dateTemp->year),&(dateTemp->month),&(dateTemp->day))==3 && dateTemp->year >=1900 && dateTemp->year <=9999)
        {
            //honap ellenorzes
            if(dateTemp->month>=1 && dateTemp->month<=12)
            {
                //nap ellenorzes
                if((dateTemp->day>=1 && dateTemp->day<=31) && (dateTemp->month==1 || dateTemp->month==3 || dateTemp->month==5 || dateTemp->month==7 || dateTemp->month==8 || dateTemp->month==10 || dateTemp->month==12))
                    printf("Helyes nap.\n");
                else if((dateTemp->day>=1 && dateTemp->day<=30) && (dateTemp->month==4 || dateTemp->month==6 || dateTemp->month==9 || dateTemp->month==11))
                    printf("Helyes nap.\n");
                else if((dateTemp->day>=1 && dateTemp->day<=28) && (dateTemp->month==2))
                    printf("Helyes nap.\n");
                else if(dateTemp->day==29 && dateTemp->month==2 && (dateTemp->year %400==0 ||(dateTemp->year %4==0 && dateTemp->year %100!=0)))
                    printf("Helyes nap.\n");
                else{
                    printf("Helytelen nap.\n");
                    ok=1;
                }

            }
            else
            {
                printf("Helytelen honap.\n");
                ok=1;
            }
        }
        else
        {
            printf("Helytelen ev.\n");
            ok=1;
        }
        while ( (c = getchar()) != '\n') ;

    }while(ok);
}
// kiiras
void kiiras(date dateTemp){
    printf("A datum: %d.",dateTemp.year);
    switch(dateTemp.month){
        case 1:
            printf("januar");
            break;
        case 2:
            printf("februar");
            break;
        case 3:
            printf("marcius");
            break;
        case 4:
            printf("aprilis");
            break;
        case 5:
            printf("majus");
            break;
        case 6:
            printf("junius");
            break;
        case 7:
            printf("julius");
            break;
        case 8:
            printf("augusztus");
            break;
        case 9:
            printf("szeptember");
            break;
        case 10:
            printf("oktober");
            break;
        case 11:
            printf("november");
            break;
        default:
            printf("december");

    }
    printf(".%d",dateTemp.day);

}
// hanyadik nap
int napszam(date dateTemp){
    int nap = 0;
    int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<dateTemp.month;i++){
        if(dateTemp.month==i+1){
            nap+=dateTemp.day;
            break;
        }else if(i==1){
            if(dateTemp.year %400==0 || (dateTemp.year %4==0 && dateTemp.year %100!=0)){
                nap+=29;
            }else{
                nap+=28;
            }
        }else{
            nap+=arr[i];
        }
    }
    return nap;
}
// milyen nap
date milyenNap(date dateTemp){
    int szokoev;
    int napszam;
    if(dateTemp.year %400==0 ||(dateTemp.year %4==0 && dateTemp.year %100!=0)){
        szokoev=1;
    }else{
        szokoev=0;
    }

    // napszam bekerese es ellenorzese
    int ok=0;
    do{
        printf("Ha szokoevet adott meg adjon meg egy napot 1 es 366 kozott. Ha nem, adjon meg egy napot 1 es 365 kozott.\n");
        if(scanf("%d",&napszam)!=1){
            ok=1;
            printf("Helytelen formatum.");
        }
        if(napszam==366 && szokoev!=1){
            ok=1;
            printf("Nem letezik ilyen nap.");
        }

    }while(ok);
    // datum kiszamolasa
    int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int honap;
    for(int i=0;i<12;i++){
        honap = i;
        if(i==1){
            if(dateTemp.year %400==0 || (dateTemp.year %4==0 && dateTemp.year %100!=0)){
                if(napszam-29>0)
                    napszam-=29;
                else
                    break;
            }else if(napszam-28>0){
                napszam-=28;
            }else{
                break;
            }
        }else{
            if(napszam-arr[i]>0)
                napszam-=arr[i];
            else
                break;
        }
    }
    date ujDatum;
    ujDatum.day=napszam;
    ujDatum.month=honap+1;
    ujDatum.year=dateTemp.year;
    return ujDatum;
}

