#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#define MAX 256

using namespace std;

int login();
void myMenu();
void hitungHuruf();
void ubahHuruf();
void balikKalimat();
void inputCharacter();

char inputUsername[MAX];
char inputPassword[MAX];
char inputChar[MAX];
char result[MAX];

char username[MAX] = "admin";
char password[MAX] = "adm2020";
char looping;

int totalChar, totalVocal, totalCons;

main(){
    do
    {
        if (login()==1)
        {
            myMenu();
        }
        else
        {
            printf("Anda salah dalam memasukkan username atau password!\n");
        }
        printf("Ulang program ini? (Isi dengan 'Y'/'T'): ");
        cin>>looping;
    } while ((looping == 'Y') || (looping == 'y'));
}


int login(){
    printf("FORM LOGIN\nSilahkan masukkan username beserta password\n");
    printf("Username: "); gets(inputUsername);
    printf("Password: "); gets(inputPassword);

    if (strcmp(inputUsername, username)== 0 && strcmp(inputPassword, password)== 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

void myMenu(){
    int option;
    do
    {
        printf("\nSilahkan pilih angka salah satu opsi: \n1. Hitung huruf\n2. Ubah huruf\n3. Balik kalimat\n4. Selesai\nOpsi: ");
        cin>>option;
        if (option == 1)
        {
            printf("Ketikkan huruf yang akan anda operasikan (Maks: 256 Karakter): "); gets(inputChar);
            hitungHuruf();
        }
        else if(option == 2)
        {
            printf("Ketikkan huruf yang akan anda operasikan (Maks: 256 Karakter): "); gets(inputChar);
            ubahHuruf();
        }
        else if(option == 3)
        {
            printf("Ketikkan huruf yang akan anda operasikan (Maks: 256 Karakter): "); gets(inputChar);
            balikKalimat();
        }
        else if (option == 4)
        {
            option == 4;
        }
        else
        {
            printf("Data yang anda masukkan salah!");
        }
    } 
    while (option!=4);
}

void hitungHuruf(){
    for (int i = 0; inputChar[i]!= '\0'; i++)
    {
        if ((inputChar[i]=='a')||(inputChar[i]=='i')||(inputChar[i]=='u')||(inputChar[i]=='e')||(inputChar[i]=='o') || (inputChar[i]=='A')||(inputChar[i]=='I')||(inputChar[i]=='U')||(inputChar[i]=='E')||(inputChar[i]=='O'))
        {
            totalVocal++;
        }
        else
        {
            totalCons++;
        }
        totalChar++;
    }
    printf("\nTotal Karakter yang anda masukkan adalah: %d.\n", totalChar);
    printf("Total Karakter Vokal yang anda masukkan adalah: %d.\n", totalVocal);
    printf("Total Karakter Konsonan yang anda masukkan adalah: %d.\n", totalCons);
}

void ubahHuruf(){
    for (int i = 0; inputChar[i]!= '\0'; i++)
    {
        if (inputChar[i] == 'a')
        {
            inputChar[i] = 'i';
        }
        else if (inputChar[i] == 'A')
        {
            inputChar[i] = 'I';
        }
        
    }
    printf("%s.\n", inputChar);
}

void balikKalimat(){ 
    int x;
    x = strlen(inputChar);
    for (x - 1; x > 0; x--)
    {
        printf("%c", inputChar[x-1]);
    }
    printf("\n"); 
}