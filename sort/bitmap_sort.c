/*************************************************************************
	> File Name: bitmap_sort.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年03月30日 星期三 16时25分59秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define BITSPERWORD     32
#define SHIFT           5
#define MASK            0x1F
#define N               10000000

int a[1 + N/BITSPERWORD]; 	//使用的内存空间数组，用来排序
int x[N];                       //用来生成待排序数据集合

void set(int i);
void clr(int i);
int test(int i);
int randint(int l, int u);
void swap(int *a, int *b);
void generate_rand_num();
void bitmap_sort();

int main(int argc, char *argv[])
{
    bitmap_sort();
}

void set(int i)     //设置特定位为1
{
    a[i>>SHIFT] |= (1<<(i & MASK));
}

void clr(int i)     //清空特定位为0
{
    a[i>>SHIFT] &= ~(1<<(i & MASK));
}

int test(int i)
{
    return a[i>>SHIFT] & (1<<(i & MASK));
}

int randint(int l, int u)     //生成l~u之间的整数
{
    int temp;
    srand((unsigned)time(NULL));
    temp = floor(1 + (1.0*rand()/RAND_MAX)*(u - l + 1));
    return temp;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

/*
 * 生成1～N之间的随机数
 */
void generate_rand_num()
{
    FILE *fp;
    int k = N;
    int i;
    fp = fopen("in.txt", "w");

    for (i = 0; i < N; i++){
        x[i] = i + 1;
    }
    for(i = 0; i < k; i++){
        swap(&x[i], &x[randint(i, N-1)]);
        fprintf(fp,"%d\n",x[i]);
    }
    fclose(fp);
}

/*
 * 位图排序
 */
void bitmap_sort()
{
    int i;
    FILE *in, *out;
    int num;
    in = fopen("in.txt", "r");
    out = fopen("out.txt", "w");

    generate_rand_num();

    for(i = 0; i < N; i++){
        clr(i);
    }
    while(fscanf(in, "%d", &num) != EOF){
        set(num);
    }
    for(i = 0; i < N; i++){
        if(test(i)){
            fprintf(out, "%d\n", i);
        }
    }
    fclose(in);
    fclose(out);
}
