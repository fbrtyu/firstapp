#include "pch.h"
#include "gtest-linked_ptr.h"
#include <stdio.h> 
#include <gtest/gtest.h>
#include "../ConsoleApplication2/Source.c" //Подключение Source.c не работает, тест пустой

TEST(OutPutWordsTest, OutPutWordsName) {

    int l = 1; //Длина слова

    char v[35] = "k"; //Ввод в функцию

    char u[35] = "k"; //Должно быть

    char k; //Вывод функции

    k = OutPutWords(v, l);
 
    EXPECT_STREQ(u, &k);

}