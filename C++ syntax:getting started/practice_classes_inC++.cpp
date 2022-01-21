#include<iostream>
#include<stdio.h>
using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
public:
    Rectangle(){ //non paramatrized constructor/default constructor - will set both to 0 if we do not declare
        length = 0;
        breadth = 0;
    
    }
    Rectangle(int l, int b){ //another constructor - set the length and breadth as givenin prrogram
        length = l;
        breadth = b;
    }
    int area(){
        return length*breadth;
    
    }

    int perimeter(){
        return 2*(length+breadth);
    
    }

    void setbreadth (int b){
        breadth = b;

    }
     int getlength(){
         return length;
        
     }
     ~Rectangle(){
         cout<<"Destructor";
     }
};

// * writing the main function

int main(){
    Rectangle r(10,5);
    cout<<"Area="<<r.area()<<endl;
    cout<<"Perimeter"<<r.perimeter()<<endl;


    return 0;
}


