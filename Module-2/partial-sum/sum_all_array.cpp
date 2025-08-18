// #include<bits/stdc++.h>
// using namespace std;
// int main ()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for (int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int sum=0;
//     for (int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     cout<<sum<<endl;
//     return 0;
// }
/* Author: Code__R
   Email: mondalroudra212@gmail.com
   Date  : 08 / 18 / 2025
   Time  : 07:47
   Problem Link: 
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define YES cout << 'YES\n'
#define Yes cout << 'Yes\n'
#define NO cout << 'NO\n'
#define No cout << 'No\n'
#define ld long double
#define pb push_back
#define po pop_back
#define all(v) v.begin(), v.end()
#define pii pair<int,int>
#define pll pair<<ll ,ll>

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    // code here 
    int n;
    cin>>n;
    int sum =0;
    vector<int>arr(n);
    for (int i=0;i<n;i++){
        cin>>arr[i];
        sum+= arr[i];
    }
    cout<<sum<<nl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}