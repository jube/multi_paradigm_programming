template<typename T, std::size_t N>
struct Array {
  T data[N];
};

template<template<typename> class T>
std::size_t size(const T& container) {
  return container.size();
}

template<typename T>
using Ptr = T*;

template<class T>
constexpr T pi = T(3.1415926535897932385L); // C++14
