// 다형성 예제
#include <stdio.h>

class Figure
{
protected:
    int m_width,m_length;
    
public:
    Figure(){
        m_width = m_length = 1;
    }
    Figure(int a_width, int a_length){
        SetSize(a_width, a_length);
    }
    void SetSize(int a_width, int a_length){
        m_width = a_width;
        m_length = a_length;
    }
    
   virtual double GetArea(){
        return 0.0;
    }
};

class Rectangle : public Figure
{
public:
//    Rectangle(int a_width, int a_length) : Figure(a_width,a_length){}
    double GetArea(){
        return m_width * m_length;
    }
};

class Ellipse : public Figure
{
public:
    Ellipse(int a_width, int a_length) : Figure(a_width,a_length){}
    double GetArea(){
        return 3.14159*m_width * m_length*0.25;
    }
};

class Triangle : public Figure
{
public:
    Triangle(int a_width, int a_length) : Figure(a_width,a_length){}
    double GetArea(){
        return m_width * m_length*0.5;
    }
};

#define MaxCount 9
int main()
{ Figure *p_f[MaxCount] = {new Rectangle::Figure(10,20),new Rectangle::Figure(20,20),
                            new Ellipse(10,20), new Ellipse(20,20), new Ellipse(30,20),
                            new Triangle(10,20), new Triangle(20,20), new Triangle(30,20), new Triangle(40,20)};
    for (int i = 0; i < MaxCount; i++) printf("%g\n",p_f[i]->GetArea());
}
//{
//    Rectangle r;
//    Figure *p = &r;
//    
//    p->SetSize(30,20);
//    printf("r.area : %g, p->area : %g\n",r.GetArea(),p->GetArea());
//}
//{
//    Rectangle r[2];
//    Ellipse e[3];
//    Triangle t[4];
//    
//    r[0].GetSize(10,20);
//    r[1].GetSize(20,20);
//    e[0].GetSize(10,20);
//    e[1].GetSize(20,20);
//    e[2].GetSize(30,20);
//    t[0].GetSize(10,20);
//    t[1].GetSize(20,20);
//    t[2].GetSize(30,20);
//    t[3].GetSize(40,20);
//    
//    for (int i = 0; i < 2; i++) printf("%g\n",r[i].GetArea());
//    for (int i = 0; i < 3; i++) printf("%g\n",e[i].GetArea());
//    for (int i = 0; i < 4; i++) printf("%g\n",t[i].GetArea());
//}
