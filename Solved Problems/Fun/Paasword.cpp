#include<bits/stdc++.h>
using namespace std;
int main(){
    string Keywords = "abcdefgh!@#jgsgksjdJKBKJBKB$&_ijklmno!@#%$&_pqrst235uvw!@jbskgjsd#%$&_xyzABCDE23456789FGHIJ236789KLMNOPQR!@#HVDFSBFUJOFW%$&_STUVWXYZ01!@#%$&_23456789!@#%$&_";
    for(int i = 0; i < 21; i++){
        cout << Keywords[rand() % Keywords.size()];
    }
}