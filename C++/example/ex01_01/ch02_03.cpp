#include <bits/stdc++.h>
using namespace std;
struct ValueList{
    int m_a,m_b,m_c;
    
    void MultiplyValue(){
        ModifyValue();
        printf("%d * %d * %d  = %d",m_a,m_b,m_c,m_a * m_b * m_c);
    }
    
    void ModifyValue(){
        if(m_a <0) printf("a: %d -> %d\n",-m_a, m_a = -m_a);
        if(m_b <0) printf("b: %d -> %d\n",-m_b, m_b = -m_b);
        if(m_c <0) printf("c: %d -> %d\n",-m_c, m_c = -m_c);
    }
};
    
int main(){
    ValueList values;
    scanf("%d %d %d",&values.m_a,&values.m_b,&values.m_c);
    values.MultiplyValue();
    return 0;
}
