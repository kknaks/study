#include <bits/stdc++.h>
using namespace std;

struct Point{
    int y,x;
    Point(int y, int x) : y(y),x(x){}
    Point(){y = -1; x = -1; }
    bool operator< (const Point &a) const{
        return x > a.x;
    }
};

priority_queue<Point> pq;
int main(){
    for (int i = 1 ; i <= 6; i++) pq.push({i,i});
    cout << pq.top().x << '\n';
    return 0;
}