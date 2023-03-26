#include <math.h>
#include <iostream>
#include <vector>
#include <utility>
#include <numeric>

using namespace std;

void missingAndRepeating(vector<int> &A, int n)
{
    int repeat = 0;
    //using negation markign technique, found the repeating number

    for (int i = 0; i < n; i++)
    {
        int num = abs(A[i]);
        if (A[num - 1] > 0)
            A[num - 1] *= -1;
        else
            repeat = abs(A[i]);
    }

    //made the array positive again
    for (int i = 0; i < n; i++)
    {
        if (A[i] < 0)
            A[i] *= -1;
    }

    //Using sum of actual 1..n, sum of given vector and repeating number
    //find the missing number
    
    int actual_sum, sum, missing_num = 0;

    actual_sum = n * (n + 1) / 2;
    sum = accumulate(A.begin(), A.end(), 0);
    missing_num = actual_sum - (sum - repeat);

    cout << "Missing number is " << missing_num << "\n";
    cout << "Repeated number is " << repeat;
}

int main()
{
    vector<int> input;
    input.push_back(1);
    input.push_back(2);
    input.push_back(3);
    input.push_back(2);
    input.push_back(5);
    int n = input.size();
    missingAndRepeating(input, n);
    return 0;
}
