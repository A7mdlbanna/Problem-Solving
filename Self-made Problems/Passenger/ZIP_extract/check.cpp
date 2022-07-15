#include <bits/stdc++.h>
#include "testlib.h"
int n, m, w, c;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    
    n = inf.readInt();
    m = inf.readInt();
    w = inf.readInt();
    c = inf.readInt();

if(m + w + c >= n){
    int num1 = ouf.readInt();
    int num2 = ouf.readInt();
    int num3 = ouf.readInt();
    if (num1 + num2 + num3 != n)
        quit(_wa, "Number differ");
        else 
        quit(_ok, "3 Numbers");
    }
else if (m + w + c < n){
        int NoSuitable = ouf.readInt();
        if(NoSuitable != -1)
          quitf(_wa, "Number differ - expected: ""-1"", found: %d", NoSuitable);
        else 
            quit(_ok, "-1");
    }

}
