#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int sayi;
    int dizi[10];
    srand(time(NULL));
   
    for(int i=0;i<10;i++)
    {
         sayi=1+rand()%100;
         dizi[i]=sayi;
         printf("%d \n",dizi[i]);
    }
    printf("SiRALAMA \n");
    int elemanSayisi=10;
    for(int i=0;i<elemanSayisi;i++){
    for(int j=dizi[j];j<elemanSayisi;j
    ++){
    if(dizi[j]>dizi[j+1])
    { int yedek=dizi[j];
    dizi[j]=dizi[j+1];
    dizi[j+1]=yedek;

     }
}
    }
 printf("SiRALİ \n");
 for(int i=0;i<10;i++){
     printf("%d",dizi[i]);
 }


}