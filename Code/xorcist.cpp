#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
#define pb push_back
#define f first
#define s second
#define fr(i, n) for(int i = 0; i < n; i++)
#define frr(i, n) for(int i = 1; i<= n; i++)
#define MOD 1000000007
const int MAX = 2123;
ll u, v;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> u >> v;

	if(u%2 != v%2 || u > v){
		cout << -1 << endl;
	}
	else{
		if(u == v){
			if(u) cout << 1 << endl;
			cout << u << endl;
		}
		else{
			ll dif = v-u;
			dif /= 2;
			if(dif&u){
				cout << 3 << endl;
				cout << u << " " << dif << " " << dif << endl;
			}
			else{
				cout << 2 << endl;
				cout << u + dif << " " << dif << endl;
			}
		}
	}
}