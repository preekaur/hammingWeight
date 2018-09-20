#include <iostream>

using namespace std;

int hammingWeight(int x);

int main(){

    int arr[] = {7, 8 ,9};
    int ans[] = {3,1,2};
    for (int i = 0; i < 3; i++){

        cout << boolalpha << (hammingWeight(arr[i]) == ans[i]) << "\n";

    }

}

int hammingWeight(int x){
    int count = 0;
    for(int i = 0; i < 32; i++){
        count += (x & 1);
        x = x >>1;
    }
    return count;
}