
#include<iostream>
using namespace std;

// Function having parameters as
// references
void swap(int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
    cout<<first<<" "<<second<<endl;
}

// Driver function
int main()
{
    // Variables declared
    int a = 2, b = 3;

    // function called
    swap(a, b);

    // changes can be seen
    // printing both variables
    cout<< a << " " << b;
    return 0;
}