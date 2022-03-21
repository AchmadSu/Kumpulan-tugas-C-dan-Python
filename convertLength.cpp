#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

float f_to_i(float feet);
float i_to_cm(float inch);
float cm_to_m(float cm);

float feet;
float inch;
float cm;
float m;

main(){
    printf("KONVERSI PANJANG\nNama \t: Ecep Achmad Sutisna\nNIM \t: D111911027\nKelas \t: IF - 3D\n ------------------- \nSilahkan masukkan panjang (Dalam satuan Feet): ");
    scanf("%f", &feet);
    printf("Hasilnya adalah: ");
    std::cout<<std::setprecision(4)<<f_to_i(feet);
    cout<<" inch, ";
    std::cout<<std::setprecision(4)<<i_to_cm(inch);
    cout<<" cm dan ";
    std::cout<<std::setprecision(4)<<cm_to_m(cm);
    cout<<" meter";
}

float f_to_i(float feet){
    inch = 12*feet;
    return inch;
}
float i_to_cm(float inch){
    cm = 2.54*inch;
    return cm;
}
float cm_to_m(float cm){
    m = cm/100;
    return m;    
}