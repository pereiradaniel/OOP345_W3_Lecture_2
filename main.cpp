#include <iostream>
#include <typeinfo>		// RTTI
using namespace std;

/*
	Ad-hoc polymorphism
		- overloading
		- coercion

	True polymorphism
		- inclusion polymorphism (hierarchy of classes + virtual functions).
		- generic polymorphism / parametric polymorphism (templates).
*/

void print(int val) 
{
	cout << "[" << typeid(val).name() << "]\n";
}

void print(double val)
{
	cout << "[" << typeid(val).name() << "]\n";
}

struct Foo
{
	// ..
};

// RTTI - Run-Time Type Information

int main()
{
	//Foo aFoo;
	//auto val = 32.1;
	//cout << typeid(val).name() << endl;	// Returns a structure, custom type.
	//cout << typeid(aFoo).name() << endl;

	auto  val = 32;
	print(val);
	auto  valD = 1.2;
	print(valD);
}