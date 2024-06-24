int sum(int x, int y) {
	int z = x + y;
	return z;
}
int sub(int x, int y) {
	int z = x - y;
	return z;
}
int mul(int x, int y) {
	int z = x * y;
	return z;
}
int divv(int x, int y) {
	int z = x / y;
	return z;
}
int deg(int x, int y) {
	int z = 1;
	for (int w = 0; w < y; ++w) {
		z = z * x;

	}
	return z;
}