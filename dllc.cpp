#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iomanip>

using namespace std;

int isEmpty() {
    if(head==NULL) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

void tambahdata (int databaru){
    TNode *baru,*bantu;
    
