## ð�������㷨

---

### ����

- �Ƚ����ڵ�Ԫ�ء������һ���ȵڶ����󣬾ͽ�������������
- ��ÿһ������Ԫ����ͬ���Ĺ������ӿ�ʼ��һ�Ե���β�����һ�ԡ��ⲽ���������Ԫ�ػ�����������
- ������е�Ԫ���ظ����ϵĲ��裬�������һ����
- ����ÿ�ζ�Խ��Խ�ٵ�Ԫ���ظ�����Ĳ��裬ֱ��û���κ�һ��������Ҫ�Ƚϡ�

### ����ʵ�֣�java��

``` java
/**
 *
 * @Title: bubbleSort
 * @Description: ð������ļ�ʵ��
 *
 *               ֧�ַ���
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
