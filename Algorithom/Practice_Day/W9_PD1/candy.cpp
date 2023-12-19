#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> ratings =  {1,2,2};
    int n = ratings.size(), sum = 0;
    vector<int> candies(n, 1);

    for (int i = 1; i < n; i++) {
        if(ratings[i] > ratings[i-1]) {
            candies[i] = candies[i-1] + 1;
        }
    }

    for (int j = n - 2; j >= 0; j--) {
        if(ratings[j] > ratings[j+1]) {
            candies[j] = max(candies[j], candies[j+1] + 1);
        }
    }

    for (int i = 0; i < n; i++)
        sum += candies[i];
      
    cout<<sum<<endl;

    

    return 0;
}