#include <iostream>

using namespace std;

struct Tipsware
{
    int clone;
    int count;
    int *p;
};

int main(){
    Tipsware a, b ={0,5,0};
//
//    a.p = new int(a.count);
//    
//    cout << "a : ";
//    for (int i = 0; i < a.count; i++){
//        *(a.p+i) = 10 + i;
//        cout << *(a.p+i) << " , ";
//    }
//    cout << endl;
//    
    b.p = new int[b.count];
    cout << "b : ";
    for (int i = 0; i < b.count; i++){
        *(b.p+i) = 20 + i;
        cout << *(b.p+i) << " , ";
    }
    cout << endl;
    
    a = b;
    a.clone = 1;
    cout << "a : ";
    for (int i = 0; i < a.count; i++){
        *(a.p+i) = 10 + i;
        cout << *(a.p+i) << " , ";
    }
    cout << endl;
    
    cout << "b : ";
    for (int i = 0; i < b.count; i++){
        cout << *(b.p+i) << " , ";
    }
    
    if (a.p && !a.clone) delete[] a.p;
    if (b.p && !b.clone) delete[] b.p;
    
}


