//
// Created by diedi on 07/04/2022.
//

#ifndef P05DIEGODIAZMORON_INCLUDE_ORDENATIONMETHOD_H_
#define P05DIEGODIAZMORON_INCLUDE_ORDENATIONMETHOD_H_

#include <vector>

const int kMaximunNumber = 9999;
const int kMinimunNumber = 1000;

template<typename T>
class OrdinationMethod {
 public:
  virtual void sort(std::vector<T> &vector_, int size) = 0;
  void print(std::vector<T> &vector_, int size);
};
template<typename T>
void print(std::vector<T> &vector_, int size) {
  std::cout << "Vector: ";
  for (int i = 0; i < size; i++) {
    std::cout << vector_[i] << " ";
  }
  std::cout << std::endl;
}


#endif //P05DIEGODIAZMORON_INCLUDE_ORDENATIONMETHOD_H_
