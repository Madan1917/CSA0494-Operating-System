
#include <pthread.h>
#include <stdio.h>

void *thread_function(void *arg)
{
    char *message;
    message = (char *) arg;
    printf("%s\n", message);
    return NULL;
}

int main()
{
    pthread_t a_thread;
    int result;
    char *message1 = "Thread 1";
    char *message2 = "Thread 2";

    result = pthread_create(&a_thread, NULL, thread_function, (void *) message1);
    if (result != 0) {
        perror("Thread creation failed");
        exit(1);
    }

    printf("Thread created\n");
    pthread_join(a_thread, NULL);
    printf("Thread joined\n");

    result = pthread_create(&a_thread, NULL, thread_function, (void *) message2);
    if (result != 0) {
        perror("Thread creation failed");
        exit(1);
    }

    printf("Thread created\n");
    pthread_join(a_thread, NULL);
    printf("Thread joined\n");

    exit(0);
}
