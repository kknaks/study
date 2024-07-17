#include <stdio.h>

class Tipsware{
private:
    int m_number ;

public:
    Tipsware(){
        m_number = 0 ;
    }
    
    void SetNumber(int num){
        m_number = num;
    }
    
    int GetNumber(){
        return m_number;
    }
};

class TipSoft : public Tipsware
{
public:
    void PrintNumber(){
        printf("%d\n",GetNumber());
    }
};

int main(){
    TipSoft test;
    test.SetNumber(31);
    test.PrintNumber();
}
