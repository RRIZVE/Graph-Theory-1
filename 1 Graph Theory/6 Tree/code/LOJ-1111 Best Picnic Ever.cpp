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

const int mx = 1010;
int a[mx];
int lev[mx];
vector<int> adj[mx];
map<ll, ll>mp;



void bfs(int s)
{
	memset(lev, -1, sizeof(lev));

	lev[s] = 0;

	queue<int>q;

	q.push(s);

	mp[s]++;

	while (!q.empty())
	{
		int u = q.front();     // first element
		q.pop();               //  first element delete

		for ( auto v : adj[u])
		{
			if (lev[v] == -1)
			{
				mp[v]++;
				lev[v] = lev[u] + 1;
				q.push(v);
			}



		}


	}


}


void solve()
{
	int t, tc = 0;
	cin >> t;
	while (t--)
	{

		tc++;
		cout << "Case " << tc << ": ";

		for ( int i = 0; i < mx; i++ )
		{
			mp[i] = 0;
			adj[i].clear();
		}

		int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
		string s;

		cin >> k >> n >> m;

		for ( i = 1; i <= k ; i++)
		{
			cin >> a[i];

		}
		for ( int i = 1; i <= m; i++ )
		{
			int u, v;
			cin >> u >> v;
			adj[u].push_back ( v );
		}

		for ( i = 1; i <= k ; i++)
		{
			//cout << a[i] << " ";

			bfs(a[i]);
			//cout << endl << endl;

		}
		//cout << endl;
		//cout << endl;
		for ( auto u : mp)
		{
			//cout << u.ff << " " << u.ss << endl;
			if (u.ss == k)
			{
				cnt++;
			}

		}
		cout << cnt << endl;
























	}

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