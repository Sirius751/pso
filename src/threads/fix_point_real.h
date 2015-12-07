
#define f 1<<14

int convert_fixed(int n);

int convert_int_zero(int x);

int convert_int_nearest(int x);

int add_real(int x, int y);

int add_int(int x, int n);

int substract_real(int x, int y);

int substract_int(int x, int n);

int multiply_real(int x, int y);

int multiply_int(int x, int n);

int divide_real(int x, int y);

int divide_int(int x, int n);

int convert_fixed(int n){
	return n*f;
}

int convert_int_zero(int x){
	return x/f;
}

int convert_int_nearest(int x){
	if(x >= 0)
		return (x + 2/f) /f;
	if(x <= 0)
		return (x - 2/f) / f;
}

int add_real(int x, int y){
	return x + y;
}

int substract_real(int x, int y){
	return x-y;
}

int multiply_real(int x, int y){
	return ((int64_t)x)*y/f;
}

int multiply_int(int x, int n){
	return x * n;
}

int divide_real(int x, int y){
	return ((int64_t)x)*f/y;
}

int divide_int(int x, int n){
	return x / n;
}

int add_int(int x, int n){
	return x + n * f;
}

int substract_int(int x, int n){
	return x - n * f;
}
