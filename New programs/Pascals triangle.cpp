#include <iostream>
using namespace std;


int Coefficient(int n, int k);

void Pascal(int n)
{
	for (int l = 0; l < n; l++) {
		for (int i = 0; i <= l; i++)
			cout << " " << Coefficient(l, i);
		cout << "\n";
	}
}

int Coefficient (int n, int k)
{
	int r = 1;
	if (k > n - k)
		k = n - k;
	for (int i = 0; i < k; ++i) {
		r *= (n - i);
		r /= (i + 1);
	}

	return r;
}

int main()
{
    int n;
    cout<<"Enter the number of rows you need to print:"<<endl;
    cin>>n;
	Pascal(n);
	return 0;
}

