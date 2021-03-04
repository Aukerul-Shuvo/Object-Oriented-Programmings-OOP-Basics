#include<bits/stdc++.h>

using namespace std;

int main()
{
    string name;
    cin>>name;

    for(int i=0;i<=sizeof(name);i++)
    {
        if(&name[i]=="u")
        {
            &name[i]=NULL;
        }
    }
    cout<<name;
}
