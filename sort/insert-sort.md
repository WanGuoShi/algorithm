## ���������㷨

---

### ����

 1.�ӵ�һ��Ԫ�ؿ�ʼ����Ԫ�ؿ�����Ϊ�Ѿ�������
 2.ȡ����һ��Ԫ�أ����Ѿ������Ԫ�������дӺ���ǰɨ��
 3.�����Ԫ�أ������򣩴�����Ԫ�أ�����Ԫ���Ƶ���һλ��
 4.�ظ�����3��ֱ���ҵ��������Ԫ��С�ڻ��ߵ�����Ԫ�ص�λ��
 5.����Ԫ�ز��뵽��λ�ú�
 6.�ظ�����2~5

### ����ʵ�֣�java��

``` java
/**
 *
 * @Title: insertSort
 * @Description: ��������ļ�ʵ��
 * @param: @param nums
 * @return: void
 * @throws
 */
public static void insertSort(int[] nums)
{
    for (int i = 1; i < nums.length; i++) {
        int value = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > value) {
            nums[j + 1] = nums[j];
            j = j - 1;
        }
        nums[j + 1] = value;
    }
}
```