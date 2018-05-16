#include <iostream>
using namespace std;

int main() {
	//Let's initialize an integer, a, and set its value to 10.
	int a = 10;

	//Let's also initialize a pointer, p, and make it point to a.
	int *p = &a;
	//int *p tells the computer that this is a pointer to an integer
	//&a is the memory address of a

	//Now, if we wanted to get the value of a through pointer p, we can use *p to dereference p and get the value
	cout << "Value of a: " << *p << endl; //Prints the value of what p points to, in this case, a

	//If we want to know the address of what p is pointing to, we can simply print p
	cout << "Address of a: " << p << endl;

	//Let's initialize another integer, b, and set its value to 20.
	int b = 20;

	//What if we wanted to change the value of a, without mentioning a itself?
	//We can do that via the pointer p
	//Let's change the value of a to match the value of b.
	*p = b;
	//*p designates the value of whatever p is pointing to.

	//Now, if we were to print a, we should also get 20.
	cout << "b = " << b << endl;
	cout << "This should match the value of a:" << endl;
	cout << "a = " << a << endl;

	//We can also change what pointers point to.
	//For this example, let's initialize another pointer, q, and point it to b.
	int *q = &b;

	//We can then tell p to point to b as well by grabbing the address stored in q and copying it into p.
	p = q;

	//You can see that this worked by printing the address of b and the values of p and q, and seeing that they all match.
	cout << "Address of b: " << &b << endl;
	cout << "Value of p:   " << p << endl;
	cout << "Value of q:   " << q << endl;

	//You can also have pointers pointing to pointers.
	//Let's create a pointer to a pointer, r, and have it point to pointer q
	int **r = &q;

	//Now, if you dereference r twice, you should get the value of b, which is 20.
	cout << "Pointer to a pointer: " << **r << endl;

	//To recap:
	//int *p = &a; initializes a pointer p that points to an integer a
	//p returns the address it points to (the address of a)
	//*p returns the value of the int it points to (the value of a)
	//&a gets the address of a (you can also get the address of p)
	//You can have pointers pointing to other pointers
}