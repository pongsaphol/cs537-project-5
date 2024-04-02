#include "types.h"
#include "spinlock.h"

typedef struct {
  uint locked;       // Is the lock held?
  struct spinlock lk; // spinlock protecting this mutex
  
  // For debugging:
  char *name;        // Name of lock.
  int pid;           // Process holding lock
} mutex;

