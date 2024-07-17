#include <bits/stdc++.h>
using namespace std;

void ModifyNumber(int *p_value, const char* p_value_name){
    if(*p_value<0){
        printf("%s : %d -> %d\n",p_value_name,-*p_value, *p_value = -*p_value);
    }
}
struct ValueList{
    int a,b,c;
    
    //void MulNum(struct ValueList *p_values)
    void MulNum(){
        
        //ModifyNumber(&p_values->a,"a");
        //ModifyNumber(&p_values->b,"b");
        //ModifyNumber(&p_values->c,"c");
        
        //&p_values가 MulNum에 매개변수를 *const this로 변환
        //ModifyNumber(&this->a,"a");
        //ModifyNumber(&this->b,"b");
        //ModifyNumber(&this->c,"c");
        
        //this 생략가능
        ModifyNumber(&a,"a");
        ModifyNumber(&b,"b");
        ModifyNumber(&c,"c");
        
        printf("%d * %d * %d  = %d",
               //p_values->a,p_values->b,p_values->c,
               //p_values->a*p_values->b*p_values->c);
               //&p_values가 MulNum에 매개변수를 *const this로 변환
               //this->a,this->b,this->c,this->a*this->b*this->c);
               a,b,c,a*b*c);
    }
};

int main(){
    ValueList values;
    scanf("%d %d %d\n",&values.a,&values.b,&values.c);
    //values.MulNum(&values);
    values.MulNum();
    return 0;
}

