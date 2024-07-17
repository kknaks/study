//2차원 배열로 연령별 윗몸 일으키기 횟수 관리하기

#include <stdio.h>

int main(void){
    unsigned char limit_table[3] = {4, 2, 3};
    unsigned char count[3][4];
    int age, member,temp,sum;
    
    for (age = 0; age < 3; age++){
        printf("%d0대 윗몸일으키기 횟수\n",age + 2);
        for (member = 0; member<limit_table[age]; member++){
            printf("%dth : ",member+1);
            scanf("%d",&temp);
            count[age][member] = (unsigned char)temp;
        }
    }
    printf("연령별 평균 횟수\n");
    for (age = 0; age < 3; age++){
        sum = 0;
        for (member = 0; member<limit_table[age]; member++){
            sum = sum + count[age][member];
        }
        printf("%d0대 평균 : %d\n",age + 2, (int)sum/ limit_table[age]);
    }
}
