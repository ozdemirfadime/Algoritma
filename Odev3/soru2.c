//1 den klavyeden girilen sayıya kadar 3 katının 4 fazlası 4’ün katı olan bütün sayıları ekrana yazan program,
#include<stdio.h>
int main(){
    int sayi;
    
    printf("sayi girniz ");
    scanf("%d",&sayi);
    for(int i=0;i<sayi;i++){
    int kat =(i*3)+4;
    if(kat%4==0)
    {
        printf("%d \n",i);
    }

}}
