## ѡ�������㷨

### ����

- ������δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ��
- Ȼ���ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ��
- �Դ����ƣ�ֱ������Ԫ�ؾ�������ϡ�

### ����ʵ�֣�java��

``` java
/**
 *
 * @Title: selectionSort
 * @Description: ѡ������ļ�ʵ��
 * @param: @param nums
 * @return: void
 * @throws
 */
public static void selectionSort(int[] nums)
{
    for(int currentPlace = 0; currentPlace<nums.length-1; currentPlace++) {
        int smallest = Integer.MAX_VALUE;
        int smallestAt = currentPlace+1;
        for(int check = currentPlace; check<nums.length; check++) {
            if(nums[check]<smallest) {
                smallestAt = check;
                smallest = nums[check];
            }
        }
        int temp = nums[currentPlace];
        nums[currentPlace] = nums[smallestAt];
        nums[smallestAt] = temp;
    }
}
```