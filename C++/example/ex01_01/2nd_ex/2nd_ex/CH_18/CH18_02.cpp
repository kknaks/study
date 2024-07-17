#include <bits/stdc++.h>
using namespace std;

struct Tipsware
{
    int clone;
    int count;
    int *p;
};

int main(){
    Tipsware data ={0,5,0}, temp={0,};
    
    data.p = new int[data.count];
    cout << "data : ";
    for (int i = 0; i < data.count; i++){
        *(data.p + i) = i + 10;
        cout << *(data.p+i) << " ";
    }
    cout << endl;
    
    temp = data;
    temp.clone = 1;
    cout << "temp : ";
    for (int i = 0; i < temp.count; i++){
        cout << *(temp.p+i) << " ";
        *(temp.p+i) = 20 + i;
    }
    cout << endl;
    cout << "temp : ";
    for (int i = 0; i < temp.count; i++){
        cout << *(temp.p+i) << " ";
    }

    cout << "(change)\n";
    
    if (data.p && !data.clone) delete[] data.p;
    if (temp.p && !temp.clone) delete[] temp.p;
    
}
