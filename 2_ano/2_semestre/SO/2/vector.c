#include <stdlib.h>
#include <math.h>

#include "vector.h"

vector* vector_new(double x, double y, double z) {
  vector* w = (vector*) malloc(sizeof(vector));
  w->x = x;
  w->y = y;
  w->z = z;
  return w;
}

vector* vector_add(vector* a, vector* b) {
  return vector_new(a->x + b->x, a->y + b->y, a->z + b->z);
}

vector* vector_sub(vector* a, vector* b) {
  return vector_new(a->x - b->x, a->y - b->y, a->z - b->z);
}

vector* vector_scale(double n, vector* a) {
  return vector_new(n * a->x, n * a->y, n * a->z);
}

vector* vector_vprod(vector* a, vector* b) {
  return vector_new(a->y * b->z - a->z * b->y, a->z * b->x - a->x * b->z, a->x * b->y - a->y * b->x);
}

double  vector_sprod(vector* a, vector* b) {
  return (a->x * b->x + a->y * b->y + a->z * b->z);
}

double  vector_mod(vector* a) {
  return sqrt(pow(a->x, 2) + pow(a->y, 2) + pow(a->z, 2));
}
