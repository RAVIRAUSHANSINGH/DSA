// USING EXTRA SPACE

//   SOLUTION 1

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int arr[n];
        int ans=0;
        int maxi=prices[n-1];
        cout<<maxi<<endl;
        for(int i=n-1;i>=0;i--){
            arr[i]=max(maxi,prices[i]);
            maxi=arr[i];
            
        }
        for(int i=0;i<n;i++){
            int diff=arr[i]-prices[i];
            ans=max(ans,diff);
        }
        return ans;
        
    }
};

// WITHOUT EXTRA SPACE

// SOLUTION 2

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            int diff=prices[i]-min;
            profit=max(profit,diff);
        }
        return profit;
    }
};