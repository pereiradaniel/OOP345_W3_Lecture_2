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

// RTTI - Run-Time Type Information

int main()
{
	auto val = 32.1;
	cout << typeid(val).name();	// Returns a structure, custom type.
}