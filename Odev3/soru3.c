//Klavyeden girilen iki sayı arasındaki
// teksayıların karelerinin toplamını ekrana yazan program,(1.sayının 2.sayıdan küçük olduğunu düşünün)

#include<stdio.h>
int main(){
    int sayi1;
    int sayi2;
    int toplam=0;
    printf("sayi girimiz");
    scanf("%d",&sayi1);
    scanf("%d",&sayi2);
    for(int i=sayi1;i<sayi2;i++){
        if(i%2!=0)
        {
            toplam+=i*i;
        }
    }
    printf("toplam %d",toplam);
}