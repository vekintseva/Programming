#include <stdio.h>
#include "11_2.h"
#include "11_2.c"

int main() {
    printf("Введите все координаты") ;
    struct Rhomb R;

    for (int i=0;i<2;i++)
    { scanf("d", &R.xy1[i]);}

    for (int i=0;i<2;i++)
    {scanf("d", &R.xy2[i]);}

    for (int i=0;i<2;i++)
    { scanf("d", &R.xy3[i]);}

    for (int i=0;i<2;i++)
    {scanf("d", &R.xy4[i]);}

float p=perimeter(&R),s=Square(&R);
   printf("Периметр= %f, площадь = %f",p,s);
   return 0;
}