#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

main()
{
    int process_id;

    printf("Howdy\n");
    process_id = fork();
    fork();
    if (process_id == -1)
    {
        perror("error creating process using fork");
        exit();
    }
    if (process_id == 0)
    {
        printf("I am the child process.\n");
    }
}

