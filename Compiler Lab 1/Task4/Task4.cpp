#include<iostream>

using namespace std;

int main()
{
    int n;
    cout<<"The Number Inter"<<endl;
    cin>>n;

    if(n<0)
    {
        cout<<"Factorial is not defined for negative "<<endl;

    }
    else
    {
        int fac = 1;
        for(int i= 1; i<=n; i++)
        {

            fac = fac * i;
        }

        cout<<"Factorial of "<< n <<" is: "<<fac<<endl;
    }
    return 0;
}
