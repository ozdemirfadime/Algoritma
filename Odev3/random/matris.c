#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int dizi[10][10];
    srand(time(NULL));
   for(int i=0;i<10;i++)
       { 
           for(int j=0;j<10;j++)
        {
            dizi[i][j]=1+rand()%100;
        printf("dizinin değerleri");
}
}
for(int i=0;i<10;i++){
       
        printf("%d ",dizi[i]);
    }



}
