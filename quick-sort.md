## 快速排序算法

---

### 概念

快速排序使用分治法（Divide and conquer）策略来把一个序列（list）分为两个子序列（sub-lists）。

步骤为：

 1.从数列中挑出一个元素，称为"基准"（pivot），
 2.重新排序数列，所有元素比基准值小的摆放在基准前面，所有元素比基准值大的摆在基准的后面（相同的数可以到任一边）。在这个分区结束之后，该基准就处于数列的中间位置。这个称为分区（partition）操作。
 3.递归地（recursive）把小于基准值元素的子数列和大于基准值元素的子数列排序。
递归的最底部情形，是数列的大小是零或一，也就是永远都已经被排序好了。虽然一直递归下去，但是这个算法总会结束，因为在每次的迭代（iteration）中，它至少会把一个元素摆到它最后的位置去。

### 代码实现（java）

``` java
/**
 * 
 * @Title: quickSort
 * @Description: 快速排序，递归版
 * @param: @param <E>
 * @param: @param arr
 * @param: @return
 * @return: List<E>
 * @throws
 */
public static <E extends Comparable<? super E>> List<E> quickSort(
		List<E> arr) {
	if (!arr.isEmpty()) {
		E pivot = arr.get(0); // This pivot can change to get faster results

		List<E> less = new LinkedList<E>();
		List<E> pivotList = new LinkedList<E>();
		List<E> more = new LinkedList<E>();

		// Partition
		for (E i : arr) {
			if (i.compareTo(pivot) < 0)
				less.add(i);
			else if (i.compareTo(pivot) > 0)
				more.add(i);
			else
				pivotList.add(i);
		}

		// Recursively sort sublists
		less = quickSort(less);
		more = quickSort(more);

		// Concatenate results
		less.addAll(pivotList);
		less.addAll(more);
		return less;
	}
	return arr;
}
```