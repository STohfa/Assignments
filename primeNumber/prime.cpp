#include<stdio.h>
#include<iostream>

using namespace std;

bool isPrime(int num){
    if(num <= 1){
        return false;
    }
    if(num == 2 || num == 3){
        return true;
    }
    if(num % 2 == 0){
        return false;
    }
    int i;
    for(i = 3; i * i <= num; i = i + 2){
        if(num % i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    int num;

    cin >> num;

    bool res = isPrime(num);

    cout << res;

    return 0;
}