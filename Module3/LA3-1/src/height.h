#pragma once

class Height
{
    private:
        double inches_;
    public:
        Height();
        ~Height();
        //Getter & Setter
        double inches() const;
        void set_inches(double inches);
};