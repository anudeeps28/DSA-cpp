#include<iostream>
using namespace std;

template <class T>
class Arithmatic
{ 
private:
   T int a; //these are class members
   T int b;
public:
    Arithmatic(T int a, T int b); //these are parameters
    int add();
    int sub();
};
template <class T>
Arithmatic <T> ::Arithmatic(T a, T b){ // constructor
    this->a = a;
    this->b = b;

}
 template class<T>
int Arithmatic :: add(){
    T int c;
     c = a+b;
    return c;

}

int Arithmatic :: sub(){
    int c;
    c = a-b;
    return c;
}

//---------------------------------------------------------------------------

// using the same class for different data types = templates = generic class

//changing existing class into generic class
template<class T>
class Arithmatic
{
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