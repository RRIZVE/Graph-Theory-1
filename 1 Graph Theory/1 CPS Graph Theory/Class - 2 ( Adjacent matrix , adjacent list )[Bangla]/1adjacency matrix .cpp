//In the Name of Allah
#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

typedef long long ll;

const int mx=1e3;
int adjMat[mx][mx];

int main()
{
    optimize();
    int i,j,k,n,t,x,y,z;
    string s;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>adjMat[i][j];

        }

    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<adjMat[i][j]<<"  ";

        }
        cout<<endl;

    }











    return 0;
}
