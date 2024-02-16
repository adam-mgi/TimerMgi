#pragma once
#include <Arduino.h>

class TimerMgi {
    public:
        // Constructor
        TimerMgi( unsigned int set_point=0, bool elapsed=false );

        // Methods
        void SetSetPoint( unsigned int set_point );
        unsigned int GetSetPoint();
        void TickTimer();
        void ResetTimer();
        bool IsElapsed();

    private:
        unsigned long curr_time_;
        unsigned int set_point_;
        bool elapsed_;
};
