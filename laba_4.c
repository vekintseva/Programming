#include <stdio.h>
#include <math.h>
int main() {
    int a;
    scanf("%d",&a);
    printf((a>=-3&& a<=6) ? "yes,in interval\n": "no,not in interval\n");
    int b;
    scanf("%x",&b);
    int c=1<<4;
    if ((b&c)==0)
        printf("проверка бита,бит=0");
    else
        printf("проверка бита,бит=1");
    return 0;
}
