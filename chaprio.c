#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc,char *argv[])
{
  int pri,pid;

  pid = atoi(argv[1]);
  pri = atoi(argv[2]);

  chpr(pid,pri);

  exit();

}
