// static 멤버 함수 예제
#include <stdio.h>

class MyData
{
protected:
    int m_data1, m_data2;
    int m_value1, m_value2;
    
public:
    MyData()
    {
        m_data1 = m_data2 = 0;
        m_value1 = m_value2 = 0;
    }
    
    static void Swap(int *ap_a, int *ap_b)
    {
        int temp = *ap_a;
        *ap_a = *ap_b;
        *ap_b = temp;
    }
    
    void DataSwap(){
        Swap(&m_data1, &m_data2);
    }
    
    void ValueSwap(){
        Swap(&m_value1, &m_value2);
    }
    
    void SetData(int a_data1, int a_data2)
    {
        m_data1 = a_data1;
        m_data2 = a_data2;
    }
    
    void SetValue(int a_value1, int a_value2)
    {
        m_value1 = a_value1;
        m_value2 = a_value2;
    }
    
    void PrintData(){
        printf("data1 : %d, data2 : %d\n",m_data1,m_data2);
    }
    
    void PrintValue(){
        printf("value1 : %d, value2 : %d\n",m_value1,m_value2);
    }
};

int main(){
    MyData temp;
    temp.SetData(5, 3);
    temp.PrintData();
    temp.DataSwap();
    temp.PrintData();
    
    temp.SetValue(1, 6);
    temp.PrintValue();
    temp.ValueSwap();
    temp.PrintValue();
    
    int a = 10, b = 7;
    printf("a : %d, b : %d\n",a,b);
    MyData::Swap(&a,&b);
    printf("a : %d, b : %d\n",a,b);
}
