//typedef로 정의한 자료형으로 변수 선언하기
#include <stdio.h>

typedef unsigned short int US;

int main(void){
    unsigned short int data = 5;
    US temp = data;
    
    printf("temp = %d\n",temp);
    
    
}
