#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int a);

int main()
{
    int n;
    cout << "Enter a number between 1 and 100,000,000: ";
    cin >> n;

    //Makes sure that the input data is in correct bracket
    while (n < 1 || n > 100000000) {
        cout << "Invalid input! Try again!" << endl;
        cin >> n;
    }

    //This loop checks all numbers if they are doubleTwinned
    for (int x = 4; x < n; ++x) {

        //Checks if the number is exact square number
        int root = sqrt(x);
        if (root * root != x) {
            continue;
        }

        //Checks if the number is Twinned (the sum of two Prime numbers)
        bool doubleTwinned = false;
        for (int p1 = 2; p1 < x; ++p1) {
            if (isPrime(p1)) {
                int p2 = x - p1;
                //Checks if the number is DoubleTwinned
                if (p2 > p1 && isPrime(p2)) {
                    doubleTwinned = true;
                    break;
                }
            }
        }

        //if the number is DoubleTwinned gets printed
        if (doubleTwinned) {
            cout << x << endl;
        }
    }

    return 0;

}

//This function will check if a number is prime
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
