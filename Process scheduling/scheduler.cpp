struct process
{

    uint64_t *process_id;// A pointer to the process id stored in RAM.
    uint64_t control_block_start_address;//Contains all the information required to control the process. Like fork() and join()
    uint64_t control_block_end_address;
     message_block;
};

class process
{

};