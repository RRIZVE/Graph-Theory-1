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

const ll infLL = 9000000000000000000;
const int mx = 1e6 + 123;

vp adj[mx];//vector<pair<ll, ll>>adj[mx]
ll dist[mx];

void dijkstra ( int s, int k , int n)
{
	for ( int i = 0; i <= n; i++ )
	{
		dist[i] = infLL;          /// initilization
	}
	dist[s] = 0;            /// initilizing source distance

	priority_queue < vll, vector<vll>, greater<vll> > pq;
	//priority_queue < pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>> > pq;

	pq.push ( {0, 0, s } );                   // pushing source in queue

	while ( !pq.empty() )
	{
		int stops = pq.top()[0];
		ll curD = pq.top()[1];
		int u = pq.top()[2];
		pq.pop();

		for ( auto v : adj[u] )
		{

			if ( curD + v.ss < dist[v.ff] && (stops <= k) ) // relax operation
			{

				dist[v.ff] = curD + v.ss;
				pq.push ( {stops + 1, dist[v.ff], v.ff } );

			}
		}
	}

}


void solve()
{

	int i, j , n, k, m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n >> m >> k;
	//for ( int i = 0; i <= n; i++ ) adj[i].clear();
	for ( int i = 0; i < m; i++ )
	{
		int u, v, w;
		cin >> u >> v >> w;
		adj[u].pb ( { v, w } );
	}

	dijkstra ( 0, k, n );



	cout << dist[3] << " " ;



	/*

	4 4 1
	0 1 1
	0 2 5
	1 2 1
	2 3 1

	>>6




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