#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int n;
int option;

void mainLooping1(){
    int i = 1;

    printf("Masukkan banyak perulangan: ");
    scanf("%d", &n);
    do
    {
        printf("POLITEKNIK TEDC BANDUNG \n");
        i++;
    }
    while(i<=n);
}

void mainLooping2(){
    int i = 5;

    printf("Masukkan angka: ");
    scanf("%d", &n);
    do
    {
        if (i%25 == 0)
        {
            printf("%d* ", i);
        }
        else{
            printf("%d ", i);
        }
        i = i+5;
        
    } while (i<=n);
}
int main(){
    printf("1. Tugas pertama.\n2. Tugas kedua.\nMasukkan pilihan: ");
    scanf("%d", &option);

    if (option<3)
    {
        if (option==1)
        {
            mainLooping1();
        }
        else if (option==2)
        {
            mainLooping2();
        }
    }
    else{
        printf("Data yang anda masukkan salah!");
    }
    
}