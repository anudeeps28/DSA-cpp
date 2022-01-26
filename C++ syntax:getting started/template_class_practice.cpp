#include<iostream>
#include<stdio.h>
using namespace std;

template<class T>
class Arithmetic{
private:
    T a;
    T b;
public:
    Arithmetic (int a, int b);
    T add();
    T sub();
};

template<class T>
Arithmetic<T>:: Arithmetic(int a, int b){
    this->a = a;
    this->b=b;

}
template<class T>
T Arithmetic<T>::add()
{
    T c;
    c=a+b;
    return c;

}
template<class T>
T Arithmetic<T> ::sub(){
    T c;
    c=a-b;
    return c;

}

int main(){

    Arithmetic<int> ar(30,20);
    cout<<"Add" <<ar.add()<<endl;
    cout<<"Subtract" <<ar.sub()<<endl;

    return 0;
}

    //first write the code normally error free and then convert to template. 