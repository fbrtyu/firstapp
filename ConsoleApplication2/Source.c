#include <stdio.h> 
#include <locale.h>
#include <stdlib.h>
#include <string.h>

char OutPutWords(char* kj, int kkk) {

    //Если проблемы с русским языком
    //setlocale(LC_ALL, "Rus"); //Для русского языка в программе
    //system("chcp 1251"); //Для русского языка в консоли

    char ch; //Для символа
    char jk[35]; //Место для слова, большого размера нет смысла делать, так как слова примерно от 1 до 10, 15 букв обычно
    int i = 0; 
    int k = 2; //Длина слова, которое необходимо вывести
    int kk = 0;
    int o = 1;
    int s = 0;
    int ls = 0;
    char pp[5] = { '.', ',', '!', '?', '/' }; //Символы, которые не считать словами
    char uu;

    char strr[35];

    k = kkk;

    int n = 0;

 //Для ручного ввода Необходимо изменить '\0' на '\n'
    /*printf("Введите длину искомого слова:\n");

    scanf_s("%d", &k);

    printf("Введите строку:\n");

    ch = getchar();*/

    //Главный цикл, чтобы идти по строке и считывать символы
    while (o == 1) {

        //ch = getchar(); //Для ручного ввода

        ch = kj[n];
        n++;

        //Чтобы не учитывать символы из массива символов pp, они заменяются на пробелы, которые в дальнейшем не будут учитываться
        for (int ii = 0; ii <= 5 - 1; ii++) {

            if (ch == pp[ii]) {

                ch = ' ';

            }
        }

        jk[i] = ch;
        kk++;
        i++;

        //Вывод подходящего слова, если оно только одно впринципе
        if ((ch == '\0') && ((kk - 1) == k)) {


            for (int j = i - 1 - k; j <= k - 1; j++) {

                putchar(jk[j]);

            }

            kk = 0;
            i = 0;
            o = 0;
            s++;

        }
        else {

            if ((ch == ' ') && ((kk - 1) < k)) {

                kk = 0;
                i = 0;

            }

        }

        if ((ch == ' ') && ((kk - 1) == k)) {

            //Вывод подходящего слова
            for (int j = i - 1 - k; j <= k - 1; j++) {

                putchar(jk[j]);

            }

            printf("%s", " ");

            ls = i;
            kk = 0;
            i = 0;

        }
        else {

            if ((ch == ' ') && ((kk - 1) > k)) {

                kk = 0;
                i = 0;

            }

        }

        //Проверка есть ли такие слова
        if (((ch == '\0') && (i > k) && (s == 0)) || ((ch == '\0') && (i < k) && (s == 0))) {

            if (jk[0] == '\0')
                break;
            else {

                o = 0;
                printf("Таких слов нет!\n");

            }

        }

    }

    o = 0;

    i = 0;

    /*while ((getchar()) != '\0') {

        strr[i] = getchar();
        i++;

        if (strr[i] == '\0') {

            strr[i - 1] = '\0';

        }

    }*/

    o = 0;

    i = 0;

    /*while (strr[i] != '\0') {

        i++;

        if (strr[i] != '\0') {

            strr[i - 1] = '\0';

        }

    }*/

    uu = strr[34];

    return uu;

    //system("PAUSE");

    //return 0; //Для ручного ввода

}

int main()
{
    char v[35] = "  mmm nn    nnn  .. qwe   "; //Строка
    int l = 3; //Длина слова

    OutPutWords(v, l);

    printf("%c", '\n');

    system("PAUSE");
}