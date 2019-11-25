//1000 den 5000 e kadar 7’in katı olup 5 nin katı olmayan sayıların toplamını ekrana yazan program,
#include<stdio.h>
int main(){
    int toplam=0;
    int i;
    for(i=1000;i=<5000;i++)
    {
        if((i%7 = 0) && (i%5 != 0))
        toplam+=i;
    }
    printf("toplam %d",toplam);

}