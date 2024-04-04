#include "types.h"
#include "spinlock.h"

typedef struct mutex {
  uint locked;       // Is the lock held?
  struct spinlock lk; // spinlock protecting this mutex
  // struct proc *holder;
  struct proc* queue[256];
  
  // For debugging:
  char *name;        // Name of lock.
  int pid;           // Process holding lock
} mutex;

