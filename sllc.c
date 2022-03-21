#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

typedef struct gerbong { 
    int data;
    gerbong *next;
};

gerbong *head;
gerbong *tail;
gerbong *baru;
gerbong *hapus;
gerbong *bantu;

head = new gerbong; 
head = NULL;

int isEmpty(){
    if (head==NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void tambahdepan( int databaru ){ 
    baru=new gerbong;
    baru->data=databaru; 
    baru->next=baru;

    if( isEmpty() )
        { 
            head=tail=baru; 
            head->next=head; 
            tail->next=tail;
        }
    else
        {
            baru->next=head; 
            head=baru;
            tail->next=head;
        }
    printf("data masuk\n");
}

void tambahbelakang( int databaru ){ 
    baru=new gerbong;
    baru->data=databaru; 
    baru->next=baru;

    if( isEmpty() )
        { 
            head=tail=baru; 
            head->next=head; 
            tail->next=tail;
        }
    else
        {
            tail->next=baru; 
            tail=baru;
            tail->next=head;
        }
    printf("data masuk\n");
}

void cetak(){
    if( !isEmpty() )
    {
        bantu=head;
        printf(" %i ", bantu->data); 
        bantu=bantu->next; 
        while( bantu!=head )
        {
            printf(" %i ", bantu->data);
            bantu=bantu->next;
        }
        printf("\n");
    }
    else
    {
        printf("Data kosong!");
    }
}

void hapusdepan(){
    int tampung; 
    if( isEmpty() )
    {
        printf("data belum ada");
    }
    else
    {
        tampung=head->data;
        if(head->next!=NULL)
        { 
            hapus=head;
            head=head->next;
            tail->next=head;
            delete hapus;
        }
        else
        {
            head=tail=NULL;
        }
        printf("Data %i Terhapus\n", tampung);
    }
}

void hapusbelakang(){
    int tampung;
    if( isEmpty() )
    {
        printf("data belum ada");
    }
    else
    {
        tampung=tail->data;
        if(head==tail)
        {
            head=tail=NULL;
        }
        else
        {
            bantu=head;
            hapus=tail;
            while(bantu->next!=tail)
            { 
                bantu=bantu->next;
            }
            tail=bantu;
            tail->next=head; delete hapus;
        }
        printf("Data %i Terhapus\n", tampung);
    }
}
