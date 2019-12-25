#include<stdio.h>
int main(){

    int dizi[10],i,toplam=0;

for(i=0;i<10;i++){
    printf("eleman giriniz \n");
    scanf("%d",&dizi[i]);
}
for(i=0;i<10;i++){
    printf("elamanlar: %d \n ",dizi[i]);
}
    for(i=0;i<10;i++)
    {toplam+=i;
    }
    printf("toplam %d",toplam);
    return 0;

}