## 算法简介

排序算法是一种能将一串数据依照特定排序方式进行排列的一种算法。最常用到的排序方式是***数值顺序***以及***字典顺序***。

有效的排序算法在一些算法（例如搜索算法与合并算法）中是重要的，如此这些算法才能得到正确解答。排序算法也用在处理文字数据以及产生人类可读的输出结果。基本上，排序算法的输出必须遵守下列两个原则：

- 输出结果为递增序列（递增是针对所需的排序顺序而言）
- 输出结果是原输入的一种排列、或是重组


## 排序算法分类

在计算机科学所使用的排序算法通常被分类为：

- 计算的时间复杂度（最差、平均、和最好性能），依据列表（list）的大小(n)。一般而言，好的性能是O(n log n)，且坏的性能是O(n2)。对于一个排序理想的性能是O(n)。仅使用一个抽象关键比较运算的排序算法总平均上总是至少需要O(n log n)。
- 内存使用量（以及其他电脑资源的使用）
- **稳定性**：稳定排序算法会让原本有相等键值的纪录维持相对次序。也就是如果一个排序算法是稳定的，当有两个相等键值的纪录R和S，且在原本的列表中R出现在S之前，在排序过的列表中R也将会是在S之前。
- 依据排序的方法：**插入、交换、选择、合并**等等。

![排序算法比较](http://img.blog.csdn.net/20160828112755020)

## 常见排序算法

- [冒泡排序](https://github.com/crane-yuan/algorithm/tree/master/sort/bubble-sort.md)
- [选择排序](https://github.com/crane-yuan/algorithm/tree/master/sort/selection-sort.md)
- [插入排序](https://github.com/crane-yuan/algorithm/tree/master/sort/insert-sort.md)
- [归并排序](https://github.com/crane-yuan/algorithm/tree/master/sort/merge-sort.md)
- [希尔排序](https://github.com/crane-yuan/algorithm/tree/master/sort/shell-sort.md)
- [快速排序](https://github.com/crane-yuan/algorithm/tree/master/sort/quick-sort.md)
- [堆排序]  (https://github.com/crane-yuan/algorithm/tree/master/sort/heap-sort.md)