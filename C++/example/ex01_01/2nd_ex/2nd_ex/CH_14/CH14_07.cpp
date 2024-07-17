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
    
    Figure(int a_w,int a_h){
        SetSize(a_w, a_h);
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
    Rectangle(int a_w, int a_h) : Figure(a_w,a_h){}
    
    double GetArea(){
        return m_w * m_h;
    }
};

class Ellipse : public Figure
{
public:
    Ellipse(int a_w, int a_h) : Figure(a_w,a_h){}

    double GetArea(){
        return 3.14 * m_w/2 * m_h/2;
    }
};

class Triangle : public Figure
{
public:
    Triangle(int a_w, int a_h) : Figure(a_w,a_h){}

    double GetArea(){
        return 0.5 * m_w * m_h;
    }
};

int main(){
    Figure *p_f[9] = {new Rectangle(60,80), new Rectangle(70,90),
                      new Ellipse(60,80), new Ellipse(70,90), new Ellipse(80,90),
                      new Triangle(60,80), new Triangle(70,90), new Triangle(80,90), new Triangle(90,100)};

    
    for (int i = 0; i < 2; i++) printf("r%d : %g \n",i,p_f[i] -> GetArea());
    for (int i = 0; i < 3; i++) printf("e%d : %g \n",i,p_f[i] -> GetArea());
    for (int i = 0; i < 4; i++) printf("t%d : %g \n",i,p_f[i] -> GetArea());
    
    double total_area = 0.0;
    for (int i = 0; i < 9; i++) total_area += p_f[i] -> GetArea();
    for (int i = 0; i < 9; i++) delete p_f[i];
    printf("Total Area : %g \n",total_area);
}
