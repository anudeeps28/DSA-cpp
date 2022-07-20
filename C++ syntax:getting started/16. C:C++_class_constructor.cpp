//new c++ program
// Basically, OOPS in C++
#include<iostream>

using namespace std;

class Rectangle // writing the class
{
private:
    int length; // data members
    int breadth;
public: 
    Rectangle() // constructor
    {
        length = 0;
        breadth = 0;
    }
    
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area() // function
    {
        return length*breadth;
    }
    int perimeter() // function 
    {
        return 2*(length+breadth);
    }
    int getlength()  // accessor
    {
        return length; 
    }
    void setlength(int l) // mutator
    {
        length = l;
    }
    ~Rectangle() //destructor = if you want to destroy anything from dynamic memory
    {
        cout << "Destructor";
    }
};

int main(){
    Rectangle r(10,5); // instead of a variable, this is now an object
    
    // calling the functions
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setlength(20);
    cout<<r.getlength();

    return 0;
}