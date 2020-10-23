#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H


class Parallelogram
{
    public:
        Parallelogram();
        float area();
        virtual ~Parallelogram();

    protected:

    private:
        float base, height;
};

#endif // PARALLELOGRAM_H
