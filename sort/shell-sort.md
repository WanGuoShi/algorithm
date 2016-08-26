## ϣ�������㷨

---

### ����

ϣ������Ҳ�Ƶݼ����������㷨���ǲ��������һ�ָ���Ч�ĸĽ��汾��ϣ�������Ƿ��ȶ������㷨��
ϣ�������ǻ��ڲ�������������������ʶ�����Ľ������ģ�

- ���������ڶԼ����Ѿ��ź�������ݲ���ʱ��Ч�ʸߣ������Դﵽ���������Ч��
- ����������һ����˵�ǵ�Ч�ģ���Ϊ��������ÿ��ֻ�ܽ������ƶ�һλ

### ����ʵ�֣�java��

``` java
/**
 * 
 * @Title: shellSort
 * @Description: ϣ������
 * @param: @param nums
 * @return: void
 * @throws
 */
public static void shellSort(int[] nums) {
	int gap = 1, i, j, len = nums.length;
	int temp;
	// ѡ�񲽳�
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