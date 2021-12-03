#include <stdio.h>
#include <mm_malloc.h>
#include <stdlib.h>
int main(void) {
    char a[4];
    a[0]='W';
    a[1]='O';
    a[2]='R';
    a[3]='K';
    char *pA=&a; //указатель запоминает адрес переменной a
    for (int i=0;i<4;i++) {
        printf("%c \n",*(pA+i)); //вывод значения переменной, хранящейся под адресом
    }                            //pA+i означает, что значения переменных будут выводиться поочередно
    //т.е пока не выйдут из цикла
    printf("приступим ко 2ой части лабараторной работы: создадим динамический массив\n");
    char *dinam;
    dinam=malloc(4*sizeof(char));
    dinam[0]='W';
    dinam[1]='O';
    dinam[2]='R';
    dinam[3]='K';
    printf("%s\n", dinam);
    free(dinam);
    return 0;
}