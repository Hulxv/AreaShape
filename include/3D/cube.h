#ifndef CUBE_H
#define CUBE_H


class cube
{
    public:
        cube();
        float area();
        float volume();
        ~cube();

    private:
        float t; // length of edge
};

#endif // CUBE_H
