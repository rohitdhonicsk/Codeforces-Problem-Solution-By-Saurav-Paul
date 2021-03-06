#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vl                    vector<ll>
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld ",&num);
#define dbg(n)                cout<<(n)<<endl;
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll n, c;
    scanf("%lld %lld",&n,&c);
    vec p(n,0),t(n,0);
    for(int i=0; i< n ; i++)
		cin>>p[i];
	for(int i=0; i< n; i++)
		cin>>t[i];
	
    ll limak=0,radewoosh=0,temp=0;
    for(int i=0; i<n; i++){
		temp+=t[i];
		limak+=max((ll)0,p[i]-(c*temp));
	}
	temp=0;
	for(int i=n-1; i>=0; i--){
		temp+=t[i];
		radewoosh+=max((ll)0,p[i]-(c*temp));
	}
	if(limak>radewoosh)
		puts("Limak");
	else if(radewoosh>limak)
		puts("Radewoosh");
	else
		puts("Tie");
    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

void FAST_IO()
{
    // ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
