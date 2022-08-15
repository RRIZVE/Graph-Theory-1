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

const int mx = 150;


bool vis[mx][mx];

int  c = 0;
int dx[10] = { -1, -1, -1, 0, 0, 1, 1, 1};
int dy[10] = { -1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int u, int v, int n, int m, string s[])
{
	vis[u][v] =  1;


	for ( int i = 0; i < 8 ; i++)
	{
		int x = u;
		int y = v;

		int x1 = x + dx[i];
		int y1 = y + dy[i];

		if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && s[x1][y1] == 'W' && vis[x1][y1] == 0)
		{
			c++;

			vis[x1][y1] =  1;
			dfs(x1, y1, n, m , s);

		}


	}




	return;
}



void solve()
{
	int t;
	string ch;
	cin >> t;
	cin.ignore();
	getline(cin, ch);
	while (t--)
	{
		string s[1000], ns;
		int n = 0, m;
		n = 0;
		while (getline(cin, ns))
		{
			if (ns.size() == 0)
				break;
			if (!isdigit(ns[0]))
			{
				s[n++] = ns;
				m = ns.size();
			}
			else
			{
				int i = 0, j = 0, k = 0;
				while (isdigit(ns[k]))
				{
					i = i * 10 + (ns[k] - 48);
					k++;
				}
				k++;
				while (isdigit(ns[k]))
				{
					j = j * 10 + (ns[k] - 48);
					k++;
				}

				memset(vis, 0, sizeof(vis));
				c = 0;



				dfs(i - 1 , j - 1 , n, m , s);
				cout << c + 1 << endl;
			}
		}
		if (t) cout << endl;
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