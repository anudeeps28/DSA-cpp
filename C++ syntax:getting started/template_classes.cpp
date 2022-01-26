#include<iostream>
using namespace std;

class Arithmatic{ 
private:
    int a; //these are class members
    int b;
public:
    Arithmatic(int a, int b); //these are parameters
    int add();
    int sub();
};

Arithmatic ::Arithmatic(int a, int b){
    this ->a = a;
    this ->b = b;

}

int Arithmatic :: add(){
    int c;
    c = a+b;
    return c;

}

int Arithmatic :: sub(){
    int c;
    c = a-b;
    return c;
}

////////////////////////////////////////////////////////////////////
//changing existing class into generic class

template<class T>
class Arithmatic{
private:
    T a; //these are class members
    T b;
public:
    Arithmatic(T a, T b); //these are parameters
    T add();
    T sub();
};

 template <class T>
Arithmatic <T> ::Arithmatic(T a, T b){
    this ->a = a;
    this ->b = b;

template <class T>
T Arithmatic <T> :: add(){
    int c;
    T c = a+b;
    return c;

template <class T>
int Arithmatic <T> :: sub(){
    int c;
    T c = a-b;
    return c;
}

int main (){
    Arithmatic <int> ar(10,5);
    cont<<ar.add();
    Arithmatic <float> ar1(2.5,1.5);
    cout<<ar1.add()
}