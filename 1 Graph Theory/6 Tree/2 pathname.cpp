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
map<int, vector<int>>adj;
map<int, int>lev;
map<int, int>par;

void bfs(int s)
{
	queue<int>q;
	q.push(s);
	lev[s] = 1;

	while (!q.empty())
	{
		int u = q.front(); //first element;
		q.pop();  //first element delete

		for (auto v : adj[u])
		{
			if (lev[v] == 0)
			{
				lev[v] = lev[u] + 1;
				par[v] = u;
				q.push(v);
			}
		}
	}
}

void solve()
{

	int i, j, k, n, x, y, z;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);


	}
	int s, d;
	cin >> s >> d;
	bfs(s);

	if (lev[d] == 0)
	{
		cout << "No route" << endl;

	}

	vector<pair<int, int>>path;

	while (1)
	{
		if (par[d] == 0)
		{
			break;
		}
		path.push_back({par[d], d});
		d = par[d];
	}
	reverse(path.begin(), path.end());

	for (auto u : path)
	{
		cout << u.first << " " << u.second << endl;
	}

	/*
	9
	1 2
	1 3
	1 4
	3 5
	3 6
	4 7
	4 9
	5 8
	6 8
	1 9

	>>
	1 4
	4 9

	*/





















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