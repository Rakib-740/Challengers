#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endll '\n'

void maximum_number(vector<int> & arr)
{
    int max = arr[0];
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The maximum number : " << max << endll;
}

void minimum_number(vector<int> & arr)
{
    int min = arr[0];
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "The minimum number : " << min << endll;
} 

bool is_prime(int n)
{
    if(n <= 1) return false;
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0) return false;
    }
    return true;
}

void prime(vector<int> & arr)
{
    int count = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(is_prime(arr[i]))
        {
            count++;
        }
    }
    cout << "The number of prime numbers : " << count << endll;
}

bool is_palindrome(int n)
{
    int original = n, reversed = 0;
    while(n > 0)
    {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return original == reversed;
}

void palindrome(vector<int> & arr)
{
    int count = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(is_palindrome(arr[i]))
        {
            count++;
        }
    }
    cout << "The number of palindrome numbers : " << count << endll;
}

int count_divisors(int n)
{
    int count = 0;
    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }
    return count;
}

void max_divisor(vector<int> & arr)
{
    int max_div = 0;
    int result = 0;

    for(int i = 0; i < arr.size(); i++)
    {
        int div_count = count_divisors(arr[i]);

        if(div_count > max_div)
        {
            max_div = div_count;
            result = arr[i];
        }
        else if(div_count == max_div)
        {
            result = max(result, arr[i]);
        }
    }

    cout << "The number that has the maximum number of divisors : " << result << endll;
}

int main() {
    fast;
    int n; 
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    maximum_number(arr);
    minimum_number(arr);
    prime(arr);
    palindrome(arr);
    max_divisor(arr);

    return 0;
}
