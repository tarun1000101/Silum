class trignometry{
    protected:

    double sinusoidal = 0;
    double cosinusoidal = 0;
    double tangential = 0;

    public:
        double sinusoidal (double height, double length_of_tangent)
        {
            sinusoidal = height/length_of_tangent;
            return sinusoidal;
        }

        double cosinusoidal (double height, double length_of_tangent)
        {
            cosinusoidal = height/length_of_tangent;
            return cosinusoidal;
        }

        double tangential (double length_of_tangent, double height)
        {
            tangential = length_of_tangent/height;
            return tangential;
        }
};