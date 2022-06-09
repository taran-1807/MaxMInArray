#include <iostream>
#include <climits>

using namespace std;

int getMax(int num[], int size){
    
    int max = INT_MIN;
    
    for(int i=0; i<size; i++){
        if(num[i]>max){
            max = num[i];
        }
    }
    return max;
}

int getMIn(int num[], int size){
    
    int min = INT_MAX;
    
    for(int i=0; i<size; i++){
        if(num[i]<min){
            min = num[i];
        }
    }
    return min;
}

int main()
{
    int size;
    cout<<"Enter the size of the array: "<<endl;
    cin>>size;

    int num[100];
    
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<size; i++){
        cin>>num[i];
    }
    
    cout<<"Max: "<< getMax(num, size) <<endl;
    cout<<"Min: "<< getMIn(num, size) <<endl;
    
    return 0;
}
