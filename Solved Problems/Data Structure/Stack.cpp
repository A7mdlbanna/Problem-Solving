#include<iostream>
using namespace std;

#define ll                      long long
#define fast                    cin.tie(0); std::ios_base::sync_with_stdio(false); 
#define fr(i, x, y)             for (ll i = (ll)x; i < (ll)y; ++i)
#define frr(i, x, y)             for (ll i = (ll)x; i >= (ll)y; --i)

const ll SIZE = 1000;

template <class T>
class stack{
    int top ;
    T item[SIZE];
public:
    stack(){top = -1;}
    void push(T Element){
        if(top >= SIZE-1)cout << "Stack is full!" << endl;
        else item[++top] = Element;
    }
    bool empty(){
        return top < 0;
    }
    void pop(){
        if(empty())cout << "Stack is empty!" << endl;
        else top--;
    }
    void Top(){
        if(empty())cout << "Stack is empty!" << endl;
        else cout << item[top] << endl;
    }
    void print(){
        frr(i,top,0){
            cout << item[i] << endl;
        }
    }
};
int main(){
    stack <ll> s;
    s.push(976);
    s.push(5456);
    s.push(886);
    s.push(54);
    s.Top();
    s.pop();
    s.Top();
    s.print();

}