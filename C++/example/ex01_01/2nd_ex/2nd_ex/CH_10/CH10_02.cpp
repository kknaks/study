#include <stdio.h>
// 선언부
class Person
{
private:
    int m_age;
public:
    Person();
    int SetAge(int a_age);
    int GetAge();
};

Person::Person(){
            m_age = 0;
        }
// 구현부
int Person::SetAge(int a_age){
            if (a_age >= 0 && a_age <= 100){
                m_age = a_age;
            }
            else{
                printf("worng input!!");
                return 0;
            }
            return 1;
            }

int Person::GetAge(){
            return m_age;
            }
// 호출부
int main(){
    Person nak;
    nak.SetAge(32);
    printf("age : %d\n",nak.GetAge());
}
