//https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=1


int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.

	int count = 0;

	for(int i = 0; i< n; i++)
	{
		if(arr[i] != arr[i+1])
		{
			count++;
		}
	}

	return count;
}
