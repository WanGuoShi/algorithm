#!/usr/bin/env python
# coding=utf-8
'''
    简单的github提交流程
'''
import os
import sys
if len(sys.argv) > 1:
    mess = sys.argv[1]
    os.system("git add -A")
    os.system("git commit -a -m%s"%(mess))
    os.system("git push")
else:
    print("请输入要提交内容的信息！")
