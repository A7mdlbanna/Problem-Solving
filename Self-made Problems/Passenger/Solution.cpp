#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n, m, w, c;
    cin >> n >> m >> w >> c;

        if( (m*10) + (w*5) + c < n || n<16){cout << "-1"; return 0;}
        for(int i=m, x=1; i>=(m+1)/2; i--, x++){
            for(int j=w, y=1; j>=(w+1)/2; j--, y++){
               for(int k=c, z=1; k>=(c+1)/2; k--, z++){
               if((i*10) + (j*5) + k == n){cout << i << " " << j << " " << k; return 0;}
               if((x*10) + (y*5) + z == n){cout << x << " " << y << " " << z; return 0;}
               if((x*10) + (j*5) + k == n){cout << x << " " << j << " " << k; return 0;}
               if((i*10) + (y*5) + z == n){cout << i << " " << y << " " << z; return 0;}
           }
        }
    }
    cout << "-1";
} 
