#include <stdio.h>
#include <unistd.h>

int main()
{
    int p_id, p_pid;

    p_id = getpid(); /*process id*/
    p_pid = getpid(); /*parent process id*/

    printf("Process ID: %d\n", p_id);
    printf("Parent Process ID: %d\n", p_pid);

    return 0;
} 

output
Process ID: 15560
Parent Process ID: 15560

--------------------------------
Process exited after 8.998 seconds with return value 0
Press any key to continue . . .
