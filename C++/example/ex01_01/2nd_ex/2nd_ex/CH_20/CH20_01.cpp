#include <bits/stdc++.h>
using namespace std;

class MyValues
{
protected:
    int m_num;
public:
    MyValues(){
        m_num = 0;
    }
    MyValues(int a_num){
        m_num = a_num;
    }
    
    void SetValue(int a_num){
        m_num = a_num;
    }
    
    int GetValue(){
        return m_num;
    }
};

class AbsValuse : public MyValues
{
public:
    AbsValuse() : MyValues()
    {
        
    }
    AbsValuse(int a_num) : MyValues(a_num)
    {
        if (m_num < 0) m_num = -m_num;
    }
    
    void SetValue(int a_num){
        if (a_num < 0) a_num = -a_num;
        MyValues::SetValue(a_num);
    }
        
};

int main(){
    AbsValuse temp(-3);
    cout << temp.GetValue()<<endl;
    AbsValuse data;
    data.MyValues::SetValue(-10);
    cout << data.GetValue()<<endl;
    
}
