#include <iostream>
#include <unistd.h>
# include <cmath>

using namespace std;
class s
{
private:
    double a;
    int b;
    int c;
public:
    s(double a):a(a){};
    s(double a, int b, int c):b(b),s(a),c(c){
        // this->b =b;
        // this->c = c;
    };
    void display(){cout << a<<" " << b<<" " << c << endl;}
};
int main()
{
    s e(3.5, 2, 4);
    e.display();
}