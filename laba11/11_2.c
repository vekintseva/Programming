
#include "11_2.h"
#include <math.h>

float perimeter(struct Rhomb *R) {
    float A, B, C,D;
    A = sqrt (pow(R->xy2[0] - R->xy1[0], 2) + pow(R->xy2[1] - R->xy1[1], 2));
    B = sqrt (pow(R->xy3[0] - R->xy2[0], 2) + pow(R->xy3[1] - R->xy2[1], 2));
    C = sqrt (pow(R->xy4[0] - R->xy3[0], 2) + pow(R->xy4[1] - R->xy3[1], 2));
    D = sqrt (pow(R->xy1[0] - R->xy4[0], 2) + pow(R->xy1[1] - R->xy4[1], 2));
    return(A + B + C + D);

}

float Square(struct Rhomb*R) {

    return ((sqrt(pow(R->xy4[0] - R->xy2[0],2) + pow(R->xy4[1] - R->xy2[1],2)) * sqrt(pow(R->xy1[0] - R->xy3[0],2) + pow(R->xy1[1] - R->xy3[1],2)))/2);
}