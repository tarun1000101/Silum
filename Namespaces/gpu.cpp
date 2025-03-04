namespace gpu{

    typedef uint512_t = "0x000000000000000000000000000000"; //It is declared as a string. So, you can convert it into a 512-bit unsinged integer when the compilier and the processor supports it.
    typedef uint1024_t = "0x000000000000000000000000000000000000000000000000000000000000"; //New datatype uint1024_t of 1024 length bit. Declared as a string. Needs conversion to unsigned integer.
    typedef uint1024_t luminosity = "0x000000000000000000000000000000000000000000000000000000000000"; //Light intensity on an object.
    typedef uint1024_t gradients = "0x000000000000000000000000000000000000000000000000000000000000"; //Image gradient.
    typedef uint1024_t shade = "0x000000000000000000000000000000000000000000000000000000000000"; //1024-bit shade of an object.
    typedef uint1024_t pixel = "0x000000000000000000000000000000000000000000000000000000000000"; //Pixel gradient intensity.
    
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

    typedef struct float512_t
    {
        uint512_t integer;
        uint512_t fraction;
    };

    typedef struct float1024_t
    {
        uint1024_t integer;
        uint1024_t fraction;
    };

    typedef struct gpu_information
    {
        uint1024_t gpu_start_address_in_RAM;
        uint1024_t gpu_end_address_in_RAM;
        int1024_t number_of_gpus;
        string gpu_names[number_of_gpus];
        int1024_t pcie_ids[number_of_gpus]; //Container for PCIE ids
        uint1024_t pcie_address[number_of_gpus]; //Container for PCIE addresses in RAM.
    };

    typedef struct gpu_data
    {
        uint1024_t shader_image[7680][4320];
        uint1024_t red_image[7680][4320];
        uint1024_t blue_image[7680][4320];
        uint1024_t green_image[7680][4320];
        uint1024_t yellow_image[7680][4320];
        uint1024_t pixel_saturation[7680][4320];
    };

    typedef struct object_data
    {
        uint1024_t image [7680][4320];
        uint1024_t x_coordinate_in_world_model;
        uint1024_t y_coordinate_in_world_mode;
        uint1024_t z_coordinate_in_world_model;
        uint1024_t angle_with_respect_to_plane;
        uint1024_t electric_field;
        uint1024_t magnetic_field;
        uint1024_t radius_of_EM_field;
        uint1024_t weight_of_object;
        uint1024_t number_of_vertices;
        uint1024_t graph_of_object [number_of_vertices];
        uint1024_t mass_of_object;
    };

    typedef struct gpu_vector
    {
        uint1024_t length_of_vector;
        uint1024_t vector[length_of_vector];
    };

    typedef struct tensor
    {
        uint1024_t length_of_material;
        uint1024_t first_dimension [length_of_material];
        uint1024_t second_dimension [length_of_material];
        uint1024_t third_dimension [length_of_material];
    };

    typedef struct fourth_dimension
    {
        uint1024_t time_flow;
        uint1024_t number_of_events;
        uint1024_t time_flow_array[number_of_events];

    };

    typedef struct fifth_dimension{
        uint1024_t radius_of_energy_radiation;
        uint1024_t energy_field_matrix[radius_of_energy_radiation][radius_of_energy_radiation];
    };

    typedef struct set{
        uint1024_t number_of_elements;
        uint1024_t element_array[number_of_elements];
    };

    typedef struct path_data{
        string direction;
        float1024_t force_of_object;
    };
}