#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int option;
char looping;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int arrOne(){
    int i = 0;
    int j = 0;
    int n;

    printf("Masukkan banyak nilai indeks array: ");
    scanf("%d", &n);
    
    int array_of_int[n];
    
    while (i<n)
    {
        printf("Nilai ke-%d : ",i+1);
        scanf("%d", &array_of_int[i]);
        i++;
    }
    while (j<n)
    {
        printf("\nIndeks Array Ke-%d adalah %d", j+1, array_of_int[j]);
        j++;
    }
    return 0;
}

int arrTwo(){
    int bln, thn, jhari;
	int jum_hari[12]={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	puts("Memperoleh Jumlah Hari");
    puts("Pada Suatu Bulan dan Suatu Tahun");
    puts("--------------------------------");
    printf("Masukkan bulan (1  - 12) : ");
    scanf("%d", &bln);
    printf("Masukkan tahun: ");
    scanf("%d", &thn);
    if (bln == 2)
    {
        if (thn % 4 == 0)
        {
            jhari = 29;
        }
        else
        {
            jhari = 28;
        }
    }
    else
    {
        jhari = jum_hari[bln-1];
    }
    printf("\nJumlah hari dalam bulan %d tahun %d adalah %d hari\n", bln, thn, jhari);
	return 0;
}
int arrThree(){
    int result = 0;
    int i = 0;
    char array_of_char[] = "TEDC Bandung\n";
    while(1)
    {
        if (array_of_char[i]=='\n')
        {
            break;
        }
        result++;
        i++;
    }
    printf("Teks: %s\n", array_of_char);
    printf("Jumlah hurufnya: %d\n", result);
}
int main() {
    do {
        printf("Array\n1. Array 1\n2. Array 2\n3. Array 3\nPilih angka opsi Array: ");
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
        default:
            printf("Data yang anda masukkan salah!");
            break;
        }
        cout<<endl<<"Lakukan Ulang Program Ini? (Isi dengan Y/T): ";
        cin>>looping;
    } 
    while ((looping == 'Y') || (looping == 'y'));

    
}