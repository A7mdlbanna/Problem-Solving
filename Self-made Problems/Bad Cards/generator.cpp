#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
#include<random>
using namespace std;
typedef	long long ll;
unsigned long long llrand() {
    unsigned long long r = rand();
    if(r < 2)llrand();
    // return r;
    // for (int i = 0; i < 5; ++i) {
    //     r = (r << 15) | (rand() & 0x7FFF);
    // }
    return r ;
}
int main(){
    srand(time(NULL));
    unsigned long long mx = 0;
	for (int ii = 2; ii < 400; ii++){
        string ss = "out";
        ss+=to_string(ii);
        string sss = ss + ".txt";
	    char s[sss.size()];
        strcpy(s, sss.c_str());
		freopen(s, "w", stdout);
        cout << llrand() << " " << llrand() << endl;
	}
}