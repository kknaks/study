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
    
    double GetArea(){
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
    Rectangle r1;
    r1.SetSize(60, 80);
    
    Ellipse e1;
    e1.SetSize(60, 80);
    
    cout << "Rectangle : " << r1.GetArea() << "\nEllipse : " << e1.GetArea() << '\n';
    cout << " ------\n";
    Rectangle r[2];
    r[0].SetSize(60,80);
    r[1].SetSize(70,90);
    
    Ellipse e[3];
    e[0].SetSize(60,80);
    e[1].SetSize(70,90);
    e[2].SetSize(80, 100);
    
    Triangle t[4];
    t[0].SetSize(60,80);
    t[1].SetSize(70,90);
    t[2].SetSize(80, 100);
    t[3].SetSize(90, 110);
    
    for (int i = 0; i < 2; i++) printf("r%d : %g \n",i,r[i].GetArea());
    for (int i = 0; i < 3; i++) printf("e%d : %g \n",i,e[i].GetArea());
    for (int i = 0; i < 4; i++) printf("t%d : %g \n",i,t[i].GetArea());
}
