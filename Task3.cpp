#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    const int maxLength = 50;

    char firstName[maxLength];
    char lastName[maxLength];
    char fullName[2 * maxLength];


    cout << "Enter your first name: ";
    cin.getline(firstName, maxLength);


    cout << "Enter your last name: ";
    cin.getline(lastName, maxLength);


   strcpy(fullName, firstName);
   strcat(fullName, " ");
   strcat(fullName, lastName);

    cout << "Full name: " << fullName << endl;

    return 0;
}

