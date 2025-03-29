#include <iostream>
#include <cmath>
using namespace std;

// Q1
int factorial(int x) {

    if (x == 0 || x == 1) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}

// Q2 
double sine_x(double x, int n) {

    double x_radians = (x * M_PI) / 180.0;
    double sine_result = 0;
    
    for (int i = 0; i < n; ++i) {
        sine_result += pow(-1, i) * pow(x_radians, 2*i + 1) / factorial(2*i + 1);
    }
    
    return sine_result;
}

// Q3 
int result = 0;  

void recursive_sum(int n) {

    if (n <= 0) {
        return;
    } else {
        result += n;
        recursive_sum(n - 1);
    }
}

int main() {

    cout << "5 : " << factorial(5) << endl; 

    // Q2
    cout << "30 sin(10): " << sine_x(30, 10) << endl; 

    // Q3
    recursive_sum(5);
    cout << "1-5: " << result << endl; 

    return 0;
}
