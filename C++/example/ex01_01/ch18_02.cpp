#include <iostream>
using namespace std;

class Tipsware
{
protected:
    int m_count;
    int *mp_data;
public:
    Tipsware(){
        m_count = 0;
        mp_data = NULL;
    }
    Tipsware(int a_count){
        m_count = a_count;
        mp_data = new int[a_count];
    }
    
    Tipsware(Tipsware &ar_object){
        mp_data = NULL;
        operator=(ar_object);
    }
    ~Tipsware(){
        if (mp_data) delete[] mp_data;
    }
    void SetData(int a_start_value){
        if (mp_data) for (int i = 0; i < m_count; i++) *(mp_data+i) = a_start_value + i;
    }
    
    void operator=(Tipsware &ar_object){
        if (mp_data) delete[] mp_data;
        if (ar_object.mp_data){
            m_count = ar_object.m_count;
            mp_data = new int[m_count];
//            for (int i = 0; i < m_count; i++) *(mp_data+i) = *(ar_object.mp_data+i);
            memcpy(mp_data,ar_object.mp_data,sizeof(m_count)*m_count);
        }else mp_data = NULL;
        
    }
    
    void ShowData(){
        for (int i = 0; i < m_count; i++) cout<< *(mp_data+i) << " ";
        cout<< "\n";
    }
};

int main(){
    Tipsware b(5);
    b.SetData(20);
    cout << "b : ";
    b.ShowData();
    
    Tipsware a = b;
    cout << "a : ";
    a.ShowData();
    a.SetData(10);
    cout << "a : ";
    a.ShowData();
    
    cout << "b : ";
    b.ShowData();
}
