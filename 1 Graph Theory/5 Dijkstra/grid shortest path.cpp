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

int dx[] = { 0, 0, +1, -1, -1  + 1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };
//O(n2*log(n))


void solve()
{
	int n;
	cin >> n;

	long long dist[n][n];
	long long grid[n][n];
	for ( int i = 0; i < n; i++ )
	{
		for ( int j = 0; j < n; j++ )
		{
			cin >> grid[i][j];
			dist[i][j] = 1e18;
		}
	}

	priority_queue< pair<long long, pair<int, int> >, vector<pair<long long, pair<int, int> >>, greater<pair<long long, pair<int, int> >> > pq;

	dist[0][0] = grid[0][0];
	pq.push ( { grid[0][0], {0, 0} } );

	while ( !pq.empty() )
	{
		pair<int, int> u = pq.top().second;
		long long curD = pq.top().first;
		pq.pop();

		int x = u.first;
		int y = u.second;

		if ( dist[x][y] < curD ) continue;

		for ( int i = 0; i < 4; i++ )
		{
			int x1 = x + dx[i];
			int y1 = y + dy[i];

			if ( x1 >= 0 && x1 < n && y1 >= 0 && y1 < n && curD + grid[x1][y1] < dist[x1][y1] )
			{
				dist[x1][y1] = curD + grid[x1][y1];
				pq.push ( { dist[x1][y1], { x1, y1 } } );
			}

		}

	}
	cout << dist[n - 1][n - 1] << endl;

	/*
	source(0,0);
	destination(n-1,n-1);
	9 4 9 9
	6 7 6 4
	8 3 3 7
	7 4 9 10
	The minimum cost is-
	9 + 4 + 7 + 3 + 3 + 7 + 10 = 43.

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