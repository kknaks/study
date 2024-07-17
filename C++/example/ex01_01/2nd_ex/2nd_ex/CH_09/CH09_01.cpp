#include <stdio.h>

class MyABS
{
private:
    int m_num;
public:
    MyABS(){
        m_num = 0;
    }
    MyABS(int a_num){
        m_num = a_num;
    }
    int operator+(int a_num){
        if (a_num < 0) a_num = -a_num;
        return m_num + a_num;
    }
};

int main(){
    MyABS a(5);
    int b = -7;
    int sum = a + b;
    printf("%d + %d = %d\n",*(int*)&a,-b,sum);
}
