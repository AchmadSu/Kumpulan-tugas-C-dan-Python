#include <iostream>
#include <stdio.h>
using namespace std;

float degree;
char option;

int main(){
    do{
        printf("Nama \t: Ecep Achmad Sutisna.\nNIM \t: D111911027 \n");
        printf("Masukkan suhu tubuh anda: ");
        scanf("%f", &degree);
        
        if (degree<= 37.5)
        {
            printf("Ecep Achmad Sutisna suhu anda normal, silahkan melanjutkan pekerjaan anda\n");
        }
        else
        {
            printf("Ecep Achmad Sutisna suhu anda lebih dari batas normal, silahkan segera periksa ke klinik terdekat\n");
        }
        cout<<"Apakah anda akan memeriksa suhu lagi? (Isi 'Y' atau 'T') ";
        cin>>option;
    }
    while((option == 'Y')||(option == 'y'));
}