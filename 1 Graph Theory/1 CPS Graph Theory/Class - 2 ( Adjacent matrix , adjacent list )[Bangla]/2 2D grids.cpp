//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e3;
char adjMat[mx][mx];

int main()
{
    optimize();
    int i,j,k,n,m,t,x,y,z;
    string s;
    cin>>n>>m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>adjMat[i][j];

        }

    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<adjMat[i][j]<<"  ";

        }
        cout<<endl;

    }











    return 0;
}
