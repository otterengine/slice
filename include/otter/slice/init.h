#ifndef OTTER_SLICE_INIT_H_
#define OTTER_SLICE_INIT_H_

struct otter_slice otter_slice_init(unsigned long int len, void *ptr);

#define OTTER_SLICE_INIT_T(T, len, ptr)                                        \
  otter_slice_init((len) * sizeof(T), (void *)(ptr))

#endif /* !OTTER_SLICE_INIT_H_ */
