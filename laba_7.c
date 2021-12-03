#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum music{       //объявление перечисления с именем music
    Classic, //поле 1 принимает численное значение 0;
    Pop, //1
    Rock,  //2
    Electro //3
};

struct linesegment{  //имя структуры
    int x; int y;    //элементы x и у типа int
};

float length(struct linesegment*l)
{
    return abs(l->x-l->y);
}

int main() {
    enum music a;  //объявление переменной а перечисляемого типа
    a=Rock;
    printf("a=%d\n",a); //вывод численного значения элемента перечисления

    struct linesegment l; //объявление переменной l типа структуры
    scanf("%d %d",&l.x, &l.y); //ввод значения с консоли для l в элементы структуры x и у
    printf("%f", length(&l)); //вывод на консоль длины отрезка прямой

    struct element
    {   unsigned DSL:1;
        unsigned PPP:1;
        unsigned Link:1;  };

    union ADSLmodem{
        int sost;
        struct element err;

    };
    union ADSLmodem q;

    scanf("%x",&q.sost);

    printf("%d %d %d %d",q.err.DSL,q.err.PPP,q.err.Link);
    return 0;
}

