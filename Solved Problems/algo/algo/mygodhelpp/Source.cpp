#include<bits/stdc++.h>
using namespace std;

char cmp(char x){
	if(x < 90)
	return x+=32;
}
int main() {
	string s;
	auto ss = ostringstream{};
	ifstream in("Smallinput.txt");

	getline(in, s);
	ss << in.rdbuf();
	in.close();

	freopen("Smalloutput.txt", "w", stdout);
	int nn = ss.str().length();
	cout << nn << endl;

	set<string> cmp k;
	for(int i =0; i <= ss.str().length(); i++)
		k.insert(ss.str().substr(i, nn-i));
		
	cout << "size of file: " << nn << endl << "size of vector:  " <<  k.size() << endl;
	cout << "the vector: " << endl;
	for(auto i : k)cout << i << "\n\n";

	// auto it = k.end();for(int i=0; i < 5; i++)it--;
	// cout << *it << endl;
}