namespace gpu{

    typedef uint512_t = "0x000000000000000000000000000000"; //It is declared as a string. So, you can convert it into a 512-bit unsinged integer when the compilier and the processor supports it.
    typedef uint1024_t = "0x000000000000000000000000000000000000000000000000000000000000"; //New datatype uint1024_t of 1024 length bit. Declared as a string. Needs conversion to unsigned integer.
    typedef uint1024_t luminosity = "0x000000000000000000000000000000000000000000000000000000000000"; //Light intensity on an object
    typedef uint1024_t gradients = "0x000000000000000000000000000000000000000000000000000000000000";
    typedef uint1024_t shade = "0x000000000000000000000000000000000000000000000000000000000000";
    typedef uint1024_t pixel = "0x000000000000000000000000000000000000000000000000000000000000"; //Pixel gradient intensity
    
    typedef struct int512_t
    {
        uint512_t length_of_number;
        char number[length_of_number];
    };

    typedef struct int1024_t
    {
        uint1024_t length_of_number;
        char number[length_of_number];
    };

    typedef struct string
    {
        uint1024_t number_of_characters;
        char array[number_of_characters];
    };

    typedef struct gpu_information
    {
        uint64_t gpu_start_address;
        uint64_t gpu_end_address;
        int1024_t number_of_gpus;
        string gpu_names[number_of_gpus];
        int1024_t pcie_ids[number_of_gpus]; //Container for PCIE ids
        uint1024_t pcie_address[number_of_gpus]; //Container for PCIE addresses in RAM.
    };

    typedef struct gpu_data
    {
        
    };
}