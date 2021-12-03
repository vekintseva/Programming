#include <stdio.h>
#include<math.h>
int main() {
    int a;
    scanf("%d",&a);
    float z1=1-0.25*pow(sin(2*a),2)+cos(2*a);
    float z2=pow(cos(a),2)+pow(cos(a),4);

    printf("%f %f",z1, z2);
    return 0;
}