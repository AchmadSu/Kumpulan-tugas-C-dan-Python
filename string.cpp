#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
int totalUppercase, totalLowercase, totalChar;
char inputChar[256], loopingOption, looping();

void inputCharacter(), countCase(), countCharacter(), stringBar();

int main(){
    char option;
    do
    {
        printf("Manipulasi String\nDirancang oleh: \nNama \t: Ecep Achmad Sutisna\nNIM \t: D111911027\nKelas \t: IF-3D\n");
        printf("1. Hitung Kapital\n2. Hitung Total Karakter\n3. Baris perkata\n4. Keluar\nMasukkan Opsi: ");
        option=getche();
        switch (option)
        {
        case '1':
            countCase();
            break;
        case '2':
            countCharacter();
            break;
        case '3':
            stringBar();
            break;
        case '4':
            option = '4';
            break;
        default:
            printf("Data yang anda masukkan salah!");
            break;
        }
        printf("\n");
    } while (option!= '4');     
}


void inputCharacter(){
    printf("\n");
    printf("Masukkan Kalimat: ");
    gets(inputChar);
}

char looping(){
    printf("\nLakukan pengulangan? (Isi dengan 'Y' untuk Ya dan 'T' untuk Tidak): ");
    return loopingOption = getche();
}

void countCase(){
    do
    {
        inputCharacter();
        int convertInt;
        for (int i = 0; inputChar[i] != '\0'; i++)
        {
            convertInt = (int)inputChar[i];   
            if ((convertInt >= 65) && (convertInt <= 90))
            {
                totalUppercase++;
            }
            else if ((convertInt >= 97) && (convertInt <= 122))
            {
                totalLowercase++;
            }
        }
        
        printf("Total karakter kapitalnya adalah: %d", totalUppercase);
        printf("\nTotal karakter kecilnya adalah: %d", totalLowercase);
        looping();    
    } while ((loopingOption == 'Y') || (loopingOption == 'y'));
}

void countCharacter(){
    do
    {
        inputCharacter();
        
        for (int i = 0; inputChar[i] != '\0'; i++)
        {
            totalChar++;
        }
        
        printf("Total karakter dari kalimat tersebut adalah : %d", totalChar);
        looping();    
    } while ((loopingOption == 'Y') || (loopingOption == 'y'));
}

void stringBar(){
    do
    {
        inputCharacter();

        for (int i = 0; inputChar[i] != '\0'; i++)
        {
            printf("%c", inputChar[i]);
            if (inputChar[i] == ' ')
            {
                printf("\n");
            }
            else if (inputChar[i+1] == '\0')
            {
                printf(".");
            }
        }
        looping();    
    } while ((loopingOption == 'Y') || (loopingOption == 'y'));
}