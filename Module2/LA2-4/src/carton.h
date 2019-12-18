#pragma once

// Create first class
class Carton
{
    private:
        double length_; // "_" states it is private
        double width_;
        double height_;

    public:
        // Constructor build/create your object
        Carton();
        // Getters
        double length();
        double width();
        double height();
        //Setters
        void set_length(double length);
        void set_width(double width);
        void set_height(double height);
        // other methods
        void ShowInfo();

}; // must have a ";"