#ifndef RECTANGLE_H
#define RECTANGLE_H


class Rectangle
{
    public:
        Rectangle();
        float area();
        virtual ~Rectangle();

    protected:

    private:
        float width, lenght;
};

#endif // RECTANGLE_H
