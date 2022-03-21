#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

typedef struct TNode
{
	int data;
	TNode *next;
	TNode *prev;
};


TNode *head, *tail;

int databaru;


int init()	//inisialisasi awal
{
	TNode *head, *tail;
	head = NULL;
	tail = NULL;
}


int isEmpty()	//mengecek kosong tidaknya Linked List
{
	if(tail == NULL)
	return 1;
	else
	return 0;
}


int insertDepan(int value)	//penambahan data di depan
{
	TNode *baru;	
	baru = new TNode;	// pembentukan node baru

	baru->data = value;	// pemberian nilai terhadap data baru
	baru->next = NULL;	// data pertama harus menunjuk ke NULL
	baru->prev = NULL;	// data pertama harus menunjuk ke NULL

	if(isEmpty() == 1)	// jika Linked List kosong
	{
		head = baru;	// letakan baru pada head
		tail = head;	// head = tail
		head->next = NULL;
		head->prev = NULL;
		tail->next = NULL;
		tail->prev = NULL;
	}
	else 	// jika Linked List sudah ada datanya
	{
		baru->next = head;	// menyambungkan data baru dengan head lama
		head->prev = baru;
		head = baru;	//head harus selalu berada di depan
	}
	printf("data masuk\n");
	}


int insertBelakang(int value)	//penambahan data di belakang
{
	TNode *baru;
	baru = new TNode;	// pembentukan node baru

	baru->data = value; 	// pemberian nilai terhadap data baru
	baru->next = NULL;	// data pertama harus menunjuk ke NULL
	baru->prev = NULL;	// data pertama harus menunjuk ke NULL

	if(isEmpty() == 1)	// jika Linked List kosong
	{
		head = baru;	// letakan baru pada head
		tail = head;	// head = tail
		head->next = NULL;
		head->prev = NULL;
		tail->next = NULL;
		tail->prev = NULL;
	}
	else 	// jika Linked List sudah ada datanya
	{
		tail->next = baru;	// menghubungkan data baru dengan tail lama
		baru->prev = tail;
		tail = baru;	// tail harus selalu berada di belakang
		tail->next = NULL;	
	}
	printf("data masuk\n");
}


int insertTengah(int value, int cari)	//penambahan data di tengah
{
	TNode *baru, *bantu, *bantu2;
	baru = new TNode;	// pembentukan node baru
	baru->data = value; 	// pemberian nilai terhadap data baru
	baru->next = NULL;	// data pertama harus menunjuk ke NULL
	baru->prev = NULL;	// data pertama harus menunjuk ke NULL

	bantu = head;	// letakan bantu di awal
	while(bantu->data != cari)
	{
		bantu = bantu->next;	// geser bantu sampai data cari
	}

	bantu2 = bantu->next;	// menghubungkan ke node setelah yang dicari
	baru->next = bantu2; 	// menghubungkan node baru
	bantu2->prev = baru;	
	bantu->next = baru;	// menghubungkan ke node sebelum yang dicari
	baru->prev = bantu;
}


int deleteDepan()	// penghapusan data di depan
{	
	TNode *hapus;

	if(isEmpty() == 0)	// jika data belum kosong 
	{
		if(head->next != NULL)	// jika data tidak tinggal 1
		{
			hapus = head;	// letakan hapus pada head
			head = head->next; 	// menggeser head (karena head harus ada)
			head->prev = NULL; 	// head harus menuju ke NULL
			delete hapus;	//proses delete tidak boleh dilakukan jika node sedang ditunjuk oleh pointer
		}
		else  	// jika data tinggal head
		{
			head = NULL;	// langsung diberi NULL saja
			tail = NULL;
		}
		printf("data terdepan dihapus\n");
	}
	else // jika data kosong 
	{	
	printf("data kosong\n");
	}
}

int deleteBelakang()	// penghapusan data di belakang
{	
TNode *hapus;

	if(isEmpty() == 0) 	// jika data belum kosong
	{
		if(head ->next != NULL)	// jika data tidak tinggal 1
		{
			hapus = tail; 	// letakan hapus pada tail
			tail = tail->prev; 	// menggeser tail
			tail->next = NULL; 	// tail harus menuju ke NULL
			delete hapus;	//proses delete tidak boleh dilakukan jika node sedang ditunjuk oleh pointer
		}
		else // jika data tinggal head
		{
			head = NULL; 	// langsung diberi NULL saja
			tail = NULL;
		}
		printf("data di belakang dihapus\n");
	}
	else // jika data kosong 
	{	
		printf("data kosong\n");
	}
}

int deleteTengah(int cari)	// penghapusan data di tengah
{
	TNode *hapus, *bantu, *bantu2;

	hapus = head;	// letakan hapus pada head
	while(hapus->data != cari)
	{
		hapus = hapus->next;	// menggeser hingga data cari
	}
	bantu2 = hapus->next;	// mengkaitkan node sebelum dan sesudahnya
	bantu = hapus->prev;	 
	bantu->next = bantu2;
	bantu2->prev = bantu;
	printf("data ditengah dihapus\n");
	delete hapus; //proses delete tidak boleh dilakukan jika node sedang ditunjuk oleh pointer
}


int clear()	// penghapusan semua data
{
	TNode *bantu, *hapus;
	bantu = head;	// letakan bantu pada head
	while (bantu != NULL)	// geser bantu hingga akhir
	{
		hapus = bantu;	
		bantu = bantu->next;
		delete hapus;	// delete satu persatu node
	}

	head = NULL;	// jika sudah habis berikan nilai NULL pada head
	tail = NULL;	// jika sudah habis berikan nilai NULL pada tail
	printf("data dibersihkan\n");
}


int cetak()	// menampilkan semua data
{
	TNode *bantu;
	bantu = head;	// letakan bantu pada head

	if(isEmpty() == 0)	
	{
		while (bantu != tail->next)	
		{
			printf("%d ", bantu->data);	// cetak data pada setiap node
			bantu = bantu->next;	// geser bantu hingga akhir
		}
		printf("\n");
	}
	else // jika data sudah kosong
	{
		printf("data kosong\n");
	}	
	 
}

int pilih;
int newdata=0;

int main(){
	init();
	do
	{
		printf("Pointer Programs :\n");
		printf("1. Tambah Data di Awal\n");
		printf("2. Tambah Data di Akhir\n");
		printf("3. Hapus Data di Awal\n");
		printf("4. Hapus Data di Akhir\n");	
		printf("5. Bersihkan Data\n");
		printf("6. Tampilkan Data\n");
		printf("0. Keluar\n");
		printf("Masukkan Angka Opsi : ");
		scanf("%i",&pilih);

		switch(pilih)
		{
			case 0:
				pilih = 0;
				break;
			case 1:
				insertDepan(10); 
				break;
			case 2:
				insertBelakang(20); 
				break;
			case 3:
				deleteDepan();
				break;
			case 4:
				deleteBelakang();
				break;
			case 5:
				clear();
				break;
			case 6:
				cetak(); 
				break; 
			default:
				printf("Data yang anda masukkan salah!\n");
				break;	
		}
	}
	while (pilih!=0);
	return 0;
}
