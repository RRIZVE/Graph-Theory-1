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


const int mx = 1e5 + 123;
vector<int> adj[mx];
int col[mx];
int vis[mx];

bool isBicolor ( int s )
{


	col[s] = 1;
	vis[s] = 1;
	queue<int> q;
	q.push( s );

	while ( !q.empty() )
	{
		int u = q.front();
		q.pop();

		int curCol;
		if ( col[u] == 1 ) curCol = 2;
		else curCol = 1;

		for ( auto v : adj[u] )
		{
			if ( col[v] == -1 )
			{
				col[v] = curCol;
				vis[v] = 1;
				q.push( v );
			}
			else if ( col[v] == col[u] ) return 0;
		}
	}

	return 1;
}



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;
	memset(col, -1, sizeof(col));
	cin >> n >> m;
	for ( i = 1; i <= n ; i++)
	{
		vis[i] = -1;

	}
	for ( int i = 1; i <= m; i++ )
	{
		int u, v;
		cin >> u >> v;
		adj[u].pb ( v );
		adj[v].pb ( u );

	}

	for ( i = 1; i <= n ; i++)
	{
		if ( vis[i] == -1 )
		{
			//cout << i << " ";
			if (isBicolor( i ) == 1)
			{
				continue;
			}
			else
			{
				cnt = 1;
				break;
			}

		}



	}
	//cout << endl;

	// for ( i = 1; i <= n ; i++)
	// {
	// 	cout << i << " " << col[i] << endl;

	// }


	if ( cnt == 0 )
	{
		for ( i = 1; i <= n ; i++)
		{
			if (col[i] == 1)
			{
				cout << 1 << " ";
			}
			else
			{
				cout << 2 << " ";
			}
		}
		cout << endl;
	}

	else
		cout << "IMPOSSIBLE" << endl;;





















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