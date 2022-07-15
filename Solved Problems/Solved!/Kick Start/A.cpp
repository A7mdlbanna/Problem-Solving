#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast                    cin.tie(0); std::ios_base::sync_with_stdio(false); 

set<unsigned ll>st;
unsigned ll reverseDigits(unsigned ll num) {
    ll rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

unsigned ll isPalindrome(unsigned ll n) {
    unsigned ll rev_n = reverseDigits(n);
    if (rev_n == n)
        return 1;
    else
        return 0;
}

void Divisors(unsigned ll n) {
    for (unsigned ll i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            if ((n / i) == i)
                st.insert(i);
            else
                st.insert(i);
            st.insert(n / i);
        }
    }
}

void solve() {
    unsigned ll n;
    cin >> n;
    Divisors(n);
    ll ans = 0;
    for (auto&it : st) {
        if (isPalindrome(it)) {
            //cout<<it<<" ";
            ans++;
        }
    }
    cout<<ans;
    st.clear();
}

int main() {
    fast
    unsigned ll  n;
    cin>>n;
    for (ll i=1;i<=n;i++){
        cout<<"Case"<<" "<<"#"<<i<<": ";solve();
        cout<<endl;
    }
}