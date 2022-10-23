#include <stdio.h>
#include <stdlib.h>

       int toplam = 0;
       void mukemmel(int *pnt){

     for(int i = 1; i < *pnt; i++)
    {
        if(*pnt % i == 0){
            toplam += i;
        }
    }
    if(*pnt == toplam){
        printf("%d Sayisi mukemmel bir sayidir.",*pnt);
    }
    else{
        printf("%d Sayisi mukemmel bir sayi degildir.",*pnt);
    }
       }


int main()
{

     int N;
     int *pnt=&N;
     printf("Bir sayi gir=");
     scanf("%d",&N);
     mukemmel(&N);








    return 0;
}
