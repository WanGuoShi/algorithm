## 希尔排序算法

---

### 概念

希尔排序，也称递减增量排序算法，是插入排序的一种更高效的改进版本。希尔排序是非稳定排序算法。
希尔排序是基于插入排序的以下两点性质而提出改进方法的：

- 插入排序在对几乎已经排好序的数据操作时，效率高，即可以达到线性排序的效率
- 但插入排序一般来说是低效的，因为插入排序每次只能将数据移动一位

### 代码实现（java）

``` java
/**
 * 
 * @Title: shellSort
 * @Description: 希尔排序
 * @param: @param nums
 * @return: void
 * @throws
 */
public static void shellSort(int[] nums) {
	int gap = 1, i, j, len = nums.length;
	int temp;
	// 选择步长
	while (gap < len / 3) {
		// <O(n^(3/2)) by Knuth,1973>: 1, 4, 13, 40, 121, ...
		gap = gap * 3 + 1;
	}
	for (; gap > 0; gap /= 3) {
		for (i = gap; i < len; i++) {
			temp = nums[i];
			for (j = i - gap; j >= 0 && nums[j] > temp; j -= gap)
				nums[j + gap] = nums[j];
			nums[j + gap] = temp;
		}
	}
}
```