#include <bits/stdc++.h>
using namespace std;
struct ValueList
{
    int a, b, c;
};

void Modify(int *p_value, const char* p_value_name){
    if(*p_value < 0){
        printf("modify %d -> %d \n",-*p_value, *p_value= -*p_value);
    }
}

void MultiplyValue(struct ValueList *ap_value){
    
    Modify(&ap_value->a,"a");
    Modify(&ap_value->b,"b");
    Modify(&ap_value->c,"c");
    
    printf("%d * %d * %d = %d\n",ap_value->a,ap_value->b,ap_value->c, ap_value->a*ap_value->b*ap_value->c);
}

int main(){
    struct ValueList values;
    scanf("%d %d %d",&values.a,&values.b,&values.c);
    MultiplyValue(&values);
}
