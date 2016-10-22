## �鲢�����㷨

## ����

> �鲢����Ӣ�Merge sort�����Ǵ����ڹ鲢�����ϵ�һ����Ч�������㷨��Ч��ΪO(n log n)��
**�鲢����**��merge����Ҳ�й鲢�㷨��ָ���ǽ������Ѿ���������кϲ���һ�����еĲ������鲢�����㷨�����鲢������

![�鲢�����㷨��ʾ����](http://img.blog.csdn.net/20160831212632531)

## �ݹ鷨

ԭ�����£��������й���n��Ԫ�أ���
 1. ������ÿ�����������ֽ��й鲢�������γ�floor(n/2)�����У������ÿ�����а�������Ԫ��
 2. �����������ٴι鲢���γ�floor(n/4)�����У�ÿ�����а����ĸ�Ԫ��
 3. �ظ�����2��ֱ������Ԫ���������

## ������

 1. ����ռ䣬ʹ���СΪ�����Ѿ���������֮�ͣ��ÿռ�������źϲ��������
 2. �趨����ָ�룬���λ�÷ֱ�Ϊ�����Ѿ��������е���ʼλ��
 3. �Ƚ�����ָ����ָ���Ԫ�أ�ѡ�����С��Ԫ�ط��뵽�ϲ��ռ䣬���ƶ�ָ�뵽��һλ��
 4. �ظ�����3ֱ��ĳһָ�뵽������β
 5. ����һ����ʣ�µ�����Ԫ��ֱ�Ӹ��Ƶ��ϲ�����β
 
## ����ʵ�֣�java��

### �ݹ��

``` java
/**
 * 
 * @Description: �鲢���򣬵ݹ��
 *
 * @param: <E>
 * @param: m
 * @return: List<E>
 * @throws
 */
public static <E extends Comparable<? super E>> List<E> mergeSort(List<E> m) {
	if (m.size() <= 1)
		return m;

	int middle = m.size() / 2;
	List<E> left = m.subList(0, middle);
	List<E> right = m.subList(middle, m.size());

	right = mergeSort(right);
	left = mergeSort(left);
	List<E> result = merge(left, right);

	return result;
}

public static <E extends Comparable<? super E>> List<E> merge(List<E> left,
		List<E> right) {
	List<E> result = new ArrayList<E>();
	Iterator<E> it1 = left.iterator();
	Iterator<E> it2 = right.iterator();

	E x = it1.next();
	E y = it2.next();
	while (true) {
		// change the direction of this comparison to change the direction
		// of the sort
		if (x.compareTo(y) <= 0) {
			result.add(x);
			if (it1.hasNext()) {
				x = it1.next();
			} else {
				result.add(y);
				while (it2.hasNext()) {
					result.add(it2.next());
				}
				break;
			}
		} else {
			result.add(y);
			if (it2.hasNext()) {
				y = it2.next();
			} else {
				result.add(x);
				while (it1.hasNext()) {
					result.add(it1.next());
				}
				break;
			}
		}
	}
	return result;
}
```

### ������

``` java
/**
 * 
 * @Description: �鲢���򣬵�����
 *
 * @param: nums
 * @return: void
 * @throws
 */
public static void mergeSort(int[] nums) {
	int len = nums.length;
	int[] result = new int[len];
	int block, start;

	for (block = 1; block < len*2; block *= 2) {
		for (start = 0; start < len; start += 2 * block) {
			int low = start;
			int mid = (start + block) < len ? (start + block) : len;
			int high = (start + 2 * block) < len ? (start + 2 * block)
					: len;
			// ���������ʼ�±꼰�����±�
			int start1 = low, end1 = mid;
			int start2 = mid, end2 = high;
			// ��ʼ������block���й鲢����
			while (start1 < end1 && start2 < end2) {
				result[low++] = nums[start1] < nums[start2] ? nums[start1++]
						: nums[start2++];
			}
			while (start1 < end1) {
				result[low++] = nums[start1++];
			}
			while (start2 < end2) {
				result[low++] = nums[start2++];
			}
		}
		int[] temp = nums;
		nums = result;
		result = temp;
	}
	result = nums;
}
```

## �㷨���Ӷȷ���

�Ƚϲ����Ĵ�������(n\*logn)/2(n log n)/2��n\*logn?n+1�� ��ֵ�����Ĵ����� n\*logn���鲢�㷨�Ŀռ临�Ӷ�Ϊ��O(n)��

## �ο�����

- [�鲢����](https://wikipedia.org/wiki/%E5%BD%92%E5%B9%B6%E6%8E%92%E5%BA%8F)