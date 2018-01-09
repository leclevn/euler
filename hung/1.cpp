#include <iostream>

using namespace std;

int main()
{
    // Alogrithm: https://en.wikipedia.org/wiki/Arithmetic_progression#Sum
    
    int n = 999; // below 1000
    int sum = 0;
    int numberOfItems = 0;
    
    // sum of multiple of 3 
    numberOfItems = n / 3;
    sum += (numberOfItems * (3 + numberOfItems * 3)) / 2;

    // sum of multiple of 5 
    numberOfItems = n / 5;
    sum += (numberOfItems * (5 + numberOfItems * 5)) / 2;
    
    // sum of multiple of 15 - find the sum of multiple 3 and 5
    numberOfItems = n / 15;
    sum -= (numberOfItems * (15 + numberOfItems * 15)) / 2;
    
    cout << "Sum = " << sum;
    
    return 0;
}
