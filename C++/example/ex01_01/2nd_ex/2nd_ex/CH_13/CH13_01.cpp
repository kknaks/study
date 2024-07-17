#include <stdio.h>
#include <bits/stdc++.h>

class Tipsware
{
protected:
    int m_num;
public:
    Tipsware(){
        m_num = 0;
    }
    
    void SetNumber(int a_num){
        m_num = a_num;
    }
    
    int GetNumber(){
        return m_num;
    }
};

class Tipsoft : public Tipsware{
public:
    void SetNumber(int a_num){
        if (a_num < 50) Tipsware::SetNumber(a_num);
    }
};

int main(){
    Tipsware temp;
    temp.SetNumber(60);
    printf("temp num : %d\n",temp.GetNumber());
    
    Tipsoft data;
    data.SetNumber(60);
    printf("data num : %d\n",data.GetNumber());
    
    data.Tipsware::SetNumber(60);
    printf("data num : %d\n",data.GetNumber());
}
