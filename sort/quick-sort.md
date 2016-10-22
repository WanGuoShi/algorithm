## ��������

## ����

>��������Ӣ�Quick Sort�����ֳƻ��ֽ�������partition-exchange sort����һ�������㷨�������ɶ��ᡤ�����������ƽ��״���£�����n����ĿҪ��(n log n)�αȽϡ����״��������Ҫ��(n2)�αȽϣ�������״��������������ʵ�ϣ���������ͨ�����Ա�������(n log n)�㷨���죬��Ϊ�����ڲ�ѭ����inner loop�������ڴ󲿷ֵļܹ��Ϻ���Ч�ʵر�ʵ�ֳ�����

![����������ʾ����1](http://img.blog.csdn.net/20160902204233276)

## �㷨����

��������ʹ�÷��η���Divide and conquer����������һ�����У�list����Ϊ���������У�sub-lists����

����Ϊ��

- ������������һ��Ԫ�أ���Ϊ"��׼"��pivot����
- �����������У�����Ԫ�رȻ�׼ֵС�İڷ��ڻ�׼ǰ�棬����Ԫ�رȻ�׼ֵ��İ��ڻ�׼�ĺ��棨��ͬ�������Ե���һ�ߣ����������������֮�󣬸û�׼�ʹ������е��м�λ�á������Ϊ������partition��������
- �ݹ�أ�recursive����С�ڻ�׼ֵԪ�ص������кʹ��ڻ�׼ֵԪ�ص�����������

�ݹ����ײ����Σ������еĴ�С�����һ��Ҳ������Զ���Ѿ���������ˡ���Ȼһֱ�ݹ���ȥ����������㷨�ܻ��������Ϊ��ÿ�εĵ�����iteration���У������ٻ��һ��Ԫ�ذڵ�������λ��ȥ��

α�������£�

```
function quicksort(q)
     var list less, pivotList, greater
     if length(q) �� 1 {
         return q
     } else {
         select a pivot value pivot from q
         for each x in q except the pivot element
             if x < pivot then add x to less
             if x �� pivot then add x to greater
         add pivot to pivotList
         return concatenate(quicksort(less), pivotList, quicksort(greater))
     }
```

![����������ʾ����2](http://img.blog.csdn.net/20160902204709904)

## ����ʵ�֣�java��

```

/**
 *
 * @Description: �������򣬵ݹ��
 *
 * @param: <E>
 * @param: arr
 * @return: List<E>
 * @throws
 */
public static <E extends Comparable<? super E>> List<E> quickSort(
            List<E> arr)
{
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

## �ο�����

- [��������](https://wikipedia.org/wiki/%E5%BF%AB%E9%80%9F%E6%8E%92%E5%BA%8F)