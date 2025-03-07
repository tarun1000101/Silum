namespace gpu{

    typedef uint1024_t luminosity = "0x000000000000000000000000000000000000000000000000000000000000"; //Light intensity on an object.
    typedef uint1024_t gradients = "0x000000000000000000000000000000000000000000000000000000000000"; //Image gradient.
    typedef uint1024_t shade = "0x000000000000000000000000000000000000000000000000000000000000"; //1024-bit shade of an object.
    typedef uint1024_t pixel = "0x000000000000000000000000000000000000000000000000000000000000"; //Pixel gradient intensity.
    typedef uint1024_t colour = "0x000000000000000000000000000000000000000000000000000000000000"; //Colour value.

    typedef struct vector_element{
        uint1024_t size_of_data;
        char data[size_of_data];
    };
    
    typedef struct int512_t{
        uint512_t length_of_number;
        char number[length_of_number];
    };

    typedef struct int1024_t{
        uint1024_t length_of_number;
        char number[length_of_number];
    };

    typedef struct string{
        uint1024_t number_of_characters;
        char array[number_of_characters];
    };

    typedef struct float512_t{
        uint512_t integer;
        uint512_t fraction;
    };

    typedef struct float1024_t{
        uint1024_t integer;
        uint1024_t fraction;
    };

    typedef struct gpu_information{
        uint1024_t gpu_start_address_in_RAM;
        uint1024_t gpu_end_address_in_RAM;
        int1024_t number_of_gpus;
        string gpu_names[number_of_gpus];
        int1024_t pcie_ids[number_of_gpus]; //Container for PCIE ids
        uint1024_t pcie_address[number_of_gpus]; //Container for PCIE addresses in RAM.
    };

    typedef struct image_data{
        uint1024_t shader_image[7680][4320];
        uint1024_t red_image[7680][4320];
        uint1024_t blue_image[7680][4320];
        uint1024_t green_image[7680][4320];
        uint1024_t yellow_image[7680][4320];
        uint1024_t pixel_saturation[7680][4320];
    };

    typedef struct object_data{
        uint1024_t image [7680][4320];
        uint1024_t x_coordinate;
        uint1024_t y_coordinate;
        uint1024_t z_coordinate;
        uint1024_t electric_field;
        uint1024_t magnetic_field;
        uint1024_t radius_of_EM_field;
        uint1024_t frequency_of_vibration;
        uint1024_t radiation_of_object;
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
        uint1024_t time_flow;
        uint1024_t number_of_events;
        uint1024_t time_flow_array[number_of_events];
    };

    /*
    *   RAM is not cheap.
    *   Storage is not cheap.
    *   Microprocessors are not cheap.
    *   So are GPUs.
    */

    /*
    * 1 + 9 + 9 + 0 = 10 = 1 + 0 = 1 --> Sun.
    * 2 + 0 + 0 + 0 = 2 --> Moon.
    * 2 + 0 + 1 + 0 = 3 --> Mercury.
    * 2 + 0 + 2 + 0 = 4 --> Conscious and Subconsious.
    * 2 + 0 + 3 + 0 = 5 --> Mars.
    * 2 + 0 + 4 + 0 = 6 --> Jupiter.
    * 2 + 0 + 5 + 0 = 7 --> Uranus.
    * 2 + 0 + 6 + 0 = 8 --> Venus.
    * 2 + 0 + 7 + 0 = 9 --> Saturn.
    * 2 + 0 + 8 + 0 = 10 = 1 + 0 --> During this time, Neptunes are going to be born.
    * 2 + 0 + 9 + 0 = 11 + 1 + 1 --> During this time, Plutos are going to be born
    * 
    * The above numbers correspond to decades.
    * 
    * Using that logic, these are people are going to be born during that time.  
    */

    typedef struct set
    {
        uint1024_t number_of_elements;
        uint1024_t element_array[number_of_elements];
    };

    typedef struct path_data_ten_bit
    {
        string direction;
        float1024_t force_of_object;
    };

    typedef struct matrix //To do linear algebra and vector calculus in the GPU.
    {
        uint1024_t row;
        uint1024_t column;
        uint1024_t matrix[row][column];
    };

    typedef struct vector_sixty_four_byte
    {
        uint512_t number_of_elements;
        uint512_t vector[number_of_elements];
    };

    typedef struct vector_one_hundered_twenty_eight_byte
    {
        uint1024_t number_of_elements;
        uint1024_t vector[number_of_elements];
    };

    typedef struct vector_sixteen_byte
    {
        uint128_t number_of_elements;
        uint128_t vector[number_of_elements];
    };
}