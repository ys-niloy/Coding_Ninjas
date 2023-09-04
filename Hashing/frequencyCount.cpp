vector<int> countFrequency(int n, int x, vector<int> &nums){
    // Write your code here.
    
    vector<int> hash(n,0);
    for(int i = 0; i< n; i++)
    {
        hash[nums[i] - 1]++;
    }

    return hash;

}

// https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1
