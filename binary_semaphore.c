// dummy code for binary semaphores
// operating system by william stallings


struct binary_semaphore
{
    enum {zero,one} value;
    queueType queue;
};

void semWaitB(binary_semaphore s){
    if (s.value == one){
        s.value = zero;
    } else
    {
        // place this process in s.queue
        // block this proc
    }
    
}

void semSignalB(binary_semaphore s){
    if (s.queue.is_empty()){
        s.value = one;
    }
    else
    {
        // removes the process P from s.queue
        // place proc P on ready list
    }
    
}
