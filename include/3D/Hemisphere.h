#ifndef HEMISPHERE_H
#define HEMISPHERE_H


class Hemisphere
{
    public:
        Hemisphere();
        float area();
        virtual ~Hemisphere();

    protected:

    private:
        float radius;
};

#endif // HEMISPHERE_H
