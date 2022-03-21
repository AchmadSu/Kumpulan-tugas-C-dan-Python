#include "string.h"
#include "stdio.h"
#include <math.h>

int A[5], i, j, tampung;
void enterData(){
    for (i = 0; i < 5; i++)
    {
        printf("Masukkan data ke-%d: ", i+1);
        scanf("%d", &A[i]);
    }
}

void outputData(){
    printf("sebelum sorting : \n");
	for (i=0;i<5;i++)
	{
		printf("%d ", A[i]);
	}
}

int resultSorting(){
    printf("\n\nsetelah sorting : \n");
	for (i=0;i<5;i++)
	{
		printf("%d ", A[i]);
	}
    return 0;
}

void bubbleSort(){
    enterData();
    outputData();
	for (i=1;i<5;i++)
	{
        for(j=5-1;j>=i;j--)
     	{
	       if (A[j]<A[j-1])
	       {
	       	tampung=A[j];
		    A[j]=A[j-1];
		    A[j-1]=tampung;
		   }
        }	
	}
	resultSorting();
    printf("\n");
}

void selectionSort(){
    enterData();
    outputData();
    for (i = 0; i < 5; i++) {
        tampung = i;
        int pos;
        for(j = i+1; j < 5; j++){
            if(A[j] < A[tampung]){
                tampung = j;
            }
        }   
        pos = A[tampung];
        A[tampung] = A[i];
        A[i] = pos;
    }
    resultSorting();
    printf("\n");
}

void insertionSort(){
    enterData();
    outputData();
    for (i = 0; i < 5; i++)
    {
        tampung = A[i];

        for (j = i-1; A[j]>tampung && j>=0; j--)
        {
            A[j+1]  = A[j];
        }
        A[j+1] = tampung;
    }
    resultSorting();
    printf("\n");
}

void exchangeSort(){
    enterData();
    outputData();
    for (i = 0; i < 5; i++)
    {
        int pos;
        for (j = i+1; j<5; j++)
        {
            if (A[j] < A[i])
            {
                pos = A[i];
                A[i] = A[j];
                A[j] = pos;
            }  
        }
    }
    resultSorting();
    printf("\n");
}

int main()
{
    int option;
	do
    {
        printf("\nSORTING\nPilih Metode Pengurutan Data.\n1. Bubble Sort\n2. Exchange Sort\n3. Selection Sort\n4. Insertion Sort\n5. Keluar Program\nPilih angka opsi: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            bubbleSort();
            break;
        case 2:
            exchangeSort();
            break;
        case 3:
            selectionSort();
            break;
        case 4:
            insertionSort();
            break;
        case 5:
            option = 5;
            break;
        default:
            printf("Data yang anda masukkan salah!\n");
            break;
        }
    } while (option!=5);
    
}