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
  void sort(std::vector<T> &vector_, int start, int end);
};

template<typename T>
void omQuickSort<T>::sort(std::vector<T> &vector_, int start, int end) {
  if (start < end) {
    int pivot = vector_[end];
    int i = start - 1;
    for (int j = start; j < end; j++) {
      if (vector_[j] <= pivot) {
        i++;
        std::swap(vector_[i], vector_[j]);
      }
    }
    std::swap(vector_[i + 1], vector_[end]);
    int p = i + 1;
    sort(vector_, start, p - 1);
    sort(vector_, p + 1, end);
  }
}
template<typename T>
void omQuickSort<T>::sort(std::vector<T> &vector_, int size) {
  sort(vector_, 0, size - 1);
}


#endif //P05DIEGODIAZMORON_INCLUDE_OMQUICKSORT_H_
