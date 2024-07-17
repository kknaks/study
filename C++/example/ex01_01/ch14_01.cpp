#include <stdio.h>

class Figure
{
protected:
    int m_width,m_length;
public:
    void GetSize(int width, int length){
        m_width = width;
        m_length = length;
    }
    
    double GetArea(){
        return 0.0;
    }
};

class Rectangle : public Figure
{
public:
    double GetArea(){
        return m_width * m_length;
    }
};

class Ellipse : public Figure
{
public:
    double GetArea(){
        return 3.14159*m_width * m_length*0.25;
    }
};

class Triangle : public Figure
{
public:
    double GetArea(){
        return m_width * m_length*0.5;
    }
};

int main(){
    Rectangle r[2];
    Ellipse e[3];
    Triangle t[4];
    
    r[0].GetSize(10,20);
    r[1].GetSize(20,20);
    e[0].GetSize(10,20);
    e[1].GetSize(20,20);
    e[2].GetSize(30,20);
    t[0].GetSize(10,20);
    t[1].GetSize(20,20);
    t[2].GetSize(30,20);
    t[3].GetSize(40,20);
    
    for (int i = 0; i < 2; i++) printf("%g\n",r[i].GetArea());
    for (int i = 0; i < 3; i++) printf("%g\n",e[i].GetArea());
    for (int i = 0; i < 4; i++) printf("%g\n",t[i].GetArea());
}
