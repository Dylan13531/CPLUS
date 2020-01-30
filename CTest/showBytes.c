/*************************************************************************
    > File Name: showBytes.c
    > Author: DylanYang
    > Mail: 13162687569@163.com 
    > Created Time: 四  1/30 00:49:36 2020
 ************************************************************************/

#include<stdio.h>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
	size_t i;
	for(i=0; i<len; i++)
		printf("  %.2x", start[i]);
	printf("\n");
}

void show_int(int x)
{
	show_bytes((byte_pointer) &x, sizeof(int));		//强制类型转换，将int数据地址转化成char类型地址，用地址解析时会当作char处理
}

void show_float(float x)
{
	show_bytes((byte_pointer) &x, sizeof(float));	//	#强制类型转换，将int数据地址转化成char类型地址，用地址解析时会当作char处理
}

void show_pointer(void *x)
{
	show_bytes((byte_pointer) &x, sizeof(void *));	//	#强制类型转换，将int数据地址转化成char类型地址，用地址解析时会当作char处理
}

int main()
{
	show_int(12345);
	show_float(12345);
	int val = 0x87654321;
	byte_pointer valp = (byte_pointer)&val;
	show_int(val);
	for(int i=1; i<9; i++)
		show_bytes(valp,i);
	return 0;
}
