#include <bits/stdc++.h>
using namespace std;

struct Tipsware
{
    int count;
    int *p;
};

int main(){
    Tipsware data ={5,0}, temp={5,0};
    
    data.p = new int[data.count];
    cout << "data : ";
    for (int i = 0; i < data.count; i++){
        *(data.p + i) = i + 10;
        cout << *(data.p+i) << " ";
    }
    cout << endl;
    
    temp. p = new int[temp.count];
    cout << "temp : ";
    for (int i = 0; i < temp.count; i++){
        *(temp.p+i) = 20 + i;
        cout << *(temp.p+i) << " ";
    }
    cout << endl;
    
    if (data.p) delete[] data.p;
    if (temp.p) delete[] temp.p;
    
}
