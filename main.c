// dummy code for semaphores

struct semaphore
{
    int count;
    queueType queue;
};

void semWait(semaphore s){
    s.count--;
    if (s.count < 0){
        // place this process in queue
        // block this proc
    }
}
