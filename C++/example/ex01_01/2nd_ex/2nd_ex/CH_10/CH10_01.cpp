#include <stdio.h>

class Person
{
private:
    int m_age;
public:
    Person(){
        m_age = 0;
    }
    
    int SetAge(int a_age){
        if (a_age >= 0 && a_age <= 100){
            m_age = a_age;
        }
        else{
            printf("worng input!!");
            return 0;
        }
        return 1;
    }
    
    int GetAge(){
        return m_age;
    }
};

int main(){
    Person nak;
    nak.SetAge(32);
    printf("age : %d\n",nak.GetAge());
}
