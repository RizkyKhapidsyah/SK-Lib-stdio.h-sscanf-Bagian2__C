#pragma warning(disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main() {
    char a[10];
    printf("Masukkan Nama Anda : ");

    //scanf statement
    scanf("%s", a);

    printf("Kamu menuliskan : \n%s", a);

    _getch();
    return 0;
}