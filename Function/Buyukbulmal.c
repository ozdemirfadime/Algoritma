#include<stdio.h>
void BuyukBul(int sayi1,int sayi2, int sayi3);
int main(){
   
    BuyukBul(3,5,15);


}
void BuyukBul(int sayi1,int sayi2, int sayi3){
  int  ESB=0;
     
    if(sayi1>sayi2 && sayi1>sayi3)
   // return sayi1;
       //printf("%d",sayi1);
       ESB=sayi1;
    else if (sayi2>sayi1 && sayi2>sayi3)
    {
        /*return sayi2;
        printf("%d",sayi2);*/
        ESB=sayi2;
    }
    else if(sayi3>sayi1&& sayi3>sayi2)
    {
        /*return sayi3;
         printf("%d",sayi3);*/
        ESB=sayi3;
    }
    printf(" en buyuk sayı :%d",ESB);
    
}