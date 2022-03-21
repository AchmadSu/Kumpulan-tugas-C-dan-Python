#include "string.h"
#include "stdio.h"
#include <math.h>

int searchArr(){
    int array_a[10]={0,2,5,7,11,12,14,22,26,31};
	int awal, tengah, akhir, cari, flag=0;
	
	awal=0;
	akhir=9; //didapat dari banyak data-1
	
	printf("data yang anda cari :");
	scanf("%i", &cari);
	
	while (awal<=akhir && flag==0)
	{
		tengah=(awal+akhir)/2;
		if (array_a[tengah]==cari)
		{
			flag=1;
			break;
		}
		else if(array_a[tengah]<cari)
		{
			awal=tengah+1;
			printf("cari kanan\n");
		}
		else{
			akhir=tengah-1;
			printf("cari kiri\n");
		}
	}
	if (flag==1)
    {
        printf("data ditemukan\n");
    }
	else 
    {
        printf("data tidak ditemukan\n");
    }
	return 0;
}

int searchArrTwo(){
    int array_a[10]={11, 12, 21, 25, 30, 34, 45, 65, 73, 81};
	int low, high, pos, cari, flag=0;
	float posisi;
	
	low=0;
	high=9; //dari bnyak data-1
	printf("data yang anda cari :");
	scanf("%i", &cari);
	
	do{
	posisi=(float) ((cari-array_a[low])/(array_a[high]-array_a[low]))*(high-low)+low;
	pos=floor(posisi);
	if(array_a[pos]==cari){
	 flag=1;
	 break;	
	}	
	if (array_a[pos]>cari) high=pos-1;
	else if(array_a[pos]<cari)
	low=pos+1;
	}
	while(cari>=array_a[low] && cari<=array_a[high]);
	if(flag==1)
	{
		printf("data ditemukan\n");
	}
	else
	{ 
		printf("data tidak ditemukan\n");
	}

	return 0;
}

int main(){
    int option;
	do
    {
		printf("\nSearching Array\nPilih Metode\n1. Search Array 1\n2. Search Array 2\n3. Keluar Program\nMasukkan angka opsi: ");
    	scanf("%d", &option);

        switch (option)
        {
        case 1:
            searchArr();
            break;
        case 2:
            searchArrTwo();
            break;
        case 3:
            option = 3;
            break;
        default:
            printf("Data yang anda masukkan salah!");
            break;
        }
    } while (option!=3);
       
}