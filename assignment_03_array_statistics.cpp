// =============================================================================
// PROGRAMMING FUNDAMENTALS — Assignment 3
// =============================================================================
//
// TASK: Array Statistics Calculator
//
// Write a C++ program that reads a collection of numbers from the user
// and computes key statistical values using separate functions.
//
// -----------------------------------------------------------------------------
// EXPECTED INPUT / OUTPUT EXAMPLE
// -----------------------------------------------------------------------------
//
//   How many numbers? 5
//   Enter number 1: 4
//   Enter number 2: 7
//   Enter number 3: 2
//   Enter number 4: 9
//   Enter number 5: 1
//
//   Results:
//   Sum:     23
//   Average: 4.6
//   Maximum: 9
//   Minimum: 1
//
// -----------------------------------------------------------------------------
// REQUIREMENTS
// -----------------------------------------------------------------------------
// - You MUST implement each calculation in its own function (see scaffold).
// - You may NOT use any standard library functions like accumulate(), max(),
//   or min(). Implement the logic yourself using loops.
// - N must be a positive integer. If the user enters 0 or a negative number,
//   print an error message and stop.
//

//
// =============================================================================
// YOUR CODE BELOW — remove the // symbols from the scaffold and fill it in
// =============================================================================

#include <iostream>
using namespace std;
int calculatesum(int numbers {}, int n){
    intsum =0;
    for (int m = 0; m < n; m++){
        sum += numbers[m];
    }
    return sum;
}
double calculateaverage(int numbers[], int n){
    int sum = calculatesum(numbers, n);
    return (double)sum / n;
}
int findmaximum(intnumbers[], int n){
    int maximum = numbers[0];
    for ( int m = 1; m < n; m++){
        if (numbers[m] > maximum){
            maximum = numbers[m];
        }
    }
    return maximum;
}
intmain(){
    int n;
cout << "how many numbers?";
cin >> n;
if (n <= 0){
    cout << "error: number of values must be positve."<<end1;
    return 0;
}
int numbers[n];
for (int m = 0; m < n; m++){
    cout << "enter number" << m + 1 << ":";
cin >> numbers[m];
}
cout <, "\nresults" end1;
cout << "sum:" <<
calculatesum(numbers, n) << end1;
cout << "average:" << 
calculateaverage(numbers, n) << end1;
cout << "maximum:" <<
findmaximum(numbers, n) << end1;
cout << " minimum:" <<
findminimum(numbers, n) << end1;
return 0;
}
