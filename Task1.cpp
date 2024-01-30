#include<iostream>

using namespace std;

int main()
{
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];


    for(int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int sum = 0;

    for(int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }

    double avg = sum/size;

    cout << "The average is: " << avg << endl;

    return 0;
}

