#include<bits/stdc++.h>
using namespace std;

#define ll                      long long
#define ld                      long double
#define pb                      push_back
#define endl                    "\n"
#define all(x)                  x.begin(), x.end()
#define rall(x)                 x.rbegin(), x.rend()
#define prec(n)                 fixed << setprecision(n)
#define w(x)                    while(x--)
#define fast                    cin.tie(0); std::ios_base::sync_with_stdio(false); 
#define fra(x)                  for (auto &i : x)
#define fri(it, x)              for (auto it = x.begin(); it != x.end(); ++it)
#define frri(it, x)             for (auto it = x.end(); it != x.begin(); --it)
#define lp(y)                   for (ll i = 0; i < (ll)y; ++i)
#define fr(i, x)                for (ll i = (ll)x; ; ++i)
#define fr1(i, x, y)            for (ll i = (ll)x; (ll)i <= (ll)y; ++i)
#define frr(i, x, y)            for (ll i = (ll)x; i >= (ll)y; --i)
#define frfr(i,j, ix, jx,y)     for (ll i = (ll)ix , j = (ll)jx; i >= (ll)y; ++i,j--)
#define st                      std::chrono::time_point<std::chrono::system_clock> start, end; start = std::chrono::system_clock::now();
#define en                      end = std::chrono::system_clock::now(); chrono::duration<double> elapsed_seconds = end - start; cout << elapsed_seconds.count() << "s\n";

typedef pair<ll, ll>                   pll;
typedef pair<string, ll>               psl; 
typedef pair<ll, string>               pls; 
typedef pair<ll, bool>                 plb; 
typedef pair<string, bool>             psb; 
typedef pair<string, string>           pss; 
typedef vector<ll>                     vl;
typedef vector<bool>                   vb;
typedef vector<char>                   vc; 
typedef vector<string>                 vs; 
typedef vector<vl>                     vvl;
typedef vector<plb>                    vplb;
typedef vector<psb>                    vpsb;
typedef vector<pll>                    vpl;
typedef vector<psl>                    vpsl;
typedef vector<pls>                    vpls;
typedef vector<pss>                    vpss;
typedef set<ll>                        sl;
typedef set<string>                    ss;
typedef unordered_set<ll>              usl;
typedef unordered_set<string>          uss;
typedef vector<vl>                     vvl;
typedef set<pll>                       spl;
typedef set<psl>                       spsl;
typedef set<pls>                       spls;
typedef set<pss>                       spss;
typedef map<ll, ll>                    mll;
typedef map<ll, bool>                  mlb;
typedef map<string, bool>              msb;
typedef map<string, string>            mss;
typedef map<string, ll>                msl;
typedef map<ll, string>                mls;
typedef multimap<ll,ll>                mmll;
typedef multimap<ll,bool>              mmlb;
typedef multimap<string,bool>          mmsb;
typedef multimap<string,string>        mmss;
typedef multimap<string,ll>            mmsl;
typedef multimap<ll, string>           mmls;
typedef unordered_map<ll, ll>          umll;
typedef unordered_map<ll, bool>        umlb;
typedef unordered_map<string, bool>    umsb;
typedef unordered_map<string, string>  umss;
typedef unordered_map<string, ll>      umsl;
typedef unordered_map<ll, string>      umls;
typedef unordered_multimap<ll, ll>         ummll;
typedef unordered_multimap<ll, bool>       ummlb;
typedef unordered_multimap<string, bool>   ummsb;
typedef unordered_multimap<string, string> ummss;
typedef unordered_multimap<string, ll>     ummsl;
typedef unordered_multimap<ll, string>     ummls;
typedef stack<ll>                      stl;
typedef stack<char>                    stc;
typedef stack<string>                  sts;
typedef queue<ll>                      ql;
typedef queue<char>                    qc;
typedef queue<string>                  qs;
typedef deque<ll>                      deql;
typedef deque<char>                    deqc;
typedef deque<string>                  deqs; 
const ld pi = 3.14159265359;

ll n, m;
ll stp=0;
vl steps;
mlb mp;
void ispossible(ll n, ll m){
    if(mp[n]!=true or n==m){
    mp[n]=true;
    steps.pb(n);
    }
    if(n*2 == m or (n*2*2 <= m or n*2*3 <= m))ispossible(n*2, m);
    if(n*3 == m or (n*3*2 <= m or n*3*3 <= m))ispossible(n*3, m);
}     
int main(){
    fast
    cin >> n >> m;
    if(n==m){cout << "0"; return 0;}

    ispossible(n,m);
    reverse(all(steps));steps.pop_back();

    ll cnt=0, mn=m, pos = find(all(steps), m) - steps.begin();
    fr1(i, pos, steps.size()){
        if(mn/3 == steps[i] or mn/2 == steps[i]){cnt++; mn=steps[i];}
    }
    // fra(steps)cout << i << endl;
    if(find(all(steps), m) == steps.end())cout << "-1";
    else cout << cnt;

    // while(n<m){
    //     if(m%(n*2)==0){n*=2;stp++;}
    //     else {n*=3; stp++;}
    // }
    //     cout << (n==m ? stp : -1);
}