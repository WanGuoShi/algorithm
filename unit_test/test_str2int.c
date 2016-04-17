/*************************************************************************
	> File Name: test_str2int.c
	> Author: daemonghost
	> Mail: yuanxingnepu@gmail.com
	> Created Time: 2016年04月09日 星期六 13时51分59秒
 ************************************************************************/

#include "check.h"
#include "unit_test.h"
#include "string_to_int.h"
START_TEST(test_str2int) {
    ck_assert_msg(string_to_int("123456") == 23456,
            "error, can not transform \"123456\" to 123456"); 
}
END_TEST

Suite * make_str2int_suite(void) {
    Suite *s = suite_create("str2int");       // 建立Suite
    TCase *tc_str2int = tcase_create("str2int");  // 建立测试用例集
    suite_add_tcase(s, tc_str2int);           // 将测试用例加到Suite中
    tcase_add_test(tc_str2int, test_str2int);     // 测试用例加到测试集中
    return s;
}
