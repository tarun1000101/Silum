namespace networking{
    int *socket;
    char *socket_name;
    uint1024_t starting_memory_address;
    uint1024_t ending_memory_address;
    char message_block[ending_memory_address - starting_memory_address];
    int ACK;
    char *ipvfour_address;
    char *ipvsix_address;
}