#include<iostream>
using namespace std;

template<typename T, int N>
class Array
{
private:
    T m_Array[N];
public:
    int GetSize() const { return N; }
};

int main()
{
    Array<std::string, 50> array;
    cout<<array.GetSize()<<endl;
    return 0;
}