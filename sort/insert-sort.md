## 插入排序算法

---

### 概念

 1.从第一个元素开始，该元素可以认为已经被排序
 2.取出下一个元素，在已经排序的元素序列中从后向前扫描
 3.如果该元素（已排序）大于新元素，将该元素移到下一位置
 4.重复步骤3，直到找到已排序的元素小于或者等于新元素的位置
 5.将新元素插入到该位置后
 6.重复步骤2~5

### 代码实现（java）

``` java
/**
 *
 * @Title: insertSort
 * @Description: 插入排序的简单实现
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