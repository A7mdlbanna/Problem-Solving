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
#define fra(i, x)               for (auto &i : x)
#define fri(it, x, y)           for (auto it = x; it != y; ++it)
#define frri(it, x, y)          for (auto it = x; it != y; --it)
#define fr(i, x, y)             for (ll i = (ll)x; i < (ll)y; ++i)
#define fr1(i, x, y)            for (ll i = (ll)x; (ll)i <= (ll)y; ++i)
#define frr(i, x, y)            for (ll i = (ll)x; i >= (ll)y; --i)
#define frfr(i,j, ix, jx,y)     for (ll i = (ll)ix , j = (ll)jx; i >= (ll)y; ++i,j--)

typedef pair<ll, ll>            pll;
typedef pair<string, ll>        psl; 
typedef pair<ll, string>        pls; 
typedef pair<string, string>    pss; 
typedef vector<ll>              vl;
typedef vector<bool>            vb;
typedef vector<char>            vc; 
typedef vector<string>          vs; 
typedef vector<vl>              vvl;
typedef vector<pll>             vpl;
typedef vector<psl>             vpsl;
typedef vector<pls>             vpls;
typedef vector<pss>             vpss;
typedef set<ll>                 sl;
typedef set<string>             ss;
typedef vector<vl>              vvl;
typedef set<pll>                spl;
typedef set<psl>                spsl;
typedef set<pls>                spls;
typedef set<pss>                spss;
typedef map<ll, ll>             mll;
typedef map<string, string>     mss;
typedef map<string, ll>         msl;
typedef map<ll, string>         mls;
typedef stack<ll>               stl;
typedef stack<char>             stc;
typedef stack<string>           sts;
typedef deque<ll>               deql;
typedef deque<char>             deqc;
typedef deque<string>           deqs;

int main(){
   fast

    ll t; cin >> t;
    w(t){
        ll n; cin >> n;
        ll car=1;
        stl st;
        bool pass=true;
        w(n){
            ll c; cin >> c;
            while(!st.empty() and car == st.top()){
                st.pop(); car++;
            }
            if(c == car)car++;
            else if(st.empty() or c < st.top()) st.push(c);
            else pass = false;
        }
        if(pass)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
   
}