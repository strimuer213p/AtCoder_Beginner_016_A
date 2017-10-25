/*
問題文
12月6日は、月を日で割って割り切れる日です。日付が与えられるので月が日で割り切れるかを判定してください。
*/
#include<iostream>

int main() {
	int a, b;
	std::cin >> a;
	std::cin >> b;
	a%b == 0 ? std::cout << "YES" << std::endl : std::cout << "NO" << std::endl;

	return 0;
}