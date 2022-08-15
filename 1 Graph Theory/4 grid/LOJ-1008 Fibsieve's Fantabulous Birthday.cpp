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



void solve()
{
	int t, tc = 0;
	cin >> t;
	while (t--)
	{
		tc++;
		cout << "Case " << tc << ": ";


		ll i, j, k , n, m, x, y, z1, z2, c = 0, cnt = 0, z;
		ll xx, yy, zz, qq, ww;
		ll need;
		cin >> n;
		ll l = 1;
		ll r = 1e9 ;
		while (1)
		{
			if (l > r)
				break;
			ll mid = (l + r) / 2;
			x = mid * mid;
			if (x >= n)
			{
				need = mid;
				r = mid - 1;
			}
			else
			{
				l = mid + 1;
			}
		}
		z2 = need * need;
		x = need - 1;
		z1 = (x * x) + 1;

		//cout << z1 << " " << z2 << endl;

		cnt = sqrt(z2);

		z = (z2 - z1) / 2;
		ll mid = z1 + z;

		//cout << mid << " " << cnt << endl;



		if (mid <= n)
		{
			//cout << "YES" << endl;
			x = cnt;
		}
		else
		{
			//cout << "NO" << endl;

			//cout << "  " << n << endl;
			xx =  abs(n - mid);
			//cout << xx << endl;
			x = cnt - xx;
		}
		//cout << x << endl;

		if (n <= mid)
		{
			//cout << "YES" << endl;
			y = cnt;
		}
		else
		{
			//cout << "NO" << endl;
			yy = abs(n - mid);
			y = cnt - yy;

		}
		//cout << y << endl;
		if (cnt % 2 == 1)
		{
			swap(x, y);
		}

		cout << x << " " << y << endl;
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