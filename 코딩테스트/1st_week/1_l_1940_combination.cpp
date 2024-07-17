// 다른풀이
// #include <bits/stdc++.h>
// using namespace std;

// int a[15004], n = 6, m = 9, cnt;

// int main(){
//     cin >> n >> m;
//     for (int i = 0; i < n; i++){
//         cin >> a[i];
//     }

//     sort(a,a+n);

//     int start = 0, end = n-1;
//     while (start < end){
//         int sum = a[start] + a[end];
//         if (sum == m){
//             start +=1;
//             end -= 1;
//             cnt +=1;
//             sum = 0;
//         }
//         else if (sum > m) end -=1;
//         else start += 1;
//     }
//     cout << cnt;
//     return 0;
// }

// 재귀combibnation
// #include <bits/stdc++.h>
// using namespace std;

// int n, r = 2, a[15004],cnt,m;

// void combi(int start, vector<int> v){
//     if(v.size() == r){
//         if (accumulate(v.begin(),v.end(),0) == m) cnt++;
//         return;
//     }

//     for (int i = start+1; i < n; i++){
//         v.push_back(a[i]);
//         combi(i,v);
//         v.pop_back();
//     }
//     return;
// }

// int main(){
//     cin >> n >> m;
//     for (int i = 0; i < n; i++) cin>> a[i];

//     vector<int> v;
//     combi(-1,v);
//     cout << cnt;
//     return 0;
// }

// 이중for문 combibnation
#include<bits/stdc++.h> 
using namespace std;     
int n, m, a[15001], cnt;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> m; 
	for(int i = 0; i < n; i++) cin >> a[i];  
	//이 if문은 없어도됨. but, 설명을 위해.
	if(m > 200000) cout << 0 << "\n";
	else{
		for(int i = 0; i < n; i++){
			for(int j = i + 1; j < n; j++){
				if(a[i] + a[j] == m)cnt++;
			}
		}
		cout << cnt << "\n";
	} 
}