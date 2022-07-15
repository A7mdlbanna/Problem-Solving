#include <bits/stdc++.h>
#include "Workspace/LIB/testlib.h"
int n, m, w, c;

int main(int argc, char* argv[]) {
    registerTestlibCmd(argc, argv);
    
    n = inf.readInt();
    m = inf.readInt();
    w = inf.readInt();
    c = inf.readInt();

 if ((m*10) + (w*5) + c < n || n < 16){
        int NoSuitable = ouf.readInt();
        if(NoSuitable != -1)
          quitf(_wa, "Number differ - expected: ""-1"", found: %d", NoSuitable);
        else 
            quit(_ok, "-1");
    }


else if((m*10) + (w*5) + c >= n){
    int num1 = ouf.readInt();
    int num2 = ouf.readInt();
    int num3 = ouf.readInt();

    if(num1==-1)
        quit(_wa, "Number differ - expected: 3 integers, found: ""-1""");
    else if(num1==0 || num2==0 || num3==0)
        quit(_wa, "Petya has to sell at least 1 ticket of each type!");
        
    else if(num1 > m)
        quit(_wa, "the number is bigger than the number of men at the bus stop!");
    else if(num2 > w)
        quit(_wa, "the number is bigger than the number of women at the bus stop!");
    else if(num3 > c)
        quit(_wa, "the number is bigger than the number of children at the bus stop!");
    
    else if((num1*10) + (num2*5) + num3 != n)
        quit(_wa, "Petya has to sell tickets with values equal to the fare!");
    
    else 
        quit(_ok, "Petya had sell tickets with values equal to the fare!");
    }

}
