#include<iostream>
using namespace std;

int main()
{
    int i, j, arrayLength, target;
    bool found = false;

    cin >> arrayLength;

    int arr[arrayLength];

    for(i=0; i<arrayLength && !found; i++){
        cin>> arr[i];
    }
    cin>> target;
    for (i = 0; i < arrayLength && !found; i++)
    {
       for (j = 1; j < arrayLength; j++){
           if(arr[i]+arr[j] == target && i != j){
       	        cout << arr[i] << " " << arr[j];
       	        found = true;
            }
       }
    }


    return 0;
}