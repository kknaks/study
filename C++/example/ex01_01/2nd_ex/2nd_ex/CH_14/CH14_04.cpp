#include <bits/stdc++.h>
using namespace std;

class Figure
{
protected:
    int m_w,m_h;
    
public:
    Figure(){
        m_w = m_h = 1;
    }
    
    void SetSize(int a_w,int a_h){
        m_w = a_w;
        m_h = a_h;
    }
    
   virtual double GetArea(){
        return 0.0;
    }
};
    
class Rectangle : public Figure
{
public:
    double GetArea(){
        return m_w * m_h;
    }
};

int main(){
    Rectangle r;
    Figure *p_r = &r;
    p_r -> SetSize(60, 80);
    printf("size : %g(r), %g(p_r)\n",r.GetArea(),p_r->GetArea());
    
    
}
