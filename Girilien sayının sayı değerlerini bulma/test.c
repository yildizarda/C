#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
setlocale(LC_ALL,"Turkish");


int sayi1,sayi2;

printf("2 Tane tam say� giriniz:");
scanf("%d %d" ,&sayi1,&sayi2);
if(sayi1 % sayi2 == 0 ){
    printf("Birbirinin �arpan�d�r.",sayi1,sayi2);
}
else{
    printf("Birbirinin �arpan� de�ildir.",sayi1,sayi2);
}




return 0;






}