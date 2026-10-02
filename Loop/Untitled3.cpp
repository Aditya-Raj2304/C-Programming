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
    void output(Example e)
    {
        cout << "a : " << a << "b : " << b;
        cout << "e.a : " << e.a << "e.b : " << e.b;
    }
};
int main()
{
    Example e1, e2;
    e1.input();
    e1.input();
    e2.output(e2);
}
