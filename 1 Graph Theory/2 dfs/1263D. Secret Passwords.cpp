//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

const int mx = 1e6;
int a[mx];
vector<int> adj[mx];
bool vis[mx];

void dfs(int u)
{
	vis[u] = 1;

	for ( auto v : adj[u])
	{
		if (vis[v] == 0)
		{
			dfs(v);
		}

	}
	return;


}


void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n;
	for ( i = 1; i <= n ; i++)
	{
		cin >> s;

		sort(s.begin(), s.end());

		int Sz = unique(s.begin(), s.end()) - s.begin();


		int len = s.size();


		if (len == 1)
		{
			adj[s[0] - 'a'].pb(s[0] - 'a');
		}
		else
		{
			for ( j = 1; j < len ; j++)
			{
				x = s[j] - 'a';
				y = s[j - 1] - 'a';
				adj[x].pb(y);
				adj[y].pb(x);

			}
		}


	}
	for ( i = 0; i < 26 ; i++)
	{
		if (vis[i] == 0 && adj[i].size() >= 1)
		{
			dfs(i);
			cnt++;
		}

	}
	cout << cnt << endl;






















}



int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}