/*Kristen loves playing with and comparing numbers. She thinks that if she takes two different positive numbers, the one whose digits sum to a larger number is better than the other. If the sum of digits is equal for both numbers, then she thinks the smaller number is better. For example, Kristen thinks that  is better than  and that  is better than .

Given an integer, , can you find the divisor of  that Kristin will consider to be the best?

Input Format

A single integer denoting .

Constraints

Output Format

Print an integer denoting the best divisor of .

Sample Input 0

12
Sample Output 0

6*/


#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n=n/10;
    }
    return sum;
}

int main()
{
    int n;cin>>n;
    int best=1;
    for(int i=1;i <=n;i++){
        if(n%i==0 && digit_sum(i)>digit_sum(best)){
            best=i;
        }
    }
    cout << best;
}
