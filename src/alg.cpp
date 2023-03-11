// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = 1.0;
    for (int num = 0; num < n; num++) {
        res *= value;
    }
    return res;
}

uint64_t fact(uint16_t n) {
  uint64_t res = 1;
    for (int num = 2; num <= n; num++) {
        res *= num;
    }
    return res;
}

double calcItem(double x, uint16_t n) {
  return pown(x, n) / fact(n);
}

double expn(double x, uint16_t count) {
  double res = 1.0;
    for (int num = 1; num <= count; num++) {
        res += calcItem(x, num);
    }
    return res;
}

double sinn(double x, uint16_t count) {
  double res = 0.0;
    for (int num = 0; num < count; num++) {
        res += calcItem(x, 2 * num + 1) * pown(-1, num);
    }
    return res;
}

double cosn(double x, uint16_t count) {
  double res = 0.0;
    for (int num = 0; num < count; num++) {
        res += calcItem(x, 2 * num) * pown(-1, num);
    }
    return res;
}
