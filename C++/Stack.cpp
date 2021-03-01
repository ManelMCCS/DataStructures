#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1
#define MAX 1000
 
class _Stack {
    int top;
 
public:
    int a[MAX]; // Maximum size of _Stack
 
    _Stack() { top = -1; }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void print();
};
 
bool _Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        if (DEBUG)cout << "Stack Overflow\n";
        return false;
    }
    else {
        a[++top] = x;
        if (DEBUG)cout << x << " pushed into Stack\n";
        return true;
    }
}
 
int _Stack::pop()
{
    if (top < 0) {
        if (DEBUG)cout << "Stack Underflow\n";
        return 0;
    }
    else {
        int x = a[top--];
        return x;
    }
}
int _Stack::peek()
{
    if (top < 0) {
        if (DEBUG)cout << "Stack is Empty\n";
        return 0;
    }
    else {
        int x = a[top];
        return x;
    }
}
 
bool _Stack::isEmpty()
{
    return (top < 0);
}

void _Stack::print()
{
    int n = top + 1;
    
    cout << "top-> ";
    for(int i = 0; i < n; i++) cout << a[top - i] <<" ";
    cout << "<-down \n";
}