#pragma once

// Create first class
class Carton
{
    private:
        double length_; // "_" states it is private
        double width_;
        double height_;

    public:
        // Static constants
        // static const double kMaxSize;
        static const double KMinLength;
        static const double KMinWidth;
        static const double KMinHeight;
        // Constructor build/create your object
        Carton();
        Carton(double length, double width, double height);
        ~Carton();
        // Getters
        double length();
        double width();
        double height();
        //Setters
        void set_length(double length);
        void set_width(double width);
        void set_height(double height);
        // other methods
        void SetMeasurements(double length, double width, double height);
        void ShowInfo();
        double Volume() const;

}; // must have a ";"