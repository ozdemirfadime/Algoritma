#include<stdio.h>
int CarpimTablosu(int carpan,int carpim);
int main(){
    int carpan,adim,i=1;
    printf("carpan giriniz");
    scanf("%d",&carpan);
    printf("adim giriniz");
    scanf("%d",&adim);
    for(int j=0;j<adim;j++)
       {
           int sonuc = CarpimTablosu(carpan,adim);
          printf("%d x %d = %d \n", i,carpan, i*carpan);
          i++;
     }
    /*int sonuc = CarpimTablosu(carpan,adim);
    printf("sonuc = %d \n ",sonuc);*/

}
int CarpimTablosu(int carpan,int adim){
    int i,j,carpim;
   
       for(j=1;j<adim;j++)
       {
           int carpim = carpan*j;
           return carpim;
           printf("\n");
       }            

}
/*
#include<stdio.h>
int sonuc=0;
void carpim(int carpim,int adim);
int main(){
 carpim(5,6);

}


void carpim(int carpim,int adim){
 for(int i=1; i<=adim; i++){ 
  printf("%d x %d = %d \n", i,carpim, i*carpim);
 }
 
}*/