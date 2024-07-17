#include <bits/stdc++.h>
using namespace std;

const int max_n = 40;
bool che[max_n+1];

vector<int> era(int mx_n) {
    vector<int> v;
    for (int i = 2; i <= max_n; i++){
        if(che[i]) continue;
        for (int j = 2*i; j <= mx_n; j += i){
            che[j] = 1;
        }
    }
    for(int i = 2; i <= mx_n; i++) if (che[i] == 0)v.push_back(i);
    return v;
}

bool check_prime(int n){
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i*i <= n; i++){
        if (n % i == 0) return 0;
    }
    return 1;
}

int main(){
    vector<int> a = era(max_n);
    for (int i : a) cout << i << " ";
    cout << '\n';
    int number = 11 ;
    cout << "num is prime? " << check_prime(number) << '\n';
}