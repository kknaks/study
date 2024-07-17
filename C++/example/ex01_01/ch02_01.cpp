#include <bits/stdc++.h>
using namespace std;

struct ValueList{
    int a,b,c;
};

void ModifyNumber(int *p_value, const char* p_value_name){
    if(*p_value<0){
        printf("%s : %d -> %d\n",p_value_name,-*p_value, *p_value = -*p_value);
    }
}

void MulNum(ValueList *p_values){
    
    ModifyNumber(&p_values->a,"a");
    ModifyNumber(&p_values->b,"b");
    ModifyNumber(&p_values->c,"c");
    
    printf("%d * %d * %d  = %d",
           p_values->a,p_values->b,p_values->c,
           p_values->a*p_values->b*p_values->c);
}

int main(){
    ValueList values;
    scanf("%d %d %d\n",&values.a,&values.b,&values.c);
    MulNum(&values);
    
}

