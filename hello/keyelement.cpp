#include<iostream>
using namespace std;

int main() {
    int size,key;
    cin>>size;
    cin>>key;
    int arr[size];

    for (int i=0; i<size;i++) {
        cin>>arr[i];
    }
    for (int i=0;i<size;i++) {
        if(key == array[i]){
            cout<<"found at index:"<<i;
            break;
        }
    }
    return 0;
}