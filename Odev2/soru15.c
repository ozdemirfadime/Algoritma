/*Bir otomobil kışın ısıdan dolayı %5 daha fazla yakıt tüketir. Yazın ortalama olarak 1-50 km/h
giderken 100 km de 10 litre, 51-100 km/h giderken 100 km de 7,5 litre, 101-150 km/h giderken
100 km de 9 litre yakıt tüketmektedir. Buna göre mevsim (yaz için Y, kış için K girildiğini
düşününüz), ortalama hız bilgisi ve gideceği mesafe girildikten sonra kaç litre yakıt tüketeceğini
hesaplayıp ekrana yazdıran programın,*/
#include<stdio.h>
int main()
{
    char mevsim;
    int hiz;
    int mesafe;
    int yakit;
    printf("mevsim giriniz");
    scanf("%c",&mevsim);
    printf("hız giriniz");
    scanf("%d",&hiz);
    printf("mesafe giriniz");
    scanf("%d",&mesafe);
    if(mevsim == 'Y')
    {   
        if((hiz >=1 && hiz<=50) )
        yakit=(10*mesafe)/100;
        else if(hiz >=51 && hiz <=100)
        yakit= (7.5*mesafe)/100;
        else if (hiz >=101 && hiz <=150)
        {
           yakit=(9*mesafe)/100;
        }
     }
    else if(mevsim == 'K'){
         if(mesafe =100)
        {      
        if(hiz >=1 && hiz<=50) 
        { yakit=(10*mesafe)/100+((10*mesafe)/100)*0,05;
        }
        else if(hiz >=51 && hiz<=100)
       { 
           yakit= ((7.5*mesafe)/100)+((7.5*mesafe)/100)*0,05;
       }
        else if(hiz >=101 && hiz<=150)
        {
           yakit=(9*mesafe)/100+((9*mesafe)/100)*0,05;
        }

         }
          }
    printf("%d ",yakit);

}