#ifndef CONE_H
#define CONE_H


class Cone
{
    public:
        Cone();

        float area();
        float volume();
        ~Cone();

    private:
        float radius;
        float height;
        const double pi = 3.14159;
};

#endif // CONE_H
