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
#define lp(y)                  for (ll i = 0; i < (ll)y; ++i)
#define fr(i, x, y)             for (ll i = (ll)x; i < (ll)y; ++i)
#define fr1(i, x, y)            for (ll i = (ll)x; (ll)i <= (ll)y; ++i)
#define frr(i, x, y)            for (ll i = (ll)x; i >= (ll)y; --i)
#define frfr(i,j, ix, jx,y)     for (ll i = (ll)ix , j = (ll)jx; i >= (ll)y; ++i,j--)

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
       
int main(){       
    fast
    ll solved, fssolve, days, DAY, regulardays=0, frisat=0;
    cin >> solved >> fssolve >> days;
    string day; cin >> day;

    if(day=="Friday" and days <= 2 and 2000-solved > days*fssolve){cout << "-1"; return 0;}
    if(day=="Saturday" and days < 2 and 2000-solved > days*fssolve){cout << "-1"; return 0;}

    if(day=="Monday" and days >= 6){regulardays += 4; frisat += 2; days-=6;}
    if(day=="Tuesday" and days >= 5){regulardays += 3; frisat += 2; days-=5;}
    if(day=="Wednesday" and days >= 4){regulardays += 2; frisat += 2; days-=4;}
    if(day=="Thursday"  and days >= 3){regulardays++; frisat += 2; days-=3;}
    if(day=="Friday"  and days >= 2){frisat += 2; days-=2;}
    if(day=="Saturday"  and days >= 1){frisat++; days--;}

    if(day=="Sunday" and days < 7){if(days<=5){regulardays += days; days=0;}else{regulardays += 5; frisat += 1;days=0;}}
    if(day=="Monday" and days < 6){if(days<=4){regulardays += days; days=0;}else{regulardays += 4; frisat += 1;days=0;}}
    if(day=="Tuesday" and days < 5){if(days<=3){regulardays += days; days=0;}else{regulardays += 3; frisat += 1;days=0;}}
    if(day=="Wednesday" and days < 4){if(days<=2){regulardays += days; days=0;}else{regulardays += 2; frisat += 1;days=0;}}
    if(day=="Thursday"  and days < 3){if(days<=1){regulardays += days; days=0;}else{regulardays += 1; frisat += 1;days=0;}}
    if(day=="Friday"  and days < 2){frisat++; days=0;}



    while(days>0){
        if(days<=5){regulardays += days; break;}
        if(days=6){regulardays += 5; frisat++; break;}
        regulardays += 5; frisat += 2; days-= 7;
    }
    if(regulardays==0){cout << "0"; return 0;}
    ll ans = (ceil)((double)(2000-solved-(frisat*fssolve)) / regulardays);
    cout << ans;
}