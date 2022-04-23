//
// Created by diedi on 07/04/2022.
//

#ifndef P05DIEGODIAZMORON_INCLUDE_OMQUICKSORT_H_
#define P05DIEGODIAZMORON_INCLUDE_OMQUICKSORT_H_

#include "OrdinationMethod.h"

template<typename T>
class omQuickSort : public OrdinationMethod<T> {
 public:
  void sort(std::vector<T> &vector_, int size);
};

// implement quick sort algorithm passing the vector and the size
template<typename T>
void omQuickSort<T>::sort(std::vector<T> &vector_, int size) {
  T temp;
  int i = 0;
  int j = size - 1;
  int k = (i + j) / 2;
  while (i < j) {
    while (vector_[i] < vector_[k]) i++;
    while (vector_[j] > vector_[k]) j--;
    if (i <= j) {
      temp = vector_[i];
      vector_[i] = vector_[j];
      vector_[j] = temp;
      i++;
      j--;
    }
  }
  if (j > 0) omQuickSort<T>::sort(vector_, j);
  // cambiar
  if (i < size - 1) omQuickSort<T>::sort(vector_, size);
}
#endif //P05DIEGODIAZMORON_INCLUDE_OMQUICKSORT_H_
