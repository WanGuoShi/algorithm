## 冒泡排序算法

---

### 概念

- 比较相邻的元素。如果第一个比第二个大，就交换他们两个。
- 对每一对相邻元素作同样的工作，从开始第一对到结尾的最后一对。这步做完后，最后的元素会是最大的数。
- 针对所有的元素重复以上的步骤，除了最后一个。
- 持续每次对越来越少的元素重复上面的步骤，直到没有任何一对数字需要比较。

### 代码实现（java）

``` java
/**
 *
 * @Title: bubbleSort
 * @Description: 冒泡排序的简单实现
 *
 *               支持泛型
 * @param: @param <E>
 * @param: @param comparable
 * @return: void
 * @throws
 */
public static <E extends Comparable<? super E>> void bubbleSort(
            E[] comparable)
{
    boolean changed = false;
    do {
        changed = false;
        for (int a = 0; a < comparable.length - 1; a++) {
            if (comparable[a].compareTo(comparable[a + 1]) > 0) {
                E tmp = comparable[a];
                comparable[a] = comparable[a + 1];
                comparable[a + 1] = tmp;
                changed = true;
            }
        }
    } while (changed);
}
```
