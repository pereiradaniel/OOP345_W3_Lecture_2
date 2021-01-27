#include <iostream>
#include <typeinfo>		// RTTI
#include <iomanip>
using namespace std;

class Foo
{
	friend ostream& operator<<(ostream&, const Foo&);
};

ostream& operator<<(ostream& out, const Foo& aFoo)
{
	out << "Hello from Foo.";
	return out;
}

// Make a template function
template<typename T, int N = 10>
void print(T val) 
{
	cout << "\33[92m" << setw(N) << typeid(val).name() << "\33[0m " << setw(20) << val << "\n";
}

// RTTI - Run-Time Type Information
int main()
{
	// Template parameters must be known at compile-time!
	constexpr int size = 10;

	auto  val = 32;
	print(val);

	auto  valD = 1.2;
	print<double, size>(valD);

	Foo aFoo;
	print<Foo, size>(aFoo);
}

/*
	Ad-hoc polymorphism
		- overloading
		- coercion

	True polymorphism
		- inclusion polymorphism (hierarchy of classes + virtual functions).
		- generic polymorphism / parametric polymorphism (templates).
*/