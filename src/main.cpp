#include <iostream>
#include <random>

#include "../include/Key.h"
#include "../include/OrdinationMethod.h"
#include "../include/omSelection.h"
#include "../include/omQuickSort.h"
#include "../include/omShellSort.h"
#include "../include/omHeapSort.h"
#include "../include/omRadixSort.h"

typedef Key<int> keyType;

int main(){
  std::cout << "ALGORITMO DE ORDENACION" << std::endl;
  // Tamano del vector
  std::cout << "Ingrese el tamano del vector: ";
  int size;
  std::cin >> size;
  std::vector<keyType> vector_(size);
  // Llenar el vector
  std::cout << "Seleccione como desea llenar el vector: " << std::endl;
  std::cout << "1. Aleatorio" << std::endl;
  std::cout << "2. Manual" << std::endl;
  int option;
  std::cin >> option;
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(1000, 9999);
  switch (option) {
    case 1:
      for (int i = 0; i < size; i++) {
        vector_[i] = dis(gen);
      }
      break;
    case 2:
      for (int i = 0; i < size; i++) {
        std::cout << "Ingrese el valor " << i + 1 << ": ";
        std::cin >> vector_[i];
      }
      break;
    default:
      std::cout << "Opcion no valida" << std::endl;
      return 0;
  }
  // show vector
  std::cout << "Vector: ";
  for (int i = 0; i < size; i++) std::cout << vector_[i] << " ";
  std::cout << std::endl;
  std::cout << "Seleccione el metodo de ordenacion: " << std::endl;
  std::cout << "1. Selection" << std::endl;
  std::cout << "2. QuickSort" << std::endl;
  std::cout << "3. ShellSort" << std::endl;
  std::cout << "4. HeapSort" << std::endl;
  std::cout << "5. RadixSort" << std::endl;
  std::cin >> option;
  OrdinationMethod<keyType>* ordinationMethod_;
  switch (option) {
    case 1:
      ordinationMethod_ = new omSelection<keyType>();
      break;
    case 2:
      ordinationMethod_ = new omQuickSort<keyType>();
      break;
    case 3:
      ordinationMethod_ = new omShellSort<keyType>();
      break;
    case 4:
      ordinationMethod_ = new omHeapSort<keyType>();
      break;
    case 5:
      ordinationMethod_ = new omRadixSort<keyType>();
      break;
    default:
      std::cout << "Opcion no valida" << std::endl;
      return 0;
  }
  // Ordenar el vector
  std::cout << "Ordenando..." << std::endl;
  ordinationMethod_->sort(vector_, size);
  std::cout << "Vector ordenado: ";
  for (int i = 0; i < size; i++) std::cout << vector_[i] << " ";
  std::cout << std::endl;
  return 0;
}