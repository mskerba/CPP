#include <iostream>
#include <string_view>
#include <string>

class Animal
{
protected:
	std::string m_name;
	Animal(std::string_view name) : m_name(name){}
	Animal(const Animal &);
	Animal &operator=(const Animal &);
public:
	std::string_view getName() const { return m_name; }
	std::string_view speak() const { return "???"; }
};

class Cat : public Animal
{
public:
	Cat(std::string_view name) : Animal(name){}
	std::string_view speak() const { return "Meow";}
};

class Dog : public Animal
{
public:
	Dog(std::string_view name): Animal(name){}
	std::string_view speak() const { return "Woof"; }
};

int main()
{
    const Cat fred("Fred");
    const Cat misty("Misty");
    const Cat zeke("Zeke");

    const Dog garbo("Garbo");
    const Dog pooky("Pooky");
    const Dog truffle("Truffle");

    const auto animals( std::is_array<const Animal*>({&fred, &garbo, &misty, &pooky, &truffle, &zeke }) );

    for (const auto animal : animals)
        std::cout << animal->getName() << " says " << animal->speak() << '\n';
    return 0;
}