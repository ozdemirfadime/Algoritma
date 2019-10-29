/*Yaz okulu ücretlerini hesaplayan bir programın yazılması istenmektedir. Öncelikle kullanıcı
dersi hangi fakülteden alacak onun bilgisi girilmelidir. Teknoloji Fakültesi için TF, Mühendislik
Fakültesi için MF, Eğitim Fakültesi için EF bilgisi girilmektedir. Öğrenciye daha sonra hangi dersi
alacağı sorulacaktır. Öğrencinin Fizik 1 için FİZ1, Fizik 2 için FİZ2, Kalkülüs 1 için KLK1 ve Kalkülüs
2 için KLK2 bilgisi girişi yapmaktadır. Öğrenci sadece fakülte seçimi ve 1 ders seçimi yapacaktır.
Eğer dersi Teknoloji Fakültesinden alıyorsa ders saati başına 20TL, eğer dersi Mühendislik
Fakültesinden alıyorsa ders saati başına 22TL, eğer dersi Eğitim Fakültesinden alıyorsa ders
saati başına 19TL ödemesi gerekiyor. Fizik 1 ve Fizik 2 derslerinin ders saati 3, Kalkülüs 1 ve
Kalkülüs 2 derslerinin ders saati 4 tür.
Klavyeden fakülte ve ders bilgisi girildikten sonra ödemesi gereken yaz okulu ücretini ekrana
yazdıran programın,
*/
#include<stdio.h>
#include <string.h>
int main()
{
    int ucret;
    char ders;
    char fakulte;
    printf("fakulte giriniz \n Mühendsilik içi:MF \n Teknoloji Fakültesi için:TF \n Eğitim Fakültesi için:EF \n ");
    scanf("%s",&fakulte);
      printf("ders giriniz Fizik 1 için FİZ1, Fizik 2 için FİZ2, Kalkülüs 1 için KLK1 ve Kalkülüs2 için KLK2 bilgisi");
    scanf("%s",&ders);
    if(fakulte =="TF"){
        if((ders == "Fiz1") || (ders == "Fiz2"))
       { ucret = 3*20;}
        else if ((ders == "Klk1") || (ders == " Klk2"))
        {
            ucret = 4*20;
        }
        
        
    }
    else if (fakulte =="MF")
    {
         if((ders == "Fiz1") || (ders == "Fiz2"))
       { 
           ucret = 3*22;
           }
        else if ((ders == "Klk1") || (ders == " Klk2"))
        {
            ucret = 4*22;
        }
        
        
    }
     else if (fakulte =="EF")
    {
         if((ders == "Fiz1") || (ders == "Fiz2"))
       { ucret = 3*19;}
        else if ((ders == "Klk1") || (ders == " Klk2"))
        {
            ucret = 4*19;
        }
        
        
    }
    printf("toplam ucret: %d",ucret);

    }


