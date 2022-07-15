#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
typedef	long long ll;
typedef	long double ld;
ll i = 2, j = 3, k=4; 
int main(){
	int idx = 3;
	char x[] = "out0000000000000000000.txt";
	for (int ii = 3; ii < 50; ii++){
        i+=ii*5/2;
        j+=ii*5/2;
        k+=ii*5/2;
		if (x[idx] == '9')
			idx++;
		freopen(x, "w", stdout);
		x[idx]++;
 
        cout << (ll)(i*sqrt(5)) << endl << (ll)i*2 << " " << (ll)j << " " << (ll)k << endl;
	}
}