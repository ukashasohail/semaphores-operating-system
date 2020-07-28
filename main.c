// dummy code for semaphores
// operating system by william stallings

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

void semSignal(semaphore s){
    s.count++;
    if (s.count <=0){
        // remove a proc P from s.queue
        // place proc P on ready list
    }
}