//
// Created by diedi on 07/04/2022.
//

#ifndef P05DIEGODIAZMORON_INCLUDE_KEY_H_
#define P05DIEGODIAZMORON_INCLUDE_KEY_H_

template<typename T>
class Key {
 public:
  Key() = default;
  Key(T key) : key_(key) {}
  ~Key() = default;

  T getKey() const { return key_; }
  void setKey(T key) { key_ = key; }

  // Operators
  bool operator<(const Key<T> &other) const;
  bool operator>(const Key<T> &other) const;
  bool operator<=(const Key<T> &other) const;
  T operator/(const Key<T> &other) const;
 private:
  friend std::ostream &operator<<(std::ostream &os, const Key<T> &key) {
    os << key.key_;
    return os;
  }
  friend std::istream &operator>>(std::istream &is, Key<T> &key) {
    is >> key.key_;
    return is;
  }
  T key_;
};

template<typename T>
bool Key<T>::operator<(const Key<T> &other) const {
  return key_ < other.key_;
}

template<typename T>
bool Key<T>::operator>(const Key<T> &other) const {
  return key_ > other.key_;
}

template<typename T>
bool Key<T>::operator<=(const Key<T> &other) const {
  return key_ <= other.key_;
}

template<typename T>
T Key<T>::operator/(const Key<T> &other) const {
  return key_ / other.key_;
}

#endif //P05DIEGODIAZMORON_INCLUDE_KEY_H_
