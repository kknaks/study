#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
protected:
    int m_w,m_h;

public:
    Rectangle(){
        m_w = m_h = 1;
    }
    
    void SetSize(int a_w,int a_h){
        m_w = a_w;
        m_h = a_h;
    }
    
    double GetArea(){
        return m_w * m_h;
    }
};

class Ellipse
{
protected:
    int m_w,m_h;

public:
    Ellipse(){
        m_w = m_h = 1;
    }
    
    void SetSize(int a_w,int a_h){
        m_w = a_w;
        m_h = a_h;
    }
    
    double GetArea(){
        return 3.14 * m_w * m_h;
    }
};

int main(){
    Rectangle r;
    r.SetSize(60, 80);
    
    Ellipse e;
    e.SetSize(60, 80);
    
    cout << "Rectangle : " << r.GetArea() << "\nEllipse : " << e.GetArea() << '\n';
}
