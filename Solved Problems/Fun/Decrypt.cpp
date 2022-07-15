#include<bits/stdc++.h>
using namespace std;
int main(){
    string encrypt = "🐥🦋🦤🪶🦉🦐😶‍🌫️😚😖😬😵🥺🥳🤡🤧☠️👺😈👽💩🙈🦒🙀🤢😡🥶🐂🐃🐄🐖🐏🐑🐁🐘🦨🐇🐳🐡🦀🐓🦜🦩🦗🪲🕷️🦠🦷🧠👅🎃✨🎉";
    string origin = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPSTUVWXYZ";
    string message, crypting;
    cout << "enter the message you want to crypt: ";
    getline(cin, message);
    bool isDecrypt = find(origin.begin(), origin.end(), message[0]) == origin.end();

    if(isDecrypt)
        for(int i=0;i<message.length();i++){
            if(find(encrypt.begin(), encrypt.end(), message[0]) == encrypt.end()){cout << "Please enter a valid message." << endl; return 0;}
            crypting += origin[find(encrypt.begin(), encrypt.end(), message[i])-encrypt.begin()];}
    else 
        for(int i=0;i<message.length();i++){
            if(find(origin.begin(), origin.end(), message[0]) == origin.end()){cout << "Please enter a valid message." << endl; return 0;}
            crypting += encrypt[find(origin.begin(), origin.end(), message[i])-origin.begin()];}
    cout << "your message has been crypted: " << crypting << endl;
}