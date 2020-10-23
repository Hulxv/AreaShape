#ifndef TRAPEZIUM_H
#define TRAPEZIUM_H


class Trapezium
{
    public:
        Trapezium();
        float area();
        virtual ~Trapezium();

    protected:

    private:
        float base1 ,base2, height;
};

#endif // TRAPEZIUM_H
