/*İdeal kilo hesabı yapan bir program yazılmak istenmektedir. Programın çalışması şu şekilde
olmalıdır. Kişinin boy(cm olarak girildiği düşünülecek-örnek:170), yaş, cinsiyet(Erkek için E, kız
için K bilisi girildiği düşünülecek) ve o andaki kilosu (kg olarak girildiği düşünülecek-örnek: 65)
klavyeden girilerek aşağıdaki formüle göre ideal kilosunu hesaplanacaktır ve ekrana
yazdırılacaktır. İdeal kilosu ekrana yazdırıldıktan sonra öğrencinin kilo farkını ekrana
yazdırılmalıdır (örnek: 10 kilo vermelisiniz veya 2.5 kilo almalısınız veya tebrikler ideal
kilonuzdasınız).
a. İdeal Kilo = ( boy–100 + yaş/10 )*K formülü ile hesaplanır,
b. K sabiti için eğer cinsiyet kız ise K = 0.8 alınmalı,
c. K sabiti için eğer erkek ise K = 0.9 alınmalı,*/
#include<stdio.h>
int main()
{
    double kilo;
    int boy;
    double ideal;
    char secim ;
    int yas;
   float KK = 0.8; 
   float EK = 0.9;
   printf("secim giriniz");
    scanf("%c",&secim);
     printf("kilo giriniz");
    scanf("%lf",&kilo);
    printf("bouyunuzu giriniz cm olarak giriniz");
    scanf("%d",&boy);
    printf("yas giriniz ");
    scanf("%d",&yas);
    
    if(secim == 'K')
    {
        ideal =( boy-100 +yas/10)*KK;
    }
   else
   {
       ideal= ( boy-100 +yas/10)*EK;
   }
   printf("ideal kilonuz:%lf\n",ideal);
   if (ideal>kilo)
   {
      int  gerekli= ideal-kilo;
       printf("almanız gereken kilo : %d\n",gerekli);
   }
   if(kilo>ideal)
   {
       int gerekli = kilo-ideal;
        printf("vermeniz gereken gereken kilo : %d",gerekli);

   }
   if(ideal == kilo)
   printf("tebrikler");
   
}