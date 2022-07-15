#include<bits/stdc++.h>
using namespace std;

#define ll                      long long
#define ld                      long double
#define pb                      push_back
// #define endl                    "\n"
#define all(x)                  x.begin(), x.end()
#define rall(x)                 x.rbegin(), x.rend()
#define prec(n)                 fixed << setprecision(n)
#define w(x)                    while(x--)
#define fast                    cin.tie(0); std::ios_base::sync_with_stdio(false); 
#define fra(x)                  for (auto &i : x)
#define fri(it, x)              for (auto it = x.begin(); it != x.end(); ++it)
#define frri(it, x)             for (auto it = x.end(); it != x.begin(); --it)
#define lp(y)                  for (ll pp = 0; pp < (ll)y; ++pp)
#define fr(i, x, y)             for (ll i = (ll)x; i < (ll)y; ++i)
#define fr1(i, x, y)            for (ll i = (ll)x; (ll)i <= (ll)y; ++i)
#define frr(i, x, y)            for (ll i = (ll)x; i >= (ll)y; --i)
#define frfr(i,j, ix, jx,z)     for (ll i = (ll)ix , j = (ll)jx; j>=(ll)z; ++i,j--)

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

    string s; cin >> s;
    bool AB =0, BA =0; 
    fr(i, 0, s.size()-1){
        if(BA and AB){cout << "YES"; return 0;}
        // cout << s[i] << " " << AB << " " << BA << endl;
        if(s[i] == 'A' and s[i+1]=='B' and !AB and i==s.size()-2){AB=1; continue;}
        if(s[i] == 'B' and s[i+1]=='A' and !BA and i==s.size()-2){BA=1; continue;}

        if(s[i] == 'A' and s[i+1]=='B' and AB)continue;
        if(s[i] == 'A' and s[i+1]=='B' and !AB){AB=1; i++; continue;} 
        if(s[i] == 'B' and s[i+1]=='A' and BA)continue;
        if(s[i] == 'B' and s[i+1]=='A' and !BA){BA=1; i++; continue;}
    }
    if(BA and AB){cout << "YES"; return 0;}
    else {
        AB=0;BA=0;
        frr(i, s.size()-1, 1){
        if(BA and AB){cout << "YES"; return 0;}
        // cout << s[i] << " " << AB << " " << BA << endl;
        if(s[i-1] == 'A' and s[i]=='B' and !AB and i==1){AB=1; continue;}
        if(s[i-1] == 'B' and s[i]=='A' and !BA and i==1){BA=1; continue;}
    
        if(s[i-1] == 'A' and s[i]=='B' and AB)continue;
        if(s[i-1] == 'A' and s[i]=='B' and !AB){AB=1; i--; continue;} 
        if(s[i-1] == 'B' and s[i]=='A' and BA)continue;
        if(s[i-1] == 'B' and s[i]=='A' and !BA){BA=1; i--; continue;}
    }
    if(BA and AB){cout << "YES"; return 0;}
    else cout << "NO";
    }
}