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

class Ellipse : public Figure
{
public:
    double GetArea(){
        return 3.14 * m_w/2 * m_h/2;
    }
};

class Triangle : public Figure
{
public:
    double GetArea(){
        return 0.5 * m_w * m_h;
    }
};

int main(){
    Rectangle r[2];
    Ellipse e[3];
    Triangle t[4];
    Figure *p_f[9] = {r, r+1, e, e+1, e+2, t, t+1, t+2, t+3};
    
    p_f[0] -> SetSize(60,80);
    p_f[1] -> SetSize(70,90);
    
    p_f[0] -> SetSize(60,80);
    p_f[1] -> SetSize(70,90);
    p_f[2] -> SetSize(80, 100);
    
    p_f[0] -> SetSize(60,80);
    p_f[1] -> SetSize(70,90);
    p_f[2] -> SetSize(80, 100);
    p_f[3] -> SetSize(90, 110);
    
    for (int i = 0; i < 2; i++) printf("r%d : %g \n",i,p_f[i] -> GetArea());
    for (int i = 0; i < 3; i++) printf("e%d : %g \n",i,p_f[i] -> GetArea());
    for (int i = 0; i < 4; i++) printf("t%d : %g \n",i,p_f[i] -> GetArea());
    
    double total_area = 0.0;
    for (int i = 0; i < 9; i++) total_area += p_f[i] -> GetArea();
    printf("Total Area : %g \n",total_area);
}
