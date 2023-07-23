//BAEKJOON PROGRAMMING JUDGE 11050

#include <iostream>

using namespace std;

unsigned int combination(int n, int k)
{
	if (n == k || k == 0)
		return 1;	//nC0 ==1, nCn == 1

	unsigned long num = combination(n - 1, k - 1) + combination(n - 1, k);	//nCk = n-1Ck-1 + n-1Ck

	return num;
}

int main(void)
{
	int n, k;
	unsigned int result;	//combination numbers increases rapidly

	cin >> n >> k;
	result = combination(n, k);	//get nCk
	cout << result << endl;

	return 0;
}