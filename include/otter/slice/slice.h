#ifndef OTTER_SLICE_SLICE_H_
#define OTTER_SLICE_SLICE_H_

struct otter_slice otter_slice_slice(struct otter_slice slice,
                                     unsigned long int start,
                                     unsigned long int end);

#define OTTER_SLICE_SLICE_T(T, slice, start, end)                              \
  otter_slice_slice(                                                           \
      (slice), (unsigned long int)(sizeof(T)) * (unsigned long int)(start),    \
      (unsigned long int)(sizeof(T)) * (unsigned long int)(end))

#endif /* !OTTER_SLICE_SLICE_H_ */
