// static 멤버 변수 사용

#include <stdio.h>
class Tipsware
{
private:
    static int m_object_count;
public:
    Tipsware()
    {
        printf("Tispware로 만들어진 객체의 개수 : %d\n",++m_object_count);
    }
    
    ~Tipsware()
    {
        printf("Tispware로 만들어진 객체의 개수 : %d\n",--m_object_count);
    }
    
    void SubObjectCount(int a_count)
    {
        m_object_count = a_count;
    }
    
    static int GetObjectCount()
    {
        return m_object_count;
    }
};

int Tipsware::m_object_count = 0;
int main(){
    printf("Tispware로 만들어진 객체의 개수 : %d\n", Tipsware::GetObjectCount());
    Tipsware temp1,temp2;
    Tipsware temp3;
    Tipsware *p = new Tipsware;
    delete p;
    return 0;
}
