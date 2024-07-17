#include <bits/stdc++.h>
using namespace std;

class Tipsware
{
protected:
    int m_clone;
    int m_count;
    int *mp_data;
    
public:
    Tipsware(){
        m_clone = 0;
        m_count = 0;
        mp_data = NULL;
    }
    
    Tipsware(int a_count){
        m_clone = 0;
        m_count = a_count;
        mp_data = new int[m_count];
    }
    
    ~Tipsware(){
        if(mp_data && !m_clone) delete[] mp_data;
    }
    
    void SetData(int a_start_value){
        if (mp_data){
            for (int i = 0; i < m_count; i++) *(mp_data+i) = a_start_value + i;
        }
    }
    void SetClone(){
        m_clone = 1;
    }
    
    void ShowData(){
        if (mp_data) {
            for (int i = 0; i < m_count; i++) cout << *(mp_data+i) << " ";
            cout << '\n';
        }
    }
};


int main(){
    Tipsware a,b(5);
    b.SetData(10);
    b.ShowData();
    
    a = b;
    a.SetClone();
    a.ShowData();
    a.SetData(20);
    a.ShowData();
    b.ShowData();
}
