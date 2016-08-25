## 选择排序算法

### 概念

- 首先在未排序序列中找到最小（大）元素，存放到排序序列的起始位置
- 然后，再从剩余未排序元素中继续寻找最小（大）元素，然后放到已排序序列的末尾。
- 以此类推，直到所有元素均排序完毕。

### 代码实现（java）

``` java
/**
 *
 * @Title: selectionSort
 * @Description: 选择排序的简单实现
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