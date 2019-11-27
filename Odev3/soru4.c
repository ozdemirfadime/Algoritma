//Klavyeden 100 girilene kadar girilen negatif sayıların âdetini ekrana y
#include<stdio.h>
int main(){
    int sayi;
    int adet=0;
    
  do{ 
    printf("sayi giriniz");
    scanf("%d",&sayi);
    if(sayi<0)
    adet++;
    }
    while(sayi!=100);
    printf("adet %d",adet);
}