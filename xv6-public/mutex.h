#include "types.h"
#include "spinlock.h"

struct ListLink {
  struct proc *process;
  struct ListLink *next;
};

typedef struct mutex {
  uint locked;       // Is the lock held?
  struct spinlock lk; // spinlock protecting this mutex
  struct proc *holder;
  struct ListLink *queue;
  
  // For debugging:
  char *name;        // Name of lock.
  int pid;           // Process holding lock
} mutex;
