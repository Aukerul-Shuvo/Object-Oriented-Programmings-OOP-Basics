#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v;
    vector <int> :: iterator itr;

    int choice,x;

   x:  printf("Enter choice:\n1. Insert\n2.Delete\n3.Size\n4.Display by index\n5.Display by iterator\n6.Clear\n7.Exit\n");
    printf("Enter your choice:\t");

    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the value:\t");
        int item;
        scanf("%d",&item);
        v.push_back(item);
        printf("Displaying using iterator:\n");
        for(itr=v.begin(); itr!=v.end();itr++)
        {
            printf("%d\t", *itr);

        }
        printf("\n");
        goto x;
        break;
    case 2:
        printf("Deleting the last element.\n");
        v.pop_back();
        printf("Displaying using iterator:\n");
        for(itr=v.begin(); itr!=v.end();itr++)
        {
            printf("%d\t", *itr);

        }
        printf("\n");goto x;
        break;
    case 3:
        printf("Size of the vector: %d\n",v.size());
        goto x;
        break;
    case 4:
        printf("Displaying using index:\n");
        for(int i=0; i<v.size();i++)
            printf("%d\t",v[i]);

    printf("\n");
    goto x;
    break;
    case 5:
        printf("Displaying using iterator:\n");
        for(itr=v.begin(); itr!=v.end();itr++)
        {
            printf("%d\t", *itr);

        }
        printf("\n");
        goto x;
        break;
    case 6:
        v.clear();
        printf("Displaying using iterator:\n");
        for(itr=v.begin(); itr!=v.end();itr++)
        {
            printf("%d\t", *itr);

        }
        printf("\n");
        goto x;
        break;
    case 7:
        exit(1);
        break;
    default:
        printf("Wrong choice!\n");
        goto x;


    }




    return 0;
}
