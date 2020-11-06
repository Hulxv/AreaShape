#ifndef RECTANGULAR_PRISM_H
#define RECTANGULAR_PRISM_H


class Rectangular_prism
{
    public:
        Rectangular_prism();
        float area();
        float volume();
        ~Rectangular_prism();


    private:
        float width, length, height;
};

#endif // RECTANGULAR_PRISM_H
