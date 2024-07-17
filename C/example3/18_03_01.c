//배열을 사용하여 친구정보 관리하기

#include <stdio.h>
#define MAX_COUNT 5

typedef char NAME_TYPE[14];
//(*p_name)[14]
int AddFriend(char (*p_name)[14], unsigned short *p_age, int count){
    if (count < MAX_COUNT){
        printf("name  : ");
        scanf("%s",*(p_name+count));
        printf("age   : ");
        scanf("%hu",p_age+count);
        printf("Sucess!\n");
        return 1;
    }else{
        printf("Over Max Friend!\n\n\n");
    }
    return 0;
}

void ShowFriend(char (*p_name)[14], unsigned short *p_age, int count){
    int i;
    printf("----Friend----\n");
    printf(" name ||  age \n");
    for (i=0;i<count;i++){
        printf(" %s ||  %d \n\n\n",*(p_name + i),*(p_age+i));
    }
    
}
int main(void){
    char name[MAX_COUNT][14];
//    NAME_TYPE name[14];
    unsigned short age[MAX_COUNT];
    int count = 0, num = 0;
    
    while (1){
        printf("-----menu-----\n");
        printf("==============\n");
        printf("1.Add Friend  \n");
        printf("2.List Friend \n");
        printf("3.Exit Program\n");
        printf("Choose Number : ");
        scanf("%d",&num);
        
        if(num==1){
            if (1 == AddFriend(name, age, count))count++;
        }else if (num==2){
            ShowFriend(name,age,count);
        }else if (num==3) break;
        else printf("Chose 1~3!!");
    }
}
