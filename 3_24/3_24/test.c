//#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//����һ��������������
//	int key = 0;//����Ҫ���ҵ���
//	scanf_s("%d", &key);
//	int left = 0;//�������±�
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;//�������±�
//	while (left <= right)//������ʱ������ѭ��
//	{
//		int mid = (left + right) / 2;//����м������±�
//		if (arr[mid] < key)//key>arr[mid],˵��key���м����ұ�
//		{
//			left = mid + 1;//���±�����µõ�һ���ӱ�
//		}
//		else if (arr[mid]>key)//�������෴
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);//�ҵ��Ļ�,��ӡ���±�
//			break;
//		}
//	}
//	if (left>right)//
//
//	{
//		printf("û�ҵ�");
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
			printf("�ҵ��ˣ��±��ǣ�%d", mid);
			break;
		}
	}
	if (left > right)

	{
		printf("û�ҵ�");
	}
	return 0;
}