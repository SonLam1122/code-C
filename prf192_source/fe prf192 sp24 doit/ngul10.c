#include<stdio.h>
void main(){
    int i, j = 25;
    int *pi, *pj = &j;
    *pj = j +5;
    i = *pj + 5;
    pi = pj; 
    *pi =i + j;
    printf("%d %d", *pi, *pj);
}