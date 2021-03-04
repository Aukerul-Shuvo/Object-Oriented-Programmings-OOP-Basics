#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <char,int> mp;
    map<char,int> :: iterator itr;


    int c,item;
    char s;

    while(1)
    {
        printf("Enter choice:\n1. Insert\n2.Delete\n3.Size\n4.Find element at e key\n5.Display by iterator\n6.Count elements at a specific key:\nClear\n7.Exit\n");
 printf("Enter your choice:\t");

    scanf("%d",&c);
    switch(c)
    {
    case 1:
        cout<< "Enter value:\t";
        cin>>item;
        cout<<"Enter key\t";
        cin>>s;

        mp.insert(pair<char,int>(s,item));
        break;

    case 2:
        cout<<"Enter key to delete";
        cin>>s;
        mp.erase(s);
        break;

    case 3:
        cout<<"Size of map: "<< mp.size()<<"\n";
        break;

    case 4:
        cout<<"Enter the key key to find the value:\n";
        cin>>s;
        if(mp.count(s) != NULL)
            cout<<mp.find(s)->second<<"\n";
        else cout<<"found nothing\n";
        break;

    case 5:
        cout<<"Displaying by iterator:\n";
        for(itr=mp.begin();itr!=mp.end();itr++)
        {
            cout<<(*itr).first<< "====="<<(*itr).second<<endl;

        }
        break;
    case 6:
        cout<<"Enter the  value at which number of values to be counted: ";
        cin>> s;
        cout<<mp.count(s)<<endl;
        break;
    case 7:
        exit(1);
        break;
        default: cout<<"Wrong choice!\n";
    }




    }




    return 0;
}
