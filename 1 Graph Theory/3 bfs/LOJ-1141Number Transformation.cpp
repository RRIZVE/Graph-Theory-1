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

const int mx = 1e6;
int a[mx];
int S, T;

const int MX = 1e7 + 123;

int ans[MX];
bitset<MX> is_prime;
vector<int> prime;

void primeGen ( int n )
{
	n += 100;
	for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

	for ( int i = 3; i * i <= n; i += 2 )
	{
		if ( is_prime[i] == 1 )
		{
			for ( int j = i * i; j <= n; j += ( i + i ) )
			{
				is_prime[j] = 0;
			}
		}
	}

	is_prime[2] = 1;
	prime.push_back (2);

	for ( int i = 3; i <= n; i += 2 )
	{
		if ( is_prime[i] == 1 ) prime.push_back ( i );
	}
}

vector<long long int>factorization(long long n)
{
	vector<long long>ret;//ret==return

	for (auto p : prime)
	{
		if (1LL * p * p > n)
			break;
		if (n % p == 0)
		{
			while (n % p == 0)
			{
				ret.push_back(p);
				n = n / p;
			}
		}
	}
	if (n > 1)
		ret.push_back(n);

	return ret;
}

int lev[1010];

int bfs(int s)
{
	memset(lev, -1, sizeof(lev));

	lev[s] = 0;
	queue<int>q;
	q.push(s);


	while (!q.empty())
	{
		int u = q.front();     // first element
		q.pop();

		vector<long long>ret = factorization(u);

		for (int i = 0  ; i < ret.size(); i++)
		{
			if (ret[i] == u)
			{
				continue;
			}
			int to = u + ret[i];
			if (lev[to] == -1)
			{
				lev[to] = lev[u] + 1;

				if (to == T)
				{
					return lev[T];
				}
				q.push(to);
			}


		}


	}
	return lev[T];


}




void solve()
{
	int lim = 1010;
	primeGen ( lim );
	int t, mm = 0;
	cin >> t;
	while (t--)
	{
		mm++;

		int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
		string s;
		cin >> S >> T;
		cout << "Case " << mm << ": ";
		cout << bfs(S) << endl;



















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