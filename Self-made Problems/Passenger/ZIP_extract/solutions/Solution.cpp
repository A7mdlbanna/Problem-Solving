#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n, m, w, c;
    cin >> n >> m >> w >> c;

    if( m + w + c < n ){cout << "-1"; return 0;}
    //if(min(m, min(w, c)) == c){
        for(int i=m-1; i>=0; i--){
            for(int j=w-1; j>=0; j--){
               for(int k=c-1; k>=0; k--){
               if(i + j + k == n and i!=j and j!=k and i!=k){cout << i << " " << j << " " << k; return 0;}
          }
      // }
   }
}

  

     cout << "-1";
} 
