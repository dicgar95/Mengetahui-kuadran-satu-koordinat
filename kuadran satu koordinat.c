/* Oleh Muhammad Dicky Garcia
STT PELITA BANGSA*/
#include <stdio.h>

void main()
{
int x,y;
printf("MENGETAHUI KUADRAN SUATU KOORDINAT\n\n");
printf("Masukkan koordinat x : ");
scanf("%i",&x);
printf("Masukkan koordinat y : ");
scanf("%i",&y);

 if(x>0 && y>0)
         printf("KUADRAN I");
 if(x>0 && y<0)
         printf("KUADRAN II");
 if(x<0 && y<0)
         printf("KUADRAN III");
 if(x<0 && y>0)
         printf("KUADRAN IV");
 if(x==0 && y==0)
         printf("TITIK PUSAT");
}
