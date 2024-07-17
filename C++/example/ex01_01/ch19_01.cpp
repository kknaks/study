#include <iostream>
using namespace std;

class UserData
{
protected:
    int m_data_size;
    char *mp_data;
public:
    UserData(){
        m_data_size = 0;
        mp_data = NULL;
    }
    ~UserData(){
        if (mp_data) delete[] mp_data;
    }
    void SetData(void *ap_data,int a_data_size){
        if (mp_data) delete[] mp_data;
        if (ap_data && a_data_size){
            mp_data = new char[a_data_size];
            memcpy(mp_data,ap_data,a_data_size);
            m_data_size = a_data_size;
        }else{
            m_data_size = 0;
            mp_data = NULL;
        }
    }
//    operator int(){
//        return *(int*)mp_data;
//    }
    void *GetData(){
        return mp_data;
    }
};

int main(){
    UserData temp;
    int a = 5;
    temp.SetData(&a,sizeof(int));
    cout << temp.GetData();
}
