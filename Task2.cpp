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

    int minval = arr[0];
    int maxval = arr[0];

    for(int i=1; i<size; i++ )
    {
        if(arr[i]<minval)
        {
            minval = arr[i];
        }
        if(arr[i]>maxval)
        {
            maxval = arr[i];
        }
    }

    cout<<"The MIN value is: "<<minval<<endl;
    cout<<"The MAX value is: "<<maxval<<endl;


    return 0;
}
