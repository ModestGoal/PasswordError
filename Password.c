#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>


int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++);
	{
		printf("请输入密码:>");
		scanf("%s", password);

		if (strcmp(password, "123456") == 0)//==不能用来判断两个字符串相等
			//应该使用一个库函数-strcmp
		{
			
			printf("登录成功\n");
			break;

		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
		printf("密码三次均错误\n");
	return 0;
}