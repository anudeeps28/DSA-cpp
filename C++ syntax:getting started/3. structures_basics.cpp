#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;

struct Rectangle //defined outside the main function ; definition does not consume the main memory.
{
    int length;
    int breadth;
    char x; //it will allocate 4 bytes(as shown in sizeof), but will use only 1. 
}r1; // this r1 is variable declaration (global variable); you can also do this

// more examples of structures

struct complex_number
{
    int real;
    int imaginary;
}; 

// ------------------------------------------------------

struct Student
{
    int roll;
    char name[25]; // this array can store name upto 25 characters
    char dept[10]; 
    char address[50];

}s; // takes a total of 87 bytes

// ------------------------------------------------------

struct playing_cards
{
    /*
    Face value: 1-12
    shape: heart = 0, diamond = 1 ...
    color: red = 0, black = 1

    so, all are integers
    */

    int face;
    int shape;
    int color;

}p;


int main() {
    struct Rectangle r1={10,5}; //declaration of local variable  (inside the main function = this means that this will be accessable only inside the main function
    struct Student s;
    struct playing_cards p;
    struct playing_cards deck[52]; // array of structures (this will take 52*4 bytes)
    
      
    printf("%lu", sizeof(r1)); // error type while using %d = long unsigned
    cout << sizeof(r1) <<endl; //another way (endl works with this)

    //accessing members of the structure
    cout << r1.length << endl;
    cout << r1.breadth <<endl;

    //changing the values of members of the structure
    r1.length = 15;
    r1.breadth = 7;
    
    s.roll = 10;
    // s.dept = "mech"; this will give error because you cannot assign to an array, only copy to it
    strcpy(s.dept, "Mech"); // this is how you assign to an array 
    
    p.face = 1;
    p.shape = 0;
    p.color = 0;

    deck[0].face = {0};
    deck[0].color = {1};
    deck[0].shape = {1};

    cout << r1.length << endl;
    cout << r1.breadth << endl;

    cout << s.roll <<endl;
    cout << s.dept <<endl;

    cout << p.face <<endl;

    cout << deck[0].face << endl;
    return 0;
}

//machines can access 4 bytes at a time in the memory, but use as required. 
// This adjustment in the memory is called Padding. 
// In structures, padding is done


//another way to declare variable
struct square 
{
    int length;
    int breadth;

}s1,s2; //global variables (because delcared outside the function)

