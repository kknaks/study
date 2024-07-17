#include <bits/stdc++.h>
using namespace std;
#define Max_op_count 4

class Operator
{
private:
    int(Operator::*mp_func[Max_op_count])(int,int) = {&Operator::Add,&Operator::Sub,&Operator::Mul,&Operator::Div};
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
    
    int ExecFunc(int a_idx,int a, int b){
        return (this->*mp_func[a_idx])(a,b);
    }
    
    int (Operator::**GetFunc())(int,int){
        return mp_func;
    }
};

int main(){
    Operator ops;
    
    int a = 7, b = 2;
    cout << "7 & 2 op result\n";
    
    for (int i =0; i < Max_op_count; i++){
        cout << ops.GetOpName(i) << " : " << (ops.ExecFunc(i, a, b)) << '\n';
    }
    
    for (int i =0; i < Max_op_count; i++){
        cout << ops.GetOpName(i) << " : " << (ops.**(ops.GetFunc()+i))(a,b) << '\n';
    }
    return 0;
}
