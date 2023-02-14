#define  _CRT_SECURE_NO_WARNINGS 1
//int get_last_or_first_idx(int* data, int len, int k, int flag) 
//{   //flag:0-找左边， 1-找右边
//	int left = 0, right = len - 1, mid;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (data[mid] > k)
//			right = mid - 1;
//		else if (data[mid] < k)
//			left = mid + 1;
//		else 
//		{
//			if (flag == 0) 
//			{//flag==0时，找最左边的数字
//				if (mid == left || data[mid - 1] != k) 
//					return mid;
//				else 
//					right = mid - 1;//把中心向左推
//			}
//			else 
//			{//flag==1时，找最右边的数字
//				if (mid == right || data[mid + 1] != k) 
//					return mid;
//				else 
//					left = mid + 1;//把中心向右推
//			}
//		}
//	}
//
//	return -1;
//} 
//int GetNumberOfK(int* data, int dataLen, int k) {
//	if (dataLen == 0) 
//		return 0;
//	int left = get_last_or_first_idx(data, dataLen, k, 0);
//	int right = get_last_or_first_idx(data, dataLen, k, 1);
//	if (left == -1 && right == -1) 
//		return 0; //表示没有找到k这个数据
//	return right - left + 1;
//}
//



//int GetNumberOfK(int* data, int dataLen, int k) {
//	int i = 0;
//	for (i = 0; i < dataLen - 1; i++)
//	{
//		for (int j = 0; j < dataLen - 1 - i; j++)
//		{
//			if (data[j] > data[j + 1])
//			{
//				int tmp = data[j];
//				data[j] = data[j + 1];
//				data[j + 1] = tmp;
//			}
//		}
//	}
//	int count = 0;
//	for (i = 0; i <= dataLen - 1; i++)
//	{
//		if (k == data[i])
//		{
//			count++;
//		}
//
//	}
//	return count;
//}



//int main()
//{
//	
//	return 0;
//}
int get_last_or_first_idx(int* data, int len, int k, int flag)
{
	int left = 0;
	int right = len - 1;
	int mid = 0;
	while (left <= right)
	{
		 mid = left+(right -left) / 2;
		if (data[mid] > k)
			right = mid - 1;
		else if (data[mid] < k)
			left = mid + 1;
		else
		{
			if (flag == 0)
			{
				if (left == mid || data[mid- 1] != k)
					return mid;
				else
					right = mid - 1;
			}
			else
			{
				if (right == mid || data[mid + 1] != k)
					return mid;
				else
					left= mid + 1;
			}
		}
	}
}
//int get_last_or_first_idx(int* data, int len, int k, int flag) 
//{   //flag:0-找左边， 1-找右边
//	int left = 0, right = len - 1, mid;
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (data[mid] > k)
//			right = mid - 1;
//		else if (data[mid] < k)
//			left = mid + 1;
//		else 
//		{
//			if (flag == 0) 
//			{//flag==0时，找最左边的数字
//				if (mid == left || data[mid - 1] != k) 
//					return mid;
//				else 
//					right = mid - 1;//把中心向左推
//			}
//			else 
//			{//flag==1时，找最右边的数字
//				if (mid == right || data[mid + 1] != k) 
//					return mid;
//				else 
//					left = mid + 1;//把中心向右推
//			}
//		}
//	}
//
//	return -1;
//} 
int GetNumberOfK(int* data, int dataLen, int k) {
	if (dataLen == 0)
		return 0;
	int left = get_last_or_first_idx(data, dataLen, k, 0);
	int right = get_last_or_first_idx(data, dataLen, k, 1);
	if (left == -1 && right == -1)
		return 0; //表示没有找到k这个数据
	return right - left + 1;
}
