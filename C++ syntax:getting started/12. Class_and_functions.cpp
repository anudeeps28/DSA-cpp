//write structures seperately
//main function is only used for calling other functions.


#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

//same code converted to C++ code; above one is a C program

class Rectangle {
private:
    int length;
    int breadth;

public:
    Rectangle ( int l, int b) { //this is a constructor (this does the job of initialization; has the same name as class name) 
        length = l;
        breadth = b;

    };

    int area () {
        return length*breadth;
    };

    void changelength( int l) {
        length = l;
    }

    int getLength() {
        return length;
        
    }
};

int main() {
    Rectangle r = {10,5}; //this is called an object instead of a variable
    
    int area = r.area();
    r.changelength (20);

    cout << area << " " << r.getLength();
    
}
