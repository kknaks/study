// 구조체를 사용하여 친구 정보관리하기

#include <stdio.h>
#define MAX_COUNT 5

typedef struct {
    char name[15];
    unsigned short age;
} Person;

int AddFriend(Person *data,int count){
    if (count < MAX_COUNT){
        printf("name  : ");
        scanf("%s",(data+count)->name);
        printf("age   : ");
        scanf("%hu",&(data+count)->age);
        printf("Sucess!\n");
        return 1;
    }
    return 0;
}

void ShowFriend(Person *data, int count){
    int i;
    printf("----Friend----\n");
    printf(" name ||  age \n");
    for (i=0;i<count;i++){
        printf(" %s ||  %d \n",(data+i)->name,(data+i)->age);
    }
}
   
int main(void){
    int count=0,num;
    Person data[MAX_COUNT];
    
    while (1){
        printf("-----menu-----\n");
        printf("==============\n");
        printf("1.Add Friend  \n");
        printf("2.List Friend \n");
        printf("3.Exit Program\n");
        printf("Choose Number : ");
        scanf("%d",&num);
        
        if (num==1){
            if (1 == AddFriend(data,count)) count++;
        }else if (num==2){
            ShowFriend(data,count);
        }else if (num==3) break;
        else printf("Chose 1~3!!");
    }
}


