#include <iostream>
#include <memory>

using namespace std;

struct A {
    void printA() {
        cout << "A..." << endl;
    }
};

int main() {
    // creating a unique pointer that will point to structure A
    
    unique_ptr<A> p1 (new A); // this is a unique pointer to class A
    p1->printA();
    cout << p1.get() << endl; // get function gives the address of p1

    unique_ptr<A> p2 = move(p1); // unique_ptr<A> p1 (new A) = p2 will give an error
    p2->printA();
    cout << p1.get() << endl; 
    cout << p2.get() << endl; 

     unique_ptr<A> p3 = move(p2); 
    p3->printA();
    cout << p1.get() << endl; 
    cout << p2.get() << endl; 
    cout << p3.get() << endl; 

    return 0;
}
