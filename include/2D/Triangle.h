#ifndef TRIANGLE_H
#define TRIANGLE_H


class Triangle
{
    public:
        Triangle();
        float area();
        virtual ~Triangle();

    protected:

    private:
        float height, base;
};

#endif // TRIANGLE_H
