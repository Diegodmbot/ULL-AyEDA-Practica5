//
// Created by diedi on 07/04/2022.
//

#ifndef P05DIEGODIAZMORON_INCLUDE_OMSELECTION_H_
#define P05DIEGODIAZMORON_INCLUDE_OMSELECTION_H_

#include "OrdinationMethod.h"

template <typename T>
class omSelection : public OrdinationMethod<T> {
 public:
  void sort(std::vector<T> &vector_, int size);
};

// implement sort selection method passing the vector and the size
template <typename T>
void omSelection<T>::sort(std::vector<T> &vector_, int size) {
  int min;
  T aux;
  for (int i = 0; i < size; i++) {
    min = i;
    for (int j = i + 1; j < size; j++) {
      if (vector_[j] < vector_[min]) {
        min = j;
      }
    }
    aux = vector_[i];
    vector_[i] = vector_[min];
    vector_[min] = aux;
  }
}


#endif //P05DIEGODIAZMORON_INCLUDE_OMSELECTION_H_
