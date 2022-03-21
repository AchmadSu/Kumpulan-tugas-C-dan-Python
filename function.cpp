#include <iostream>
#include <stdio.h>

using namespace std;
void tukar();
int a = 5, b = 3;

main(){
    printf("Sebelum pemanggilan fungsi\n");
    printf("a = %d, b = %d\n", a, b);
    tukar();
    printf("Sesudah pemanggilan fungsi\n");
    printf("a = %d, b = %d\n", a, b);
}

void tukar(){
    int temp = a;
    a = b;
    b = temp;
}
