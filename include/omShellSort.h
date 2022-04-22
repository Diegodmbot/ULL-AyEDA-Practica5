//
// Created by diedi on 22/04/2022.
//

#ifndef P05DIEGODIAZMORON_INCLUDE_OMSHELLSORT_H_
#define P05DIEGODIAZMORON_INCLUDE_OMSHELLSORT_H_

#include "OrdinationMethod.h"

// omRadixSort class heredates from OrdinationMethod class
template <typename T>
class omShellSort : public OrdinationMethod<T> {
 public:
  void sort(std::vector<T> &vector_, int size);
};

template <typename T>
void omShellSort<T>::sort(std::vector<T> &vector_, int size) {
  int j;
  T temp;
  for (int h = size / 2; h > 0; h /= 2) {
    for (int i = h; i < size; i++) {
      temp = vector_[i];
      for (j = i; j >= h && vector_[j - h] > temp; j -= h) {
        vector_[j] = vector_[j - h];
      }
      vector_[j] = temp;
    }
  }
}

#endif //P05DIEGODIAZMORON_INCLUDE_OMSHELLSORT_H_

//TODO: Implementar el algoritmo de ordenamiento ShellSort correctamente