## ѡ�������㷨

## ����

> ѡ������Ӣ�Selection sort����һ�ּ�ֱ�۵������㷨����������δ������������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ�ã�Ȼ���ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ���Դ����ƣ�ֱ������Ԫ�ؾ�������ϡ�

![ѡ��������ʾ����](http://img.blog.csdn.net/20160829211330824)

ѡ���������Ҫ�ŵ��������ƶ��йء����ĳ��Ԫ��λ����ȷ������λ���ϣ��������ᱻ�ƶ���ѡ������ÿ�ν���һ��Ԫ�أ����ǵ���������һ�������Ƶ�������λ���ϣ���˶�n��Ԫ�صı���������ܹ���������n-1�ν����������е���ȫ��������ȥ�ƶ�Ԫ�ص����򷽷��У�ѡ���������ڷǳ��õ�һ�֡�

## �㷨����

ѡ�������㷨���������£�

- ������δ�����������ҵ���С����Ԫ�أ���ŵ��������е���ʼλ��
- Ȼ���ٴ�ʣ��δ����Ԫ���м���Ѱ����С����Ԫ�أ�Ȼ��ŵ����������е�ĩβ��
- �Դ����ƣ�ֱ������Ԫ�ؾ�������ϡ�

α�������£�

```
selection_sort(array, length)
{
    var i, j, min, temp;
    for (i = 0; i < length - 1; i++) {
		// ��¼��ǰ��СԪ�ص�λ��
        min = i;
        for (j = i + 1; j < length; j++)
            if (array[min] > array[j])
                min = j;
        temp = array[min];
        array[min] = array[i];
        array[i] = temp;
    }
}
```

![ѡ��������ʾ������](http://img.blog.csdn.net/20160829211403730)

## ����ʵ�֣�java��

### һ��ʵ��

``` java
/**
 *
 * Description: ѡ������ļ�ʵ��
 *
 * @param: nums
 * @return: void
 */
public static void selectionSort(int[] nums)
{
    int temp;
    for (int currentPlace = 0; currentPlace < nums.length - 1; currentPlace++) {
        int smallest = nums[currentPlace + 1];
        int smallestAt = currentPlace + 1;
        for (int check = currentPlace; check < nums.length; check++) {
            if (nums[check] < smallest) {
                smallestAt = check;
                smallest = nums[check];
            }
        }
        temp = nums[currentPlace];
        nums[currentPlace] = nums[smallestAt];
        nums[smallestAt] = temp;
    }
}
```

### ͨ��ʵ��

``` java
/**
 *
 * Description: ѡ������ļ�ʵ�֣�֧�ַ��ͣ�
 *
 * @param: comparable
 * @return: void
 * @throws
 */
public static <E extends Comparable<? super E>> void selectionSort(
            E[] comparable)
{
    E temp;
    for (int currentPlace = 0; currentPlace < comparable.length - 1; currentPlace++) {
        E smallest = comparable[currentPlace + 1];
        int smallestAt = currentPlace + 1;
        for (int check = currentPlace; check < comparable.length; check++) {
            if (comparable[check].compareTo(smallest) < 0) {
                smallestAt = check;
                smallest = comparable[check];
            }
        }
        temp = comparable[currentPlace];
        comparable[currentPlace] = comparable[smallestAt];
        comparable[smallestAt] = temp;
    }
}
```

## �㷨���Ӷȷ���

- ѡ�������***��������***����0��(n-1)��֮�䡣ѡ�������***�Ƚϲ���***Ϊn(n-1)/2��֮�䡣ѡ�������***��ֵ����***����0��3(n-1)��֮�䡣
- �Ƚϴ���O(n^2)���Ƚϴ�����ؼ��ֵĳ�ʼ״̬�޹أ��ܵıȽϴ���N=(n-1)+(n-2)+��+1=n(n-1)/2����������O(n)���������ǣ��Ѿ����򣬽���0�Σ������ǣ����򣬽���n-1�Ρ�����������ð��������٣����ڽ�������CPUʱ��ȱȽ������CPUʱ��ֵ࣬��Сʱ��ѡ�������ð������졣
- ԭ�ز���������ѡ�������Ψһ�ŵ㣬���ռ临�Ӷȣ�space complexity��Ҫ��ϸ�ʱ�����Կ���ѡ������ʵ�����õĳ��Ϸǳ�������

## �ο�����

- [ѡ������](https://wikipedia.org/wiki/%E9%80%89%E6%8B%A9%E6%8E%92%E5%BA%8F)