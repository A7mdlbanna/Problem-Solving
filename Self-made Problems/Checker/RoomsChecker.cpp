#include "bits/stdc++.h"
#include "testlib.h"
using namespace std;

long long students, lengthIn, widthIn, lengthOut, widthOut;


int main(int argc, char* argv[]){
    registerTestlibCmd(argc, argv);

    students = inf.readLong();
    lengthIn = inf.readLong();
    widthIn = inf.readLong();

    lengthOut = ouf.readLong();
    widthOut = ouf.readLong();

    if(students*6 <= lengthIn*widthIn){
        if(lengthOut != lengthIn || widthIn != widthOut)
            quit(_wa, "There is no need to edit the Length or the Width of the room");
        else 
            quit(_ok, "The room is just enough for the students");
    }
    else{
        if(lengthOut*widthOut == students*6)
            quit(_ok, "The room is just enough for the students");
        else if (lengthOut*widthOut < students*6)
            quit(_wa, "The room is not big enough for the students");
        else 
            quit(_wa, "The room is too big for the students");
    }
}