#include <stdio.h>

class Person{
private:
    int m_age=1;
public:
    Person(){
        m_age = 1;
    }
    Person(int a_age){
        SetAge(a_age);
    }
    int SetAge(int a_age){
        if(a_age <= 120 && a_age>=0) m_age = a_age;
        else{
            printf("worng age!\n");
            return 0;
        }
        return 1;
    }
    int GetAge(){
        return m_age;
    }
};

int main(){
    Person person;
    person.SetAge(32);
    int age = person.GetAge();
    printf("%d\n",age);
}
