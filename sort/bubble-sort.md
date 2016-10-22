## ð�������㷨

## ����

> ð������Ӣ�Bubble Sort����һ�ּ򵥵������㷨�����ظ����߷ù�Ҫ��������У�һ�αȽ�����Ԫ�أ�������ǵ�˳�����Ͱ����ǽ����������߷����еĹ������ظ��ؽ���ֱ��û������Ҫ������Ҳ����˵�������Ѿ�������ɡ�����㷨��������������ΪԽС��Ԫ�ػᾭ�ɽ������������������еĶ��ˡ�

![ð���������](http://img.blog.csdn.net/20160828111556305)

## �㷨����

ð�������㷨���������£�

- �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
- ��ÿһ������Ԫ����ͬ���Ĺ������ӿ�ʼ��һ�Ե���β�����һ�ԡ��ⲽ���������Ԫ�ػ�����������
- ������е�Ԫ���ظ����ϵĲ��裬�������һ����
- ����ÿ�ζ�Խ��Խ�ٵ�Ԫ���ظ�����Ĳ��裬ֱ��û���κ�һ��������Ҫ�Ƚϡ�

α�������£�
```
function bubble_sort (array, length) {
    var i, j;
    for(i from 0 to length-1){
        for(j from 0 to length-1-i){
            if (array[j] > array[j+1])
                swap(array[j], array[j+1])
        }
    }
}
```

## ����ʵ�֣�java��

### һ��ʵ��

``` java
/**
 *
 * Description: ð�������ʵ��
 *
 * @param: nums
 * @return: void
 */
public static void bubbleSort(int[] nums)
{
    int tmp;
    for (int i = 0; i < nums.length; i++) {
        for (int j = 0; j < nums.length - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }
}
```

### ͨ��ʵ��

``` java
/**
 *
 * Description: ð������ļ�ʵ��(֧�ַ���)
 * 
 * @param: <E>
 * @param: comparable
 * @return: void
 * @throws
 */
public static <E extends Comparable<? super E>> void bubbleSort(
            E[] comparable)
{
    E tmpE;
    for (int i = 0; i < comparable.length; i++) {
        for (int j = 0; j < comparable.length - i - 1; j++) {
            if (comparable[j].compareTo(comparable[j + 1]) > 0) {
                tmpE = comparable[j];
                comparable[j] = comparable[j + 1];
                comparable[j + 1] = tmpE;
            }
        }
    }
}
```

## �ο�����

- [�����㷨](https://wikipedia.org/wiki/%E6%8E%92%E5%BA%8F%E7%AE%97%E6%B3%95#.E7.A9.A9.E5.AE.9A.E7.9A.84.E6.8E.92.E5.BA.8F)
- [ð������](https://wikipedia.org/wiki/%E5%86%92%E6%B3%A1%E6%8E%92%E5%BA%8F#JAVA)