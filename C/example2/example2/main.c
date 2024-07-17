#include <stdio.h>
#include <stdlib.h>
void GetDate(int **q){
    *q = (int *)malloc(8);
}

int main(void){
    int *p;
    GetDate(&p);
    *p = 5;
    printf("%d",*p);
    free(p);
    
}
