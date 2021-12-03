#include <stdio.h>
#include <string.h>
#include <locale.h>

int NOD(int a,int b) //функция нахождения нод
{  while(a!=b)
        if(a>b)
            a-=b;
        else
            b-=a;
    return a; }

int NOK(int a,int b){  //функция нахождения НОК
    return a*b / NOD(a, b); }

void Delete(char* str, int j) //рекурсивная ф-ция
{
    int i;
    if ((((str[j]==' ')||(str[j]=='.')||(str[j]=='{')||(str[j]=='[')||(str[j]=='('))&&(str[j+1]==' '))||((str[j]=='.')&&(str[j+1]==' ')&&(str[j+2]==0)))
        Delete(str,j+1); //ф-ция,осуществляющая удаление лишнего пробела
    for (i = j; i < strlen(str)-1; i++)
    { str[i]=str[i+1];}
    str[i]=0;
}
void DeleteSpaces(char *str){
    for (int i=0;i<strlen(str);i++)
    { if ((((str[i]==' ')||(str[i]=='.')||(str[i]=='{')||(str[i]=='[')||(str[i]=='('))&&(str[i+1]==' '))||((str[i]=='.')&&(str[i+1]==' ')&&(str[i+2]==0)))
            Delete(str,i+1); }}


int main() {
    setlocale(LC_ALL,"Rus"); //подключение русского языка
    int A=12,B=4; //введем переменные A и B
    printf("NOD= %d\n", NOD(A,B));//выведем на консоль НОД при помощи обращения к ф-ции NOD
    printf("NOK= %d\n",NOK(A,B));//выведем на консоль НОК при помощи обращения к ф-ции NOК

    char str[1024]={"   laba  #10  ( programming ).  ( ) "};
    DeleteSpaces(str); //вызываем ф-цию, которая произведет удаление лишних пробелов
    printf("измененная строка:\n%s",str);
    return 0;
}