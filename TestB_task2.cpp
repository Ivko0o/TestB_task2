#include <iostream>

using namespace std;

bool isPrime(int a);

int main()
{
    int firstPrime = 0;
    int secondPrime = 0;
    int n = 0;

    cout << isPrime(9);

}

bool isPrime(int a) {

    int count = 0;
    
    if (a <= 1) {
        return false;
    }

    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            count++;
        }
    }

    if (count > 2) {
        return false;
    }

    return true;

}