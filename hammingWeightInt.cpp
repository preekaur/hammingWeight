#include <iostream>
#include <bitset>

using namespace std;

#define SIZE_OF_INT = 4;

int hammingWeight(int x);

bitset<8> mask(int size, int num);

int main(){
    
    int arr[] = {7,8,9};
    int ans[] = {3,1,2};

    char c[] ={'a', 'b', 'c'};

    int size = sizeof(char);
    // for (int i = 0; i < 3; i++){
    //     cout << boolalpha << (hammingWeight(arr[i]) == ans[i]) << "\n";
    // }

    for(int i = 1; i <= (size * 8 / 2) ; i++){
        
        cout << mask(size, i) << "\n";
        
    }
}

bitset<8> mask(int size, int num){
    int n = size * 8;
    int mask = 0;
    int down = num;
    int up = 0;

    for(int i = 0; i < n-1; i++){
        if(down > 0){
            mask = mask<<1;
            down--;

        }
        else if(up < num){
            mask++;
            mask = mask << 1;
            up++;
        }
        else{
            down = up;
            up = 0;
            i--;
        }
    }
    mask++;
    return mask;    

}