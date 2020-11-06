#ifndef CYLINDER_H
#define CYLINDER_H


class cylinder
{
    public:
        cylinder();

        float area();
        float volume();
        ~cylinder();



    private:
        float radius ; //radius of circular base
        float height ; // height of cylinder
        const double pi = 3.14159;  // pi value
};

#endif // CYLINDER_H
