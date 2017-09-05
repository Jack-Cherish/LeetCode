# 思路

写一个函数，找到字符串列表中最长公共前缀。

### 举例:

	['abcd','abe','ab','ae']
	
### 返回:
	
	abcd
	
### 方法一:

	巧妙利用zip的压缩和set的去重
	
### 方法二:
	
	利用reduce函数
	
	在python3中，reduece函数放到functools包中，需要from functools import reduce进行导入。