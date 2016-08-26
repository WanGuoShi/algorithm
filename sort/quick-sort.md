## ���������㷨

---

### ����

��������ʹ�÷��η���Divide and conquer����������һ�����У�list����Ϊ���������У�sub-lists����

����Ϊ��

 1.������������һ��Ԫ�أ���Ϊ"��׼"��pivot����
 2.�����������У�����Ԫ�رȻ�׼ֵС�İڷ��ڻ�׼ǰ�棬����Ԫ�رȻ�׼ֵ��İ��ڻ�׼�ĺ��棨��ͬ�������Ե���һ�ߣ����������������֮�󣬸û�׼�ʹ������е��м�λ�á������Ϊ������partition��������
 3.�ݹ�أ�recursive����С�ڻ�׼ֵԪ�ص������кʹ��ڻ�׼ֵԪ�ص�����������
�ݹ����ײ����Σ������еĴ�С�����һ��Ҳ������Զ���Ѿ���������ˡ���Ȼһֱ�ݹ���ȥ����������㷨�ܻ��������Ϊ��ÿ�εĵ�����iteration���У������ٻ��һ��Ԫ�ذڵ�������λ��ȥ��

### ����ʵ�֣�java��

``` java
/**
 * 
 * @Title: quickSort
 * @Description: �������򣬵ݹ��
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