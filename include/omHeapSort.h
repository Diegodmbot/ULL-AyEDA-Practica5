//
// Created by diedi on 11/04/2022.
//

#ifndef P05DIEGODIAZMORON_INCLUDE_HEAPSORT_H_
#define P05DIEGODIAZMORON_INCLUDE_HEAPSORT_H_

#include "OrdinationMethod.h"

template<typename T>
class omHeapSort : public OrdinationMethod<T> {
 public:
  void sort(std::vector<T> &vector_, int size);
};

// implements a method that sorts a vector using the heap sort algorithm passing vector and size
template<typename T>
void omHeapSort<T>::sort(std::vector<T> &vector_, int size) {
  T temp;
  for (int i = size / 2 - 1; i >= 0; i--) {
    for (int j = i; j < size; j++) {
      if (vector_[j] > vector_[i]) {
        temp = vector_[i];
        vector_[i] = vector_[j];
        vector_[j] = temp;
      }
    }
    print(vector_, size);
  }
  for (int i = size - 1; i >= 0; i--) {
    temp = vector_[0];
    vector_[0] = vector_[i];
    vector_[i] = temp;
    for (int j = 0; j < i; j++) {
      if (vector_[j] > vector_[j + 1]) {
        temp = vector_[j];
        vector_[j] = vector_[j + 1];
        vector_[j + 1] = temp;
      }
    }
    print(vector_, size);
  }
}

#endif //P05DIEGODIAZMORON_INCLUDE_HEAPSORT_H_
