#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Turkish");

    int sayi;
    int basamaksayisi = 0;
    int sayiDegerlerToplami = 0;

    printf("L�tfen say� de�erlerinin toplam�n� ��renmek istedi�iniz say�y� giriniz \n");
    scanf("%d",&sayi);


    int orjinalSayi = sayi;
    do{
        sayiDegerlerToplami += sayi%10;
        basamaksayisi++;
        sayi = sayi/10;

    }while(sayi>0);

    printf("%d say�s�n�n basamak say�s� %d ve basamak de�erlerinin toplam� %d dir.",orjinalSayi,basamaksayisi,sayiDegerlerToplami);








    return 0;
}