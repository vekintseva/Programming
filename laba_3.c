#include <stdio.h>
#include<math.h>
int main(int argc,char** argv) {
    int a;
    scanf("%d",&a);
    printf("%x %o %o %o",a,a,a>>1,~a);
    int b;
    scanf("%o",&b);
    printf("%d",a^b);
    return 0;
}