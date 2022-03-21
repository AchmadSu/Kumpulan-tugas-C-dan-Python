#include <stdio.h>
#include <string.h>
#define MAKS 256
#define PJG 15
// void bentuk1(void);
// void bentuk2(void);
void salin_kata()
{
    char str1[MAKS];
    char str2[]="POLITEKNIK TEDC";
    strcpy(str1, str2);
    printf("String pertama adalah: %s\n", str1);
    printf("String kedua adalah: %s\n", str2);
}

void gabung_kata()
{
    char str1[PJG], str2[PJG];
    strcpy(str1, "Poltek");
    strcpy(str2, "TEDC");
    strcat(str1, str2);
    printf("str1: %s, str2: %s\n", str1, str2);
}
main(){
    int i, jumkar = 1;
    char teks[MAKS];
    puts("Masukkan suatu kalimat (Maks 255 karakter).");
    puts("Saya akan menghitung jumlah karakternya.\n");
    gets(teks);
    for (i = 0; teks[i]!='\0'; i++)
    {
        if (teks[i]==' ')
        {
            jumkar++;
        }
        
    }
    printf("\nJumlah Kata = %d\n", jumkar); 
//    char str[]="Politeknik TEDC";
//    char *hasil1, *hasil2;
//    hasil1=strchr(str,'D');
//    hasil2=strchr(str,'X');
//    printf("Dari string %s\n", str);
//    printf("Mencari Karakter D = %s\n", hasil1);
//    printf("Mencari Karakter X = %s\n", hasil2);
}
// char str1[]="HALO";
//     char str2[]="Halo";
//     char str3[]="HALO";
//     printf("Hasil Perbandingan %s dengan %s ----> %d\n", str1, str2, strcmp(str1, str2));
//     printf("Hasil Perbandingan %s dengan %s ----> %d\n", str2, str1, strcmp(str2, str1));
//     printf("Hasil Perbandingan %s dengan %s ----> %d\n", str1, str3, strcmp(str1, str3));

// int i, jumkar = 1;
//     char teks[MAKS];
//     puts("Masukkan suatu kalimat (Maks 255 karakter).");
//     puts("Saya akan menghitung jumlah karakternya.\n");
//     gets(teks);
//     for (i = 0; teks[i]!='\0'; i++)
//     {
//         if (teks[i]==' ')
//         {
//             jumkar++;
//         }
        
//     }
//     printf("\nJumlah Kata = %d\n", jumkar);
// char name[15];
// printf("Masukkan nama anda: ");
// scanf("%s", name);
// printf("\nHalo, %s! Selamat belajar string. \n", name);
// void bentuk1(void)
// {
//     char data_1[]= {'P','o','l','t','e','k',' ','T','E','D','C','\0'};
//     puts(data_1);
// }

// void bentuk2(void)
// {
//     char data_2[]="Poltek TEDC";
//     printf("%s\n", data_2);
// }