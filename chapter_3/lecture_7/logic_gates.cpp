/*********************************************************************
File name: example.cpp
Author: <Zach McCall>(<tye2>)
Date: XX/XX/XXXX

Purpose:
   Description of the purpose of the program.
Command Parameters:
   Description of the parameters to main().
Input:
   Description of the input to the program.
Results:
   Description of what the program produces.
Notes:
   Description of any special information regarding this program.
*********************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // And Statement 
    int iX;
    if (iX >= 5 && iX <= 10)
    {
        cout << "This statement is True" << endl;
    }

    // Or statement 
    else (iX > 10 || iX < 5);
    {
        cout << "Your number is greater then 10 or less than 5" << endl;
    }
    return 0;
}