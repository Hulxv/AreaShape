#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
    public:
        Circle();

        float area();

        virtual ~Circle();

    protected:

    private:
        float radius;
        const double pi = 3.14159;
};

#endif // CIRCLE_H
