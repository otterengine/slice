#ifndef OTTER_SLICE_H_
#define OTTER_SLICE_H_

struct otter_slice {
  unsigned long int len;
  void *ptr;
};

#define OTTER_SLICE_LEN_T(T, slice)                                            \
  (unsigned long int)((slice).len / (unsigned long int)(sizeof(T)))

#endif /* !OTTER_SLICE_H_ */
