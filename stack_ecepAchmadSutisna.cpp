#include "string.h"
#include "stdio.h"
#include <math.h>

typedef struct stack //	Mendefinisikan stack dengan menggunakan struct
{
int top;
char data [15][20]; 	  // menampung 15 data dengan jumlah string max 20 huruf
};

#define max_stack 15
stack tumpuk;

void push(char d[20])
{
	tumpuk.top++;
	strcpy(tumpuk.data[tumpuk.top],d);
	printf("data berhasil dimasukkan");
}

void pop()
{
	printf ("data %s terambil",tumpuk.data[tumpuk.top]);
	tumpuk.top--;
}

int isFull()
{
	if (tumpuk.top==max_stack-1)
		return 1;
	else
		return 0;
}

int isEmpty()
{
	if (tumpuk.top==-1)
		return 1;
	else
		return 0;
}

void clear()
{
	tumpuk.top=-1;
	printf("semua data terhapus.");
}

void print()
{
	for (int i=tumpuk.top;i>=0;i--)
		printf ("%s\n",tumpuk.data[i]);
}

int stack(){
    int a;
	char input[20];
	tumpuk.top=-1;
	do {
		printf("\nMenu:\n1.push\n2.pop\n3.clear\n4.print\n5.terminate\npilihan : ");
		scanf("%i",&a);
		fflush(stdin);
		printf("\n");
		switch(a) {
		case 1: 
			if (isFull()==1)
					printf("Stack penuh.\n");
			else {
				printf("Masukkan data: ");
				gets(input);
				fflush(stdin);
				push(input);
			}
			break;
		case 2:
			if(isEmpty()==1)
			{
				printf("Stack kosong");
			}
			else
			{
				pop();
			}
			break;
		case 3:
			clear();
			printf("Stack kosong\n");
			break;
		case 4:
			if(isEmpty()==1)
				printf("Stack kosong");
			else
				print();
		}
	}
	while (a!=5);
}



int main()
{
	printf("Stack Program\n");
	stack(); 
}
