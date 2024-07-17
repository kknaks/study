#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s; // 18 = 0b10010
    int index;

    // idx번째 비트끄기
    // s &= (~(1<<idx))
    cout << "1. idx번째 비트 끄기 : ";
    s = 18;               // 18 = 0b10010
    index = 1;            //  &   0b11101
    s &= (~(1 << index)); // ------------
    cout << s << '\n';    // 16 = 0b10000

    // idx번째가 켜져있으면 끄고, 꺼져있으면 키기
    // s ^= (1<<idx)
    cout << "2. idx번째 비트 xor : ";
    s = 18;            // 18 = 0b10010
    index = 1;         // xor  0b00010
    s ^= (1 << index); // ------------
    cout << s << '\n'; // 16 = 0b10000

    // 최하위 켜져있는 비트 찾기
    cout << "3. 최하위 켜진 비트는 : ";
    s = 18;               // 18 = 0b10010
    index = s & (~s + 1); //  &   0b01110
    // -18 = ~s+1(2의보수)       // ------------
    cout << index << '\n'; // idx = 0b00010

    // 크기가 n인 모든 비트 켜기
    cout << "4. 크기n 모든비트켜기 : ";
    int n = 5;
    s = (1 << n) - 1;  //  s = 0b11111
    cout << s << '\n'; // 31 = 0b11111

    // idx번째 비트 켜기
    cout << "5. idx번째 비트 켜기 : ";
    s = 16;            // 18 = 0b10000
    index = 1;         //  or  0b00010
    s |= (1 << index); // ------------
    cout << s << '\n'; // 18 = 0b10010

    // idx번째 비트 확인
    cout << "6. idx번째 비트 확인 : ";
    s = 18;                    // 18 = 0b10010
    index = 1;                 //  or  0b00010
    bool t = s & (1 << index); // ------------
    cout << t;                 // 18 = 0b10010
    if (t)
        cout << ", true" << '\n';