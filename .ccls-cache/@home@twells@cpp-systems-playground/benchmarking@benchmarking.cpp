#include <chrono>
#include <iostream>

int main() {

  auto start = std::chrono::high_resolution_clock::now();

  for (int i = 0; i < 1000000000; i++) {
    volatile int x = i * 2; // Using volatile to prevent optimization
  }

  auto end = std::chrono::high_resolution_clock::now();

  auto duration = end - start;

  auto milliseconds =
      std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
  std::cout << "Time taken by for loop: " << milliseconds << " milliseconds"
            << std::endl;

  return 0;
}
