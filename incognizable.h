#pragma once

class Incognizable {
    private:
        int x_;
        int y_;
    public:
        Incognizable(): x_(0), y_(0) {};
        Incognizable(int x): x_(x), y_(0) {};
        Incognizable(int x, int y): x_(x), y_(y) {};
};
