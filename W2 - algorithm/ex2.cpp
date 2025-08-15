#include<iostream>
using namespace std;

//inital declaration
double computeAverage(int arr[], int size);
int findMin(int arr[], int size);
int findMax(int arr[], int size);

int main(void){

    // Declare Varibales
    int size;

    cout << "Enter Array Size: " << endl;
    cin >> size;
    int arr[size];

    //Input array values
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    //Call Functions
    cout << "Average: " << computeAverage(arr,size) << endl;
    cout << "Min: " << findMin(arr,size) << endl;
    cout << "Max: " << findMax(arr,size) << endl;

    return 0; // Code Executed successfully
}

// Declare Functions
double computeAverage(int arr[], int size){
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum / size;
}


int findMin(int arr[], int size){
    int minVal = arr[0];

    for (int i = 0; i < size; i++)
    {
       if (arr[i]< minVal)
       {
         minVal = arr[i];
       }
       
    }
       
    return minVal;
}

int findMax(int arr[], int size){
    int maxVal = arr[0];

    for (int i = 0; i < size; i++)
    {
       if (arr[i] > maxVal)
       {
         maxVal = arr[i];
       }
       
    }
       
    return maxVal;
} 