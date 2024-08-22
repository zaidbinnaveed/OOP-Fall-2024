#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int tar_i;
    int tar_j;
    int found = 0;
    cout << "Enter elements:";
    for(int i=0;i<5;i++)
    {
        cin >> arr[i];
    }
    int tar;
    cout << "Enter target number: ";
    cin >> tar;
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(arr[i]+arr[j]==tar)
            {
                tar_i= i;
                tar_j= j;
                found = 1;
                break;
            }
            else
            {
                found = 0;
            }
        }
        if(found == 1)
        {
            break;
        }
    }
    if(found == 1)
    {
        cout << "Indices:"<<tar_i<<","<<tar_j<<"\n";
    }
    else
    {
        cout<< "Sum equating to target not found!";
    }
    return 0;
}
