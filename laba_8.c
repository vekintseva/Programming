#include <stdio.h>
#include <string.h>

int main() {
    char s1[]={"string"};
    char s2[]={"newstring"};
    strcpy(s2,s1);//strcpy функция, которая в s2 копирует данные s1
    printf("%s\n",s2); //string1

    int i=0,l=0;
    while (s1[i]!='\0')  //цикл для вычисления длины s1
    {l++; i++;}
    printf("%d\n",l); //7

    char a='r'; // Код искомого символа
    char *pa; //Указатель на искомую переменную в строке,по которой осуществляется поиск
    pa=strrchr(s1,a); //поиск символа a='r'
    if (pa==NULL)
        printf ("Символ в строке не найден\n");
    else
        printf ("Искомый символ в строке на позиции # %d\n",pa-s1+1); //3

    char s3[]={"strthree"};
    printf("%d\n",strspn(s1,s3)); //выводим результат функции, определяющей кол-во символов s3 в s1

    char s4[]={'i'}; //разделитель
    char *pstr; //Переменная, в которую будут заноситься начальные адреса частей строки s1
    pstr = strtok (s1,s4);
    while (pstr != NULL)
    {
        printf ("%s ",pstr);// Вывод очередной выделенной части
        pstr = strtok (NULL,s4);// Выделение очередной части строки
    }

    return 0;
}
