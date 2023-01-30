#include<iostream>
using namespace std;
class A {
    private:
        int a;

    protected:
        int x; 
    public:
        void input(int v)
    {
        x = v;
    }
};

class B : private A {
    public:
        void display(void)
    {
        input(10); 
        cout << "value of x: " << x;
    }
};

int main()
{
    B objB; 
    objB.display();
    return 0;
}