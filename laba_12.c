#include <stdio.h>
#include <sys/stat.h>

/*В текущей папке создать папки с именами, указанными в качестве параметров командной
строки. Создать текстовый файл, в который поместить информацию о списке подпапок
текущей папки.*/

int main(int argc, char ** argv){
    int n; //переменная, отвечающая за кол-во папок
    char directory[100];
    FILE *myfile;
    myfile=fopen("dirname.txt", "wt");

    int i;
    for (i=1;i<argc;i++) {
        if (mkdir(argv[i],777) ==0) { //если папка успешно создалась, то возвр-ся 0
            fputs(argv[i],myfile); //имя папки помещается в созданный нами файл
            fputs("\n", myfile);
        }
        else {
            printf("Error occured while creating the directory"); //иначе сообщаем об ошибке создания
        }
    }
    fclose(myfile); //закрываем наш файл
}