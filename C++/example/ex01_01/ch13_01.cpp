#include <stdio.h>

class Tipssware
{
protected:
    int m_num;

public:
    Tipssware(){
        m_num = 0 ;
    }
    
    void SetNum(int num){
        m_num = num;
    }
    
    int GetNum(){
        return m_num;
    }
};

class Tipssoft : public Tipssware
{
public:
    void SetNum(int num){
        if (num < 50) Tipssware::SetNum(num);
        else m_num = 50;
    }
};

int main(){
    Tipssware origin;
    Tipssoft test;
    test.SetNum(320);
    printf("%d\n",origin.GetNum());
    printf("%d\n",test.Tipssware::GetNum());
    printf("%d\n",test.Tipssoft::GetNum());

    
    
}
