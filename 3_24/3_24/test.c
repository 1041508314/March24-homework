//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//定义一个整形有序数组
//	int key = 0;//我们要查找的数
//	scanf_s("%d", &key);
//	int left = 0;//数组做下标
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//数组右下标
//	while (left <= right)//当满足时，进入循环
//	{
//		int mid = (left + right) / 2;//求出中间数的下标
//		if (arr[mid] < key)//key>arr[mid],说明key在中间数右边
//		{
//			left = mid + 1;//左下标加重新得到一个子表
//		}
//		else if (arr[mid]>key)//与上面相反
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);//找到的话,打印出下标
//			break;
//		}
//	}
//	if (left>right)//
//
//	{
//		printf("没找到");
//	}
//	return 0;
//}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 0;
	scanf_s("%d", &key);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key)//
		{
			left = mid + 1;
		}
		else if (arr[mid]>key)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}
	if (left > right)

	{
		printf("没找到");
	}
	return 0;
}