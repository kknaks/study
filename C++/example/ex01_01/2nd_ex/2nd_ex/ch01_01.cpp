#include <stdio.h>

struct ValueList
{
    int a, b, c;
};

void ModifyValue(int *p_num)
{
    if (*p_num < 0) *p_num = -*p_num;
}
void MultiplyValue(ValueList *p_value)
{
    ModifyValue(&p_value->a);
    ModifyValue(&p_value->b);
    ModifyValue(&p_value->c);
    
    printf("%d * %d * %d = %d\n",p_value->a,p_value->b,p_value->c,p_value->a * p_value->b * p_value->c);
}

int main()
{
    ValueList v;
    v = {1,2,3};
    MultiplyValue(&v);
}
