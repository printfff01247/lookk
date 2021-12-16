#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int binary_search(int arr[], int k, int sz)
{
	//算法的实现
	
	int left = 0;
	int right = sz -1;

	while(left <= right)
	{
		int mid = (left + right)/2;//中间元素的下标
		if(arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;
		}
	
	}

	return -1;

}

int main()
{
	//二分查找
	//在一个有序数组中查找一个具体数字
	//找到了返回，数字的下标，找不到返回-1

	int arr [] ={1,2,3,4,5,6,7,8,9,10};
	int k =7; 
	int sz = sizeof(arr)/sizeof(arr[0]);
	int ret = binary_search(arr,k,sz);
	if(ret == -1)
	{
		printf("未找到\n");
	
	}
	else
	{
		printf("找到，下标： %d\n", ret);
	}
	return 0;
}