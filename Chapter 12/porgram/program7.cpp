// This program demonstrates how the >> operator should not 
// be used to read data that contain whitespace charactes
// from a file.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string input;
    fstream nameFile;

    // Open the file in input mode.
    nameFile.open("murphy.txt", ios::in);

    // If the file was successfully opened, continue.
    if(nameFile)
    {
        // Read the file contents
        while (nameFile >> input)
        {
            cout << input;
        }
        // Close the file.
        nameFile.close();
    }
    else
    {
        cout << " ERROR: Cannot open file. \n";
    }
    return 0;
}