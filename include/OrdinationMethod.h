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
};

#endif //P05DIEGODIAZMORON_INCLUDE_ORDENATIONMETHOD_H_
