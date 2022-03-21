#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int i;
int j;
int n;
int option;
char looping;

void inputRangeArr(){
    printf("Masukkan banyak indeks: ");
    scanf("%d", &n);
}

int arrOne(){
    i=0;
    
    inputRangeArr();
    int array_of_int[n];
    
    while (i < n)
    {
        printf("Data Indeks ke-%d : ",i+1);
        scanf("%d", &array_of_int[i]);
        i++;
    }

    j=0;
    printf("Output Array: \n");
    while (j < n)
    {
        n--;
        printf("%d ", array_of_int[n]);
    }
    printf("\n");
    return 0;
}

int arrTwo(){
    i = 0;
    inputRangeArr();
    int array_of_int[n];
    
    while (i<n)
    {
        printf("Data Indeks ke-%d : ",i+1);
        scanf("%d", &array_of_int[i]);
        i++;
    }
    
    j=0;
    int max = 0;
    while (j<n)
    {
        if (array_of_int[j] > max)
        {
            max = array_of_int[j];
        }
        j++;
    }
    printf("Nilai terbesar dari indeks array yang anda inputkan adalah %d\n", max);
    return 0;
}

int arrThree(){
    i=0;
    inputRangeArr();
    int array_of_int[n];
    
    do
    {
        printf("Data Indeks ke-%d : ",i+1);
        scanf("%d", &array_of_int[i]);
        i++;
    }
    while (i<n);
    
    j=0;
    int max = 0;
    do
    {
        if (array_of_int[j] > max)
        {
            max = array_of_int[j];
        }
        j++;
    }
    while (j<n);
    printf("Nilai terbesar dari indeks array yang anda inputkan adalah %d\n", max);
    return 0;
}

void arrFour(){
    i=0;
    char array_of_char[] = "Balonku ada lima rupa - rupa warnanya. Merah, Kuning, Kelabu. Merah Muda dan Biru. Meletus Balon Hijau Dhuarr. Hatiku sangat kacau. Balonku tinggal empat kupegang erat - erat\n";
    printf("Lirik Balonku sebelum dirubah: \n%s", array_of_char);
    while (1)
    {
        if(array_of_char[i] == 'a')
        {
            array_of_char[i] = 'i';
        }
        else if (array_of_char[i]=='\n')
        {
            break;
        }
        i++;
    }
    printf("Lirik Balonku setelah dirubah: \n%s\n", array_of_char);
}

int main(){
    do
    {
        printf("Tugas Dasar Pemorgraman\nNama\t: Ecep Achmad Sutisna\nNIM\t: D111911027\nKelas\t: IF-3D\nOpsi Tugas: \n1. Array 1\n2. Array 2\n3. Array 3\n4. Array 4\n5. Keluar\nPilih angka opsi: ");
        scanf("%d", &option);
        switch (option)
        {
            case 1:
                arrOne();
                break;
            case 2:
                arrTwo();
                break;
            case 3:
                arrThree();
                break;
            case 4:
                arrFour();
                break;
            case 5:
                option = 5;
                break;
            default:
                printf("Data yang anda masukkan salah!\n");
                break;
        }
    } 
    while (option!=5);      
}