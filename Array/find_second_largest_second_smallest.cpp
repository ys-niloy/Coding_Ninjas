//https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1




int getSecondLargest(vector<int> arr, int n)
{
    int largest = arr[0];
    int sLargest = -1;

    for(int i = 1; i< n; i++)
    {
        if(arr[i] > largest)
        {
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > sLargest)
        {
            sLargest = arr[i];
        }
    }

    return sLargest;
}


int getSecondSmallest(vector<int> arr, int n)
{
    int smallest = arr[0];
    int sSmallest = INT_MAX;

    for(int i = 1; i< n; i++)
    {
        if(arr[i] < smallest)
        {
            sSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < sSmallest)
        {
            sSmallest = arr[i];
        }
    }

    return sSmallest;
}


vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int secondLargest = getSecondLargest(a, n);
    int secondSmallest = getSecondSmallest(a, n);


    return {secondLargest, secondSmallest};
}
