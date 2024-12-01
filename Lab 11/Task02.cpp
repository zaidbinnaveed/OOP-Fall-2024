#include <iostream>
#include<string>
using namespace std;

template <typename T>
void sortArray(T* arr, int size)
{
    for(int i = 0; i< size; i++)
    {
        for(int j = i + 1; j < size; j++)
        {
            if(arr[j] < arr[i])
            {
                T temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    for(int i =0; i< size; i++)
    {
        cout << " " << arr[i];
    }
}

int main()
{
    int arr[5] = {23,12,13,34,20};
    sortArray(arr, 5);
    cout<< endl << "Sorting array of double datatypes:\n";
    double arr1[3] = {2.321, 1.0987, 1.9876};
    sortArray(arr1, 3);
    
    return 0;
}
