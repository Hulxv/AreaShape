#ifndef SPHERE_H
#define SPHERE_H


class Sphere
{
    public:
        Sphere();
        float area();
        float volume();
        virtual ~Sphere();

    protected:

    private:
        float radius;
};

#endif // SPHERE_H
