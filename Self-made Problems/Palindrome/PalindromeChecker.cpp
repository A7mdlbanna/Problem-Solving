#include "bits/stdc++.h"
#include "testlib.h"
using namespace std;

void isPalindrome(int number){
    string s = to_string(number);
    for(int i = 0; i <= s.size()/2; i++){
        if(s[i] != s[s.size()-i-1])
            quit(_wa, "The resulting number is not a palindrome");
    }
}
void isSuitableSize(int input, int output){
    if((int)log10(input)+1 != (int)log10(output)+1)quit(_wa, "The size of the input is not suitable with the size of the your output");
}
int main(int argc, char* argv[]){
    registerTestlibCmd(argc, argv);

    int input, output;
    input = inf.readInt();
    output = ouf.readInt();
    isSuitableSize(input, output);
    isPalindrome(input + output);
    quit(_ok, "The resulting number is a palindrome");
}