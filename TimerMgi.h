#pragma once
#include <Arduino.h>

class TimerMgi {
    public:
        // Constructor
        TimerMgi( unsigned long set_point=0, bool elapsed=false );

        // Methods
        void SetSetPoint( unsigned long set_point );
        unsigned long GetSetPoint();
        void TickTimer();
        void ResetTimer();
        bool IsElapsed();
        void ForceElapsed();
        unsigned long GetElapsedTime();

    private:
        unsigned long curr_time_;
        unsigned long set_point_;
        bool elapsed_;
};
