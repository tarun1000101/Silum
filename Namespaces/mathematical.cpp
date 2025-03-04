namespace mathematical{

    typedef struct data_container
    {
        uint1024_t data_length;
        char data_array[data_length];
    }

    template set<class set>
    class set{
        
        set(uint1024_t length_of_container, char *data)
        {
            data_container dc;
            dc.data_length = length_of_container;
            dc.data = this.data;
            dc = new data_container();
        }
    }
}