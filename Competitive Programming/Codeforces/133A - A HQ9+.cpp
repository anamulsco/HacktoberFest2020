//MD. HASNAIN ALI (UNSOLVED)
#include<bits/stdc++.h>
using namespace std;

#pragma GCC             optimize ("Ofast")
#pragma GCC             optimize("O3")
#define ll              long long
#define lo(i,a,n,x)     for(i=a;i<=n;i=i+x)
#define sca(n)          scanf("%lld", &n)
#define pri(n)          printf("%lld", n)
#define gcd(a,b)        __gcd(a,b)
#define SORT(x)         sort(x.begin(), x.end())
#define REV(x)          reverse(x.begin(), x.end())
#define all(x)          x.begin(), x.end()
#define distance(a,b)   (sq(a.x-b.x) + sq(a.y-b.y))
#define end0            "\n"
#define end1            cout<<"\n";
#define pi              acos(-1)
#define mod             1000000007
#define inf             999999999999999999
#define eps             10e-9


bool solve()
{
    int l,i;
    string x;
    cin>>x;
    l=x.length();
    for(i=0;i<l;i++){
        if(x[i]=='H'||x[i]=='Q'||x[i]=='9') return true;
    }
    return false;
}



int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0), cout.tie(0);
	//freopen("test.txt","r",stdin);


    bool p;


    p=solve();
    if(p) cout<<"YES"<<end0;
    else cout<<"NO"<<end0;
    


    return 0;
}
