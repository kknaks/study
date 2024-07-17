#include <bits/stdc++.h>
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
        mp_data = new int[m_count];
    }
    
    ~Tipsware(){
        if(mp_data) delete[] mp_data;
    }
    
    void SetData(int a_start_value){
        if (mp_data){
            for (int i = 0; i < m_count; i++) *(mp_data+i) = a_start_value + i;
        }
    }
    
    void CopyData(Tipsware *ap_data){
        if (mp_data) delete[] mp_data;
        if (ap_data->mp_data){
            m_count = ap_data->m_count;
            mp_data = new int[m_count];
            memcpy(mp_data,ap_data->mp_data,m_count);
        }else mp_data = NULL;
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
    cout << "b : ";
    b.ShowData();
    
    a.CopyData(&b);
    cout << "a : ";
    a.ShowData();
    a.SetData(20);
    cout << "a : ";
    a.ShowData();
    cout << "b : ";
    b.ShowData();
}
