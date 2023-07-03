#include <iostream>
using namespace std;

// n ��ʾҪ�ӵ��ĺͣ�m ��ʾ��ǰ��������ܴﵽ��ֵ
// �� partition(5, 1) ��ʾ�ò����� 1 ������������ 5��ֻ��һ�� 1+1+1+1+1
int partition(int n, int m) {
	// ����Ϊ 1 ���������Ϊ 1��ֻ��һ�����Σ�һ��һ������ȥ
	if (n == 1 || m == 1) {
		return 1;
	} else if (n == m) { // �������������ֵ��ͬ��ȥ�� n = m��ʣ�� partition(n, m-1)
		return 1 + partition(n, m - 1);
	} else if (n < m) {
		return partition(n, n);
	}
	// �ѵ�ǰ�������ֵ�ݼ������β��빹�� n
	// �ѵ�ǰ�ͼ�ȥ m����ʾ����һ���� n С�Ĳ��� m
	return partition(n, m - 1) + partition(n - m, m);
}

int partition(int n) {
	return partition(n, n);
}

int main() {
	cout << partition(5);
	return 0;
}
