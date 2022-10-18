#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {1, 2, 3, 4};
    cout << v1.capacity() << endl;
    v1.push_back(9);
    v1.push_back(10);
    v1.push_back(10);
    v1.push_back(10);
    v1.push_back(20);
    cout << v1.capacity() << endl;
    v1.insert(v1.end(), 5);
    v1.erase(v1.begin());
    cout << v1[0] << " " << v1[8];
    // ierating through vector
    for (auto itr = v1.begin(); itr != v1.end(); itr++)
    {
        cout << *itr << endl;
    }
}