//
// Created by diedi on 07/04/2022.
//

#ifndef P05DIEGODIAZMORON_INCLUDE_KEY_H_
#define P05DIEGODIAZMORON_INCLUDE_KEY_H_

template<typename T>
class Key {
 public:
  Key(T key) : key_(key) {}
  ~Key() = default;

  T getKey() const { return key_; }
  void setKey(T key) { key_ = key; }

 private:
  T key_;
};

#endif //P05DIEGODIAZMORON_INCLUDE_KEY_H_
