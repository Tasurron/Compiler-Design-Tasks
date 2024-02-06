#include<bits/stdc++.h>

using namespace std;

void isComment(string line)
{
    if(line.size()>=2 && line[0] == '/' && line[1]=='/')
    {
        cout<<"It is a single line Comment"<<endl;
        return;
    }

    if(line.size()>=4 && line[line.size()-2] == '*' && line[line.size()-1] == '/' && line[0] == '/' && line[1] == '*')
    {
       cout<<"It is a multi line Comment"<<endl;
        return;
    }
    cout<<"It is not Comment"<<endl;

}

int main()
{
    string line;
    cout<<"Enter the string : "<<endl;
    cin>>line;
    isComment(line);

    return 0;

}
