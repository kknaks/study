#include <bits/stdc++.h>
using namespace std;

void sequence_sum(int start, int count, int gap){
    int end = start + (count-1) * gap;
    int ret = count * (start + end) /2 ;
    cout<< "ret : " << ret << '\n';
}
void sequence_mul(int start, int count, int gap){
    int ret = start * ((int)pow(gap,count)-1)/ (gap -1);
    cout<< "ret : " << ret << '\n';
}

void sequence_v(int start, int count, int gap){
    vector<int> v;
    for (int i = 0; i < count; i++){
        v.push_back(start);
        start *= gap;
    }

    for (int i = 0; i < count; i++){
        cout << v[i] << " ";
    }
    cout << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    sequence_sum(3,5,5);
    sequence_sum(1,5,1);
    sequence_mul(1,4,2);
    sequence_v(1,4,2);
}