#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int honor;
int hours;
int overtime;
int addHonor;
char option;
int main(){
    printf("Perhitungan total upah karyawan PT. ABC\nMasukkan total jam kerja perminggu: "); scanf("%d", &hours);
    if (hours > 0 && hours < 49)
    {
        printf("Apakah karyawan tersebut kerja lembur? (Isi dengan Y/T): ");scanf("%c", option);
        if (option == 'Y' || 'y')
        {
            printf("Masukkan jam lembur: ");scanf("%d", &overtime);
            addHonor = overtime*3000;     
        }
        else if (option == 'T' || 't')
        {
            addHonor = 0;
        }
        else
        {
            printf("Data yang anda masukkan salah!");
        }
        honor = (2000*hours) + addHonor;
        printf("Total honor yang didapat oleh karyawan tersebut adalah: RP. %d", honor);
    }
    else
    {
        printf("Jam kerja harus diantara 1 hingga 48 jam dalam satu minggu");
    }
    
    
}