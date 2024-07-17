//포인트 배열로 연령별 윗몸 일으키기 횟수 관리하기

#include <stdio.h>
#include <stdlib.h>

int main(void){
    unsigned char limit_table[3];
    unsigned char *p[3];
    int temp, sum, member, age;
    
    for (age = 0; age < 3; age++){
        printf("%d0대 윗몸일으키기 횟수\n",age + 2);
        printf("%d0대는 몇명입니까? : ",age + 2);
        scanf("%d",&temp);
        
        limit_table[age] = (unsigned char)temp;
        p[age] = (unsigned char*)malloc(limit_table[age]);
        
        for (member = 0; member<limit_table[age]; member++){
            printf("%dth : ",member+1);
            scanf("%d",&temp);
            *(p[age]+member) = temp;
        }
    }
    printf("연령별 평균 횟수\n");
    for (age = 0; age < 3; age++){
        sum = 0;
        for (member = 0; member<limit_table[age]; member++){
            sum = sum + *(p[age]+member);
        }
        printf("%d0대 평균 : %d\n",age + 2, (int)sum/ limit_table[age]);
    }
    for (age =0; age<3; age++){
        free(p[age]);
    }
}
