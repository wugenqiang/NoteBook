#include <stdio.h>
#include <stdlib.h>

int BinarySearch(int *array, int key, int low, int high)
{
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == array[mid])
        {
            return mid;
        }
        else if (key < array[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 0;
}

int main()
{
    int n, i, key, position;
    int *array;
    printf("请输入有序数组的大小：");
    scanf("%d", &n);
    array = (int*) malloc(sizeof(int) * n);
    printf("请按升序输入数据：\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("请输入想要查找的数：");
    scanf("%d", &key);
    if (position = BinarySearch(array, key, 0, n - 1)) 
    {
        printf("%d的位置为：%d\n", key, position);
    }
    else
    {
        printf("%d不存在\n", key);    
    }
}
