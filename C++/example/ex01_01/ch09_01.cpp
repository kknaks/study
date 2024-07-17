#include <stdio.h>

class MyABS{
private:
    int m_num;
public:
    MyABS(int a_num) {
        m_num = a_num;
    }
    
    int operator+(int a_num){
        if (a_num < 0) {
            a_num = -a_num;
        }
        return m_num + a_num;
    }
};

int main(){
    MyABS my_num(5);
    int b = -5;
    int sum = my_num + b;
    printf("%d + %d = %d\n",my_num, b, sum);
}
