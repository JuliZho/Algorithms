#include <vector>
#include <iostream>
using namespace std;

vector<int> bubbleSort(vector<int> array)
{
  if (array.empty())
  {
    return {};
  }
  bool isSorted = false;
  while (!isSorted)
  {
    isSorted = true;
    for (int i = 0; i < array.size() - 1; i++)
    {
      if (array[i] > array[i + 1])
      {
        swap(array[i], array[i + 1]);
        isSorted = false;
      }
    }
  }

  return array;
}

int main()
{
  vector<int> array = {1, 0, 9, 5, 13, 80, 70, 45, 32, -2};
  vector<int> newArray = bubbleSort(array);
  int i = 1;
  for (int number : newArray)
  {

    cout << i << " :  " << number << endl;
    i++;
  }
}
