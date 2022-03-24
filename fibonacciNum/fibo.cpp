#include<iostream>

using namespace std;

long long fibo(int num){
    long long prev1 = 0, prev2 = 1, i, curr;
    if( num == 0){
        return 0;
    }
    if(num == 1){
        return 1;
    }
    for(i = 2; i <=num; i++){
        curr = prev1 + prev2;
        prev1 = prev2;
        prev2 = curr;
    }
    return curr;
}

int main()
{
    int num;

    cin >> num;

    cout << fibo(num);

    return 0;
}