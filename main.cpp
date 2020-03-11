#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int arr[n];
    int temp = 0;
    //First of all, get the size of the array
    cout << "Enter the size of the array : ";
    cin >> n;

    //Get the elements in the array
    cout << "Enter the elements in the array : ";
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    //start the sort
    for(int m = 0; m<n; m++){
        for(int o = m+1; o<n; o++){
            if(arr[o]<arr[m]){
                    //swapping the elements
                temp = arr[m];
                arr[m] = arr[o];
                arr[o] = temp;
            }
        }
    }

    //printing the sorted array
    for(int r =0; r<n; r++){
        cout<<arr[r]<<"\t";
    }
    return 0;
}
