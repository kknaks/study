//구조체를 사용해서 사람의 신체정보를 입력받고 출력하기

#include <stdio.h>

typedef struct
{
    char name[32];
    unsigned short age;
    float height;
    float weight;
} Person;

int main(void){
//    Person data;
//    printf("대상자의 정보를 입력하세요\n");
//    printf("name  : ");
//    scanf("%s",data.name);
//    printf("age   : ");
//    scanf("%hu",&data.age);
//    printf("height: ");
//    scanf("%f",&data.height);
//    printf("weight: ");
//    scanf("%f",&data.weight);
//    
//    printf("%s -> age: %d, height : %0.2f, weight : %0.2f\n",data.name,data.age,data.height,data.weight);
    char s1[32] = "keonhak";
    Person data;
    Person *p = &data;
//    scanf("%s",p->name);
//    (p->name) = "keonhak";
    p->age = 23;
    p->height = 173.1;
    p->weight = 85.1;
    
    printf("%s -> age: %d, height : %0.2f, weight : %0.2f\n",data.name,data.age,data.height,data.weight);
}
