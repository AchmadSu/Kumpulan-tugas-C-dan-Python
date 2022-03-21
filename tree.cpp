#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;
typedef struct Node{
    int data;
    Node *kiri;
    Node *kanan;
};

Node *root = NULL;
void tambah(Node **pohon, int databaru);    
void preOrder(Node *pohon);
void inOrder(Node *pohon);
void postOrder(Node *pohon);

int main(){
    printf("\n");
    Node *root = NULL;
    int data;
    char menu;
    do
    {
        printf("\n1. Tambah\n2. Pre Order\n3. In Order \n4. Post Order\n5. Exit\n");
        printf("Masukkan pilihan anda: ");
        menu=getche();
        switch (menu)
        {
        case '1':
            printf("\nMasukkan data: ");
            scanf("%i", &data);
            tambah(&root, data);
            break;
        case '2':
            if (root!=NULL)
            {
                preOrder(root);
            }
            else
            {
                printf("Data belum terisi");
            }
            break;
        case '3':
            if (root!=NULL)
            {
                inOrder(root);
            }
            else
            {
                printf("Data belum terisi");
            }
            break;
        case '4':
            if (root!=NULL)
            {
                postOrder(root);
            }
            else
            {
                printf("Data belum terisi");
            }
            break;  
        case '5':
            break;
        default:
            printf("Data yang anda masukkan tidak benar!");
            break;
        }
    } while (menu!='5');   
}

void tambah(Node **pohon, int databaru){
    if ((*pohon)==NULL)
    {
        Node *baru;
        baru = new Node;
        baru -> data = databaru;
        baru -> kiri = NULL;
        baru -> kanan = NULL;
        (*pohon) = baru;
        printf("Berhasil!");
    }
    else if (databaru < (*pohon)->data)
    {
        printf("Kiri");
        tambah(&(*pohon)->kiri, databaru);
    }
    else if (databaru > (*pohon)->data)
    {
        printf("Kanan");
        tambah(&(*pohon)->kanan, databaru);
    }
    else if(databaru == (*pohon)->data){
        printf("Data sudah ada!");
    }
}

void preOrder (Node *pohon){
    if (pohon!=NULL)
    {
        printf("%i", pohon->data);
        preOrder(pohon->kiri);
        preOrder(pohon->kanan);
    }
    
}

void inOrder (Node *pohon){
    if (pohon!=NULL)
    {
        inOrder(pohon->kiri);
        printf("%i", pohon->data);
        inOrder(pohon->kanan);
    }
    
}

void postOrder (Node *pohon){
    if (pohon!=NULL)
    {
        postOrder(pohon->kiri);
        postOrder(pohon->kanan);
        printf("%i", pohon->data);
    }
    
}