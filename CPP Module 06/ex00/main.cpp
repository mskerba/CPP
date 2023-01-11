#include <iostream>


// int main()
// {    
    // {
    //     float a= 9.5;
    //     int b = static_cast<int>(a);
    //     std::cout <<  b << std::endl; 
    // }
   /*
    {
        char c;
        int *i = (int *)&c;
        int *ptr = static_cast<int *>(&c);
    }
    */
   
//}

 

/*

class cast
{
    public:
        explicit cast(int a)
        {
            std::cout << "I am in constructor cast " << a << std::endl;
        }
        operator double()
        {
            std::cout<< " i am in operator \n";
            return 77.55;
        }
        ~cast()
        {
            
        }
};

int main()
{
    cast a = 6;
    double f = a;

    // cast b = static_cast<int> (9);
    // double g = static_cast<cast> (b);
}

*/

/*


class cas_t
{
public:
    cas_t(){}
     ~cas_t(){}
    virtual void base()
    {
        std::cout << "base\n";
    }
};

class stati_c: public cas_t
{
    public:
        void d(){ std::cout << "alami" ;}
    void base()
    {
        std::cout << "form dirve\n";
    }
        stati_c(){}
        ~stati_c(){}
};

int main()
{
    cas_t *base = new stati_c;
    base->base();
    stati_c b;
    cas_t base2 = static_cast<cas_t>(b);
    base2.base();///not good 
    

}
*/


/*

class Base
{
    public:
    virtual void v(){std:: cout << "base \n";}
    Base(){};
    ~Base(){};
};
class A:public Base {
    public:
    void v(){ std::cout << "drive\n";}
    A(){};
    ~A(){};
    };
    
class B:public Base {

    public:
        B(){};
        ~B(){};
    };

int main()
{
    A drive1;
    B drive2;
    
    Base *ba = static_cast<B*>(&drive1); /// makast
    // Base *h = dynamic_cast<A *>(&drive2);
    // std::cout << ba ;
    ba->v();
}
#include <iostream>
using namespace std;

void f(int* p) {
  cout << *p << endl;
}
*/



int main(void)
{
	const int a = 10;
	const int* b = &a;
	int* c = const_cast<int*>(b);

	std::cout<< c << " "<< *c <<std::endl;
	*c = 50;
	std::cout<< c<< " "<< *c << std::endl;

	return 0;
}
