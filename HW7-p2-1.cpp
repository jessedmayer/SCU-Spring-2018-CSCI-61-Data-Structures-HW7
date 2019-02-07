#include <iostream>

using namespace std;

void insertionsort(int a[], int n){
    for(int i = 1; i < n ; i++){
        int temp = a[i];
        int m = i;
        while(temp <= a[m-1] && m > 0){
            a[m] = a[m-1];
            m--;
        }
        a[m] = temp;
    }
}



int main() {

    int a[]={3,2,5,4,9,7};
    insertionsort(a,6);
    cout << a[0] <<" ";
    cout << a[1] <<" ";
    cout << a[2] <<" ";
    cout << a[3] <<" ";
    cout << a[4] <<" ";
    cout << a[5] <<" ";

    return 0;
}