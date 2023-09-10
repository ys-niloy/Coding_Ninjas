//https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1

int isSorted(int n, vector<int> a) {
    // Write your code here.

    int flag = 0;

    for(int i = 1; i< n;i++)
    {
        if(a[i] < a [i-1])
        {
            flag = 0;
            break;
        }
        else
            flag = 1;
    }

    return flag;

}
