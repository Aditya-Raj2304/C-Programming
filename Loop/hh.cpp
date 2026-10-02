#include <iostream>
using namespace std;
class Example
{
private:
    int a, b;

public:
    void input()
    {
        cout << "\nEnter two number : ";
        cin >> a >> b;
    }
    void output(Example &e)
    {
        cout << "\na : " << a << "b : " << b;
        cout << "\ne.a : " << e.a << " e.b : " << e.b;
        e.a = 100;
        e.b = 200;
    }
    void show()
    {
        cout << "\nshow";
        cout << "\na : " << a << " b : " << b;
    }
};
int main()
{
    int x = 100;
    Example e1, e2;
    e1.input();
    e2.input();
    e1.output(e2);
    e2.show();
    return 0;
}
