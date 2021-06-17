#include "types.h"
#include "stat.h"
#include "user.h"

int 
main(int argc, char *argv[]) 
{
    int mypid = 0;
    // mypid = getpid();
    // mypid = -1;
    // mypid = getpid();
    // mypid = getpid();
    // mypid = getpid();
    // printf(1, "pid: %d\n", mypid);
    // printf(1, "numOfCall: %d\n", getnumsyscalls(getpid()));
    // mypid = getpid();
    // printf(1, "pid: %d\n", mypid);
    // printf(1, "numOfCallGood: %d\n", getnumsyscallsgood(getpid())); // 只能有一个

    // printf(1, "numOfCallGood: %d\n", getnumsyscallsgood(mypid));


    // printf(1, "argv[0]: %s\n", argv[0]);
    // printf(1, "argv[1]: %s\n", argv[1]);
    // printf(1, "argv[2]: %s\n", argv[2]);
    int x = atoi(argv[1]);
    // printf(1, "x: %d\n", x);
    int y = atoi(argv[2]);
    // printf(1, "y: %d\n", y);

    if ((x > 0) && (y > 0))
    {
        for (int i = 0; i < y; ++i)
        {
            mypid = getpid();
        }
        for (int i = 0; i < x - y; ++i)
        {
            kill(-1);
        }
        printf(1, "%d %d\n", getnumsyscalls(mypid), getnumsyscallsgood(mypid));
    }
    // for (int j = 0; j < x-y; ++j)
    // {
    //     printf(1, "numOfGoodCall: %d\n", getnumsyscallsgood(mypid));
    // }



    exit();
} 

// syscalls N g. This program takes two arguments: N, which is the total number of system 
// calls that it should make, and g, which is the number of those which should be successful. 