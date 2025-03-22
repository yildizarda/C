#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int sayi;
    int basamaksayisi = 0;
    int sayiDegerlerToplami = 0;

    printf("Lütfen sayý deðerlerinin toplamýný öðrenmek istediðiniz sayýyý giriniz \n");
    scanf("%d",&sayi);


    int orjinalSayi = sayi;
    do{
        sayiDegerlerToplami += sayi%10;
        basamaksayisi++;
        sayi = sayi/10;

    }while(sayi>0);

    printf("%d sayýsýnýn basamak sayýsý %d ve basamak deðerlerinin toplamý %d dir.",orjinalSayi,basamaksayisi,sayiDegerlerToplami);








    return 0;
}