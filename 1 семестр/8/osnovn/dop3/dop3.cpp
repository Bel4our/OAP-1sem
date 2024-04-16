#include <iostream>
using namespace std;
void main()
{
    setlocale(LC_ALL, "rus");
	int n, max, min, count = 0;
float x;
cout << "¬ведите n: ";
cin >> n;

float* array = new float[n];
for (int i = 0; i < n; i++)
{
  cout << "¬ведите x: ";
  cin >> x;
  array[i] = x;
}
max = 0;
min = 0;
for (int i = 0; i < n; i++) {
  if (array[i] < array[min])
    min = i;
  if (array[i] > array[max])
    max = i;

}
if (min < max) 
{
  for (int i = min + 1; i < max; i++) 
  {
    count++;

  }
  cout << count;

}
}