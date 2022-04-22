//
// Created by diedi on 11/04/2022.
//

#ifndef P05DIEGODIAZMORON_INCLUDE_OMRADIXSORT_H_
#define P05DIEGODIAZMORON_INCLUDE_OMRADIXSORT_H_

#include "OrdinationMethod.h"


// omRadixSort class heredates from OrdinationMethod class
template <typename T>
class omRadixSort : public OrdinationMethod<T> {
 public:
  void sort(std::vector<T> &vector_, int size);
};

// implements the radix sort algorithm passing the vector and the size of the vector
template <typename T>
void omRadixSort<T>::sort(std::vector<T> &vector_, int size) {
  for(int i = 1; kMinimunNumber / i > 0; i *= 10){
    std::vector<T> aux(size);
    int count[10] = {0};
    for(int j = 0; j < size; j++){
      int digit = (vector_[j] / i) % 10;
      count[digit]++;
    }
    for(int j = 1; j < 10; j++){
      count[j] += count[j - 1];
    }
    for(int j = size - 1; j >= 0; j--){
      int digit = (vector_[j] / i) % 10;
      aux[count[digit] - 1] = vector_[j];
      count[digit]--;
    }
    for (i = 0; i < size; i++)
      vector_[i] = aux[i];
  }
}


#endif //P05DIEGODIAZMORON_INCLUDE_OMRADIXSORT_H_

// https://www.geeksforgeeks.org/radix-sort/
