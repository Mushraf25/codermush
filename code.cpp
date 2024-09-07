#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <string>
using namespace std;

string helper_func(long long n)
{
     while(n)
    {
        long long rem=n%10;

        if(rem!=4 || rem!=7)
        {
            return "NO";
        }

        n=n/10;
    }
    return "YES";
}

int main() {
    
    long long n;
    cin >> n;

    vector<int> arr;

    for(int i=0;i<n;i++)
    {
        long long temp;
        cin >> temp;
        arr.push_back(temp);
    }

    int i=0,j=1,curr_len=1,max_len=1;

    while(i<n && j<n)
    {
        while(j<n && arr[i]<arr[j])
        {
            
            curr_len++;
            j++;
            i++;
            
        }
        i=j;
        j=i+1;
        max_len=max(max_len,curr_len);
        curr_len=1;
    }

    cout << max_len << endl;
    return 0;
}