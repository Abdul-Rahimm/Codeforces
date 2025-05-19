// بِسْمِ اللهِ الرَّحْمٰنِ الرَّحِيْمِ
#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
typedef vector<int> vi;
typedef vector<vi> vii;

class greeting
{
public:
    void hello()
    {
        cout << "Hello " << endl;
    }
    void hello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

int main()
{
    greeting myGreeting;
    myGreeting.hello();
    myGreeting.hello("AR");
}