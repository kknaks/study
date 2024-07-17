#include <bits/stdc++.h>
using namespace std;
#define Max_op_count 4

class Operator
{
private:
    char m_op_table[Max_op_count] = {'+','-','*','/'};
public:
    char GetOpName(int a_idx){
        return m_op_table[a_idx];
    }
    
    int Add(int a, int b){
        return a + b;
    }
    int Sub(int a, int b){
        return a - b;
    }
    int Mul(int a, int b){
        return a * b;
    }
    int Div(int a, int b){
        return b? a / b: 0;
    }
};

int main(){
    Operator ops;
    
    int a = 7, b = 2;
    cout << "7 & 2 op result\n";
    
    cout << ops.GetOpName(0) << " : " << ops.Add(a,b) << '\n';
    cout << ops.GetOpName(1) << " : " << ops.Sub(a,b) << '\n';
    cout << ops.GetOpName(2) << " : " << ops.Mul(a,b) << '\n';
    cout << ops.GetOpName(3) << " : " << ops.Div(a,b) << '\n';
    return 0;
}
