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
const int MAX = 212345;
ll n, m;
ll ans;
ll a[MAX];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> n >> m;
	fr(i, n)
		cin >> a[i];
	
	ans = 1;
	if(n > m){
		cout << 0 << endl;
	}
	else{
		fr(i, n){
			for(int j = i + 1; j < n; j++){
				ans = (ans*abs(a[j] - a[i]))%m;
				/*cout << ans << endl;*/
			}
		}

		cout << ans << endl;
	}

}