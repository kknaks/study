#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int num;
    struct node *p_next;
} NODE;

void AddNumber(NODE **q_head,NODE **q_tail,int data){
    if (NULL != *q_head){
        (*q_tail)->p_next = (NODE *)malloc(sizeof(NODE));
        *q_tail = (*q_tail)->p_next;
    }else{
        *q_head =(NODE *)malloc(sizeof(NODE));
        *q_tail = *q_head;
    }
    (*q_tail)->num = data;
    (*q_tail)->p_next = NULL;
}

int main(void){
    NODE *p_head = NULL, *p_tail = NULL, *p;
    int sum = 0, temp;
    
    while(1){
        printf("num (end:9999) : ");
        scanf("%d",&temp);
        if (9999==temp) break;
        AddNumber(&p_head,&p_tail,temp);
    }
    p = p_head;
    while(NULL != p){
        if(p !=p_head) printf("+");
        printf("%d",p->num);
        sum = sum + p->num;
        p = p->p_next;
    }
    printf("=%d\n",sum);
    
    while(NULL!=p_head){
        p = p_head;
        p_head = p_head->p_next;
        free(p);
    }
    p_tail = p_head;
}
