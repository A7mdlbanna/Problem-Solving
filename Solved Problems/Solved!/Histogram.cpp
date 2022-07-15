#include <bits/stdc++.h>
using namespace std;
const long long Mod = 1e7 + 1;
void fast(){
     ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                    
    cout.tie(NULL);
}
int main()
{
     fast();
     int n,x,s;
     cin >> n;
     while(n--){
          cin >> x;
          long long area = 0,cnt = 1,mx = 0;
          bool cn = false;
          stack<int> stk;
          for (int i = 0; i < x; i++){
               cin >> s;
               if(x == 1)
                    {
                         mx = s;
                         break;
                    }
               if(!stk.empty()){
                    if(stk.top() == s){
                         cn = true;
                         cnt++;
                    }
                    else{
                         if(cn){
                              area = stk.top() * cnt;
                              mx = max(mx, area);
                              cn = false;
                         }
                         area = min(stk.top(), s) * 2;
                         mx = max(mx, area);
                         stk.pop();
                         stk.push(s);
                    }
               }
               else{
                    stk.push(s);
                    cnt = 1;
               }
          }
          if(cn){
               area = stk.top() * cnt;
               mx = max(mx, area);
          }
          cout << mx << endl;
     }
     
}