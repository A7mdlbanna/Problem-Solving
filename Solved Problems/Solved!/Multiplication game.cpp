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
#define lp(y)                   for (ll i = 0; i < (ll)y; ++i)
#define lpj(y)                  for (ll j = 0; j < (ll)y; ++j)
#define lpk(y)                  for (ll k = 0; k < (ll)y; ++k)
#define lpl(y)                  for (ll l = 0; l < (ll)y; ++l)
#define fr(i, x, y)             for (ll i = (ll)x; i < (ll)y; ++i)
#define fr1(i, x, y)            for (ll i = (ll)x; (ll)i <= (ll)y; ++i)
#define frr(i, x, y)            for (ll i = (ll)x; i >= (ll)y; --i)
#define frfr(i,j, ix, jx,y)     for (ll i = (ll)ix , j = (ll)jx; i < (ll)y; ++i,j--)
#define st                      std::chrono::time_point<std::chrono::system_clock> start, end; start = std::chrono::system_clock::now();
#define en                      end = std::chrono::system_clock::now(); chrono::duration<double> elapsed_seconds = end - start;ds.count() << "s\n";
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define py                      cout << "YES" << endl;
#define pn                      cout << "NO" << endl;

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
const ld pi = 3.141592653;
const ll mod = 1e9+7;

ll digits = 1, num1, num2, digit_of_num1, digit_of_num2;

bool num_len(ll num){
    string s=""; 
    s = to_string(num);
    return s.size()==digits; 
}
// this function generates the two numbers
ll generate(ll digits){

    //  here u can generate two numbers with at least 5 digits 
    repeat1:
    num1 = rand()%(ll)pow(10, digits);
    if(!num_len(num1))goto repeat1;
    repeat2:
    num2 = rand()%(ll)pow(10, digits);
    if(!num_len(num2))goto repeat1;


    // here u can generate two numbers with 9 digits
//     string str_num="";
//     //generating the first number:
//     for(ll i = 0; i < digits; i++){
//         repeat:
//         digit_of_num1 = rand()%10;
//         // if the first digit was 0 then the number will have n-1 digits
//         // so we make sure that this bug doesn't happen by adding this if condition.
//         if(i==0 and digit_of_num1==0)goto repeat;

//         str_num += digit_of_num1+48;
//         }
//     num1 = stoi(str_num);
//     str_num = "";

//     // generating the second number:
//     for(ll j = 0; j < digits; j++){
//         repeat2:
//         digit_of_num2 = rand()%10;
//         if(j==0 and digit_of_num2 == 0)goto repeat2;

//         str_num += digit_of_num2+48;
//         }
//     num2 = stoi(str_num);
}
void Question(){
    ll percent =0;
    fr(i,0,10){
        generate(digits);
        ll prod;
        printf("%d times %d = ? : ", num1, num2);
        cout << endl;
        cin >> prod; 
        if(prod == num1 * num2)percent++;
    }
    if(percent > 7){
        cout << "Congratulations, you are ready to go to the next level!" << endl;
        digits++;
        Question();
    }
    else {
        cout << "Please ask your teacher for help!" << endl ;
        system("pause");
        system("CLS");
        digits = 1;
        Question();
    }
}
int main(){       
    fast
    srand(time(0));
    Question();
}