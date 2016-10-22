���˽������֮ǰ�������б�Ҫ�����ʲô�Ƕ��أ�����

> �ѣ�Ӣ�Heap���Ǽ������ѧ��һ����������ݽṹ��ͳ�ơ�***��ͨ����һ�����Ա�����һ�������������***�ڶ����У����ȳ��򷴸���ȡ�����е�һ����ҵ�����У���Ϊʵ�������ĳЩʱ��϶̵����񽫵ȴ��ܳ�ʱ����ܽ���������ĳЩ����С����������Ҫ�Ե���ҵ��ͬ��Ӧ����������Ȩ���Ѽ�Ϊ�������������Ƶ�һ�����ݽṹ��

�ѵ��߼����壺
![�ѵ��߼�����](http://img.blog.csdn.net/20160903211152460)

�ѵ�ʵ��ͨ���������ѣ�Ӣ�binary heap����ʵΪ��������һ�֣�������Ӧ�õ��ձ��ԣ��������޶�ʱ����ָ�����ݽṹ������ʵ�֡��������ݽṹ�����������ʡ�

- ����ڵ�С�ڣ�����ڣ��������к��ᣬ��СԪ�������Ԫ���ڶѵĸ��ϣ������ԣ���
- ������һ����ȫ������������ײ㣬������Ľڵ㶼��Ԫ������������ײ㾡���ܵش��������롣

�����ڵ����Ķѽ���***����***�����ѣ����ڵ���С�Ķѽ���***��С��***��С���ѡ������Ķ���***�����***��쳲������ѵȡ�

## ����

> ������Ӣ�Heap Sort����ָ����***��***�������ݽṹ����Ƶ�һ�������㷨���ѻ���һ��������ȫ�������Ľṹ����ͬʱ����ѻ������ʣ����ӽ��ļ�ֵ����������С�ڣ����ߴ��ڣ����ĸ��ڵ㡣

![��������ʾ����](http://img.blog.csdn.net/20160903210342596)

## �㷨����

������ĸ����ǽ���һ�ζѵĹ������̡�

- �õ���ǰ���е���С(��)��Ԫ�� 
- �����Ԫ�غ����һ��Ԫ�ؽ��н���,������ǰ����С(��)��Ԫ�ؾͷ��������е����,��ԭ�ȵ����һ��Ԫ�طŵ������е���ǰ�� 
- �⽻�����ܻ��ƻ������е�����(ע���ʱ�������ǳ�ȥ�Ѿ�����������Ԫ��),�����Ҫ�����н��е���,ʹ֮����������ѵ�����
- �ظ�����Ĺ���,ֱ�����е������Ϊֹ

### �ѵĲ���
�ڶѵ����ݽṹ�У����е����ֵ����λ�ڸ��ڵ㡣���ж������¼��ֲ�����

- ���ѵ�����Max_Heapify�������ѵ�ĩ���ӽڵ���������ʹ���ӽڵ���ԶС�ڸ��ڵ�
- �������ѣ�Build_Max_Heap������������������������
- ������HeapSort�����Ƴ�λ�ڵ�һ�����ݵĸ��ڵ㣬�������ѵ����ĵݹ�����

### �ѽڵ�ķ���

ͨ������ͨ��һά������ʵ�ֵġ���������ʼλ��Ϊ0�������У�

- ���ڵ�i�����ӽڵ���λ��(2*i+1);
- ���ڵ�i�����ӽڵ���λ��(2*i+2);
- �ӽڵ�i�ĸ��ڵ���λ��floor((i-1)/2);

## ����ʵ�֣�java��

```
/**
 *
 * @Description: ������ļ�ʵ��
 *
 * @param: a
 * @return: void
 * @throws
 */
public static void heapSort(int[] a)
{
    int count = a.length;

    // first place a in max-heap order
    heapify(a, count);

    int end = count - 1;
    while (end > 0) {
        // swap the root(maximum value) of the heap with the
        // last element of the heap
        int tmp = a[end];
        a[end] = a[0];
        a[0] = tmp;
        // put the heap back in max-heap order
        siftDown(a, 0, end - 1);
        // decrement the size of the heap so that the previous
        // max value will stay in its proper place
        end--;
    }
}

private static void heapify(int[] a, int count)
{
    // start is assigned the index in a of the last parent node
    int start = (count - 2) / 2; // binary heap

    while (start >= 0) {
        // sift down the node at index start to the proper place
        // such that all nodes below the start index are in heap
        // order
        siftDown(a, start, count - 1);
        start--;
    }
    // after sifting down the root all nodes/elements are in heap order
}

private static void siftDown(int[] a, int start, int end)
{
    // end represents the limit of how far down the heap to sift
    int root = start;

    while ((root * 2 + 1) <= end) { // While the root has at least one child
        int child = root * 2 + 1; // root*2+1 points to the left child
        // if the child has a sibling and the child's value is less than its
        // sibling's...
        if (child + 1 <= end && a[child] < a[child + 1])
            child = child + 1; // ... then point to the right child instead
        if (a[root] < a[child]) { // out of max-heap order
            int tmp = a[root];
            a[root] = a[child];
            a[child] = tmp;
            root = child; // repeat to continue sifting down the child now
        } else
            return;
    }
}
```

## �ο�����

- [��](https://wikipedia.org/wiki/%E5%A0%86_%28%E6%95%B0%E6%8D%AE%E7%BB%93%E6%9E%84%29#.E5.A0.86.E6.8E.92.E5.BA.8F)
- [������](https://wikipedia.org/wiki/%E5%A0%86%E6%8E%92%E5%BA%8F#.E5.8F.83.E8.80.83)