#include <iostream>
using namespace std;

//nested struct

struct Buku {
	string judul;
	string author;
	int tahun;
};

struct Peminjam {
	int NIM;
	string nama;
	string jurusan;
};

//subprogram

void cetakinfobuku(Buku buku) {
	
	cout<< "judul : "<< buku.judul<< endl;
	cout<< "author : "<< buku.author << endl;
	cout<< "tahun : "<< buku.tahun << endl;
	
}

void cetakpeminjam (Peminjam pmj) {
	
	cout << "NIM : "<< pmj.NIM << endl;
	cout << "Nama : "<< pmj.nama << endl;
	cout << "Jurusan : "<< pmj.jurusan << endl;
}

int main(int argc, char** argv) {
		
	buku buku1;
	buku1.judul = "DIKTA DAN HUKUM";
	buku1.author = "Rifa Safira";
	buku1.tahun = 2021;
	
	
	buku buku2;
	buku2.judul = "KATA";
	buku2.author = "Ecep";
	buku2.tahun = 2021;
	
	buku buku3;
	buku3.judul = "MARIPOSA";
	buku3.author = "Hamimah";
	buku3.tahun = 2020;
	
	peminjam peminjam1;
	peminjam1.NIM = 398378734;
	peminjam1.nama = "Gilang";
	peminjam1.jurusan = "Teknik Informatika";
	
	peminjam peminjam2;
	peminjam2.NIM = 3837837635;
	peminjam2.nama = "Adel";
	peminjam2.jurusan = "Teknik Informatika";
	
	peminjam peminjam3;
	peminjam3.NIM = 3787387454;
	peminjam3.nama = "Akbar";
	peminjam3.jurusan = "Teknik Mesin";
	
	
	cetakinfobuku (buku1); //rekursif
	cout<< endl;
	cetakinfobuku (buku2);
	cout<< endl;
	cetakinfobuku (buku3);
	cout<< endl;
	
	cetakpeminjam (peminjam1);
	cout<< endl;
	cetakpeminjam (peminjam2);
	cout<< endl;
	cetakpeminjam (peminjam3);
	cout<< endl;

	return 0;
}