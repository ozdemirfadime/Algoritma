/*Kendisi hariç bütün pozitif çarpanları (tam bölenleri) toplamı, yine kendisine eşit olan sayılara "mükemmel sayı" denir. Örneğin 6=1+2+3, 28=1+2+4+7+14 gibi. 
//Buna göre klavyeden girilen bir tamsayının "mükemmel sayı" olup olmadığını kontrol eden program*/
#include<stdio.h>
int main(){
    int sayi,i;
    int toplam=0;
     printf("sayı giriniz");
    scanf("%d",&sayi);
   for(int i=1; i<sayi; i++){
		if(sayi%i==0){
			toplam+=i;
		}
	}
	if(toplam == sayi){
		printf("%d bir mukemmel sayidir\n",sayi );
	}
	else{
		printf("%d bir mukemmel sayi degildir\n",sayi );
	}

	return 0;
}
