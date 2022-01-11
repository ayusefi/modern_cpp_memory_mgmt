#include <iostream>
#include <cmath>

int main()
{
  size_t size = 100 * 1024;  // 100 [KiB]
  int i = 0;
  while (true)
  {
    i++;
    // Allocate 100KiB memory until crash
    char data[size * i];
    std::cerr << sizeof(data) / 1024 << " [KiB] Allocated in the stack\n";
  }

  return 0;
}