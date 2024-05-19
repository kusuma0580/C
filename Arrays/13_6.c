/*For the following set of sample data, compute the standard deviation and the mean.

-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2
The formula for standard deviation is
where xi is the data item and (overline x) is the mean. 

sqrt (( xi - overline x )^ 2) / n)

*/
#include <stdio.h>
#include <math.h>

int main() {
    int data[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    int n = sizeof(data) / sizeof(data[0]);

    double mean = 0.0;
    for (int i = 0; i < n; ++i) {
        mean += data[i];
    }
    mean /= n;

    double sum_squared_difference = 0.0;
    for (int i = 0; i < n; ++i) {
        double diff = data[i] - mean;
        sum_squared_difference += diff * diff;
    }
    double variance = sum_squared_difference / n;
    double standard_deviation = sqrt(variance);

    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", standard_deviation);

    return 0;
}
