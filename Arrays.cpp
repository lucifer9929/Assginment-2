#include <iostream> 

using namespace std; 

int main () {

    int a [5];

    cout << "Enter your 5 arrays : \n";

    cout << "Your entered values is : \n";


    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];

        
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "\n";
        cout << "\t" << a[i];
    }

    return 0;
}