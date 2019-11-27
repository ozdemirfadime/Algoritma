//Klavyeden girilen 40 tane sayının aritmetik ortalamasını bulan program
#include<stdio.h>
int main(){
    int sayi;
    int sayac=0;
    float ort;
    int toplam=0;
   do{  
    printf("sayı giriniz");
    scanf("%d",&sayi);
    sayac++;
    toplam+=sayi;
    ort=(toplam/sayac);
    
    }
    while(sayac<40);
    printf("ortalama %f",ort);
     printf("toplam %d",toplam);
    

}


    
    