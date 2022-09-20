#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Vertex
{
    int a,b,c;
};

int main () {
    vector<int> data;
    
    for (int i = 0; i < 10; i++) {
        data.push_back(i);
    }

    for (int i = 0; i < 10; i++) {
        cout << data[i] << endl;
    }
    
    // ----------------------------- // 
    
    vector<Vertex> vertices;

    vertices.push_back({1,2,3});
    vertices.push_back({4,5,6});

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << vertices[i][j] << endl;
        }
    }

    /*

    invalid operands to binary expression ('std::ostream' (aka 'basic_ostream<char>') and 'std::__vector_base<Vertex, std::allocator<Vertex>>::value_type' (aka 'Vertex'))
        cout << vertices[i] << endl;
        ~~~~ ^  ~~~~~~~~~~~
        
    */
}