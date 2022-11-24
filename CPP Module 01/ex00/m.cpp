#include <iostream>
using namespace std;

// class A
// {

//     private:
//     public:
//         int a;
//         void Ab()
//         {
//             this->a = 0;
//             a = 0;
//         };
// };


// namespace afdsa {
//     int a;
// }

struct A {
    A() {
        cout << "construct" << endl;
    };
    ~A() {
        cout << "distructor" << endl;
    };
};

void    func()
{
  struct A b;  

}

int main()
{
    
    {

        {

        }

    }
    func()
}