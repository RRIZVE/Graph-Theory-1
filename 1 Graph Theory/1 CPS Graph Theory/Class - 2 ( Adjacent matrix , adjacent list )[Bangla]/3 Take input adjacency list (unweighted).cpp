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
vector<int>adj[mx];



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0, u, v;
	string s;
	cin >> n >> m; //n==node    m==edges
	for (i = 1; i <= m; i++)
	{
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);

	}
	for (i = 1; i <= n; i++)
	{
		cout << "Adjacent list of  " << i << "  :  ";

		for (auto u : adj[i])
		{
			cout << u << "  ";

		}
		cout << endl;

	}

	/*

	4 3
	1 2
	2 3
	2 4


	Adjacent list of  1  :  2
	Adjacent list of  2  :  1  3  4
	Adjacent list of  3  :  2
	Adjacent list of  4  :  2

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