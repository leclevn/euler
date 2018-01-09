#include <iostream>

using namespace std;

/******************************************************************************
Fn = Fn-1 + Fn-2
   = Fn-2 + Fn-3 + Fn-3 + Fn-4 
   = Fn-2 + 2Fn-3 + Fn-4
   = Fn-3 + Fn-4 + 2Fn-3 + Fn-4
   = 3Fn-3 + 2Fn-4  
   = 3Fn-3 + Fn-4 + Fn-5 + Fn-6
   = 4Fn-3 + Fn-6 
   
  [Fibonacci: 1 , 1 , [2] , 3 , 5 , [8] , 13 , 21 , [34] , 55 , 89 , [144], ... ]
  
  We can see every [third] Fibonacci Number is even, 
  So if Fn is even then Fn-3 is even and Fn-6 is also even. 
  
  Let Fn be xth even element and mark it as EFx (Even Fibonacci).
  If Fn is EFx, then Fn-3 is previous even number i.e. EFx-1 
  and Fn-6 is previous of EFx-1 i.e. EFx-2 
  So Fn = 4Fn-3 + Fn-6 which means, EFx = 4EFx-1 + EFx-2
******************************************************************************/    

// Returns sum of even Fibonacci numbers which are
// less than or equal to given limit.
long calcEvenFiboSum(long limit) {
    
    if (limit < 2) {
        return 0;
    }
    
    // Initialize first two even numbers
    long ef1 = 0, ef2 = 2;
    
    // Sum of first two even numbers
    long sum = ef1 + ef2;
 
    // Calculating sum of even Fibonacci value
    while (ef2 <= limit) {
        
        // Get the next even value of Fibonacci sequence
        long ef3 = 4 * ef2 + ef1;
 
        // If it exceeds the limit -> break loop
        if (ef3 > limit) {
            break;
        }
        
        // Get the next even number and sum
        ef1 = ef2;
        ef2 = ef3;
        sum += ef2;
    }
 
    return sum;
}

int main() {
    
    long limit = 4000000;
    cout << "Sum of Even Fibonacci: " << calcEvenFiboSum(limit);
    return 0;
}
