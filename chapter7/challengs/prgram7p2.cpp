// This program asks for the number of hpurs worked 
// by six employees. It stores the value in an array.
#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6;     // Number of employees
    int hours[NUM_EMPLOYEES];        // Each employees hours
    int count;                       // Loop counter

    // Input the hours worked.
    for( count = 0; count < NUM_EMPLOYEES; count++)
    {
        cout << "Enter the hoours worked by employee "
             << (count + 1) <<" :";
        cin >> hours[count];
    }

    // Display the contents of the array.
    cout << " The hours you entered are: ";
    for ( count = 0; count < NUM_EMPLOYEES; count++)
        cout << " " << hours[count];
    cout << endl;
    return 0;
}