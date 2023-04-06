//1. algoritma membantu kita dalam menyelesaikan masalah dengan cepat karena kita merancang
//   dari awal dan mengindentifikasi suatu masalah sebelum di buat menjadi sebuah program
//2. dua data struktuk algotima
//   -
//   -
//3. 
//4. quicksort karena programnya sangat mudah
//5.
//6.
#include <iostream>
#include <set>
using namespace std;

int tam[41];
int cmp_count = 0;
int mov_count = 0;
int n;


void input() {
	while (true)
	{
		cout << "masukkan jummlah data pada array : ";
		cin >> n;

		if (n >= 41) {
			return;
		}
		else
		{
			cout << "\nArray yang anda masukan maksimal 21 elemen. \n";
		}
	}
	cout << endl;
	cout << "=====================" << endl;
	cout << "Masukan Element Array" << endl;
	cout << "=====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "Data ke-" << (i + 1) << ": ";
		cin >> tam[i];
	}
}

void mergesort(int low,int mid, int high)
{
	int pivot, i, ac;
	if (low >= high)
		return;

	pivot = tam[low];								

	i = low;								
	ac = mid + 1;

	while (i <= ac)										
	{
		while ((arr[i] <= pivot) && (i <= high))		
		{
			i++;										
			cmp_count++;
		}
		cmp_count++;

		while ((tam[ac] > pivot) && (ac>= low))			
		{
			ac--;										
			cmp_count++;
		}
		cmp_count++;

		if (i < ac)
		{
			swap(i, j);
			mov_count++;
		}
	}
	if (low < ac)										
	{
		
		swap(low, ac);
		mov_count++;
	}
	mergesort(low, ac - 1);								

	mergesort(ac + 1, high);								
}

void display() {				// procedure display
	cout << endl;										 // output baris kosong
	cout << "\n==================================" << endl;		// output ke layar
	cout << "Element Array yang telah tersusun" << endl;		// output ke layar
	cout << "==================================" << endl;		// output ke layar

	for (int j = 0; j < n; j++) {				
		cout << tam[ac] endl;							
	}
	cout << endl;									
}

int main()
{
	input();							
	mergesort();					
	display();						
}