#include <iostream>
#include <cmath>

using namespace std;

int main() {
    //  TASK 1

    int num, current, steps;

    while (true) {
        cout << "Please enter a positive integer greater than 9: ";
    cin >> num;
    if (num > 9) break;
        cout << "Number must be greater than 9!" << endl;
    }

    steps = 0;
    current = num;
    cout << current;

    while (current > 9) {
        int total = 0;
        int temp = current;
        while (temp > 0) {
        total += temp % 10;
        temp /= 10;
    }
    cout << "->" << total;
    current = total;
    steps++;
    }

    cout << "\nFinal value: " << current << endl;
    cout << "Total steps: " << steps << endl;



    //  TASK 2

    int fizzBuzzCounter = 0;
    int fizzCounter = 0;
    int buzzCounter = 0;
    int number = 0;
    while (true) {
        cout << "Please enter a number between 10 and 100: ";
        cin >> number;
        if (number < 10 || number > 100) {
            cout << "Invalid input. Please enter a number between 10 and 100: ";
            continue;
        }
        break;
    }

    for (int i = 1; i <= number; i++) {
        if (i % 5 == 0 && i % 3 == 0) {
            cout << "FizzBuzz" << endl;
            fizzBuzzCounter++;
        }
        else if (i % 3 == 0) {
            cout << "Fizz" << endl;
            fizzCounter++;
        }
        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
            buzzCounter++;
        }
        else if (i % 7 == 0) {
            cout << "(" << i << " is skipped)" << endl;
        }
        else {
            cout << i << endl;
        }
    }

    cout << "---Summary---";
    cout << "Fizz count: " << fizzCounter;
    cout << "Buzz count: " << buzzCounter;
    cout << "FizzBuzz count: " << fizzBuzzCounter;


    // TASK 3

    int n;

    while (true) {
        cout << "\nPlease enter a number between 3 and 9: ";
        cin >> n;
        if (n >= 3 && n <= 9) break;
            cout << "Invalid input! Number must be between 3 and 9." << endl;
    }

    for (int i = 1; i <= 2*n - 1; i++) {
        int k = n - abs(n - i);
        for (int j = 1; j <= k; j++) {
        cout << j;
    }

        cout << endl;
    }

    return 0;

}



