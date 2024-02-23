#include <TimerMgi.h>

TimerMgi::TimerMgi(unsigned long set_point, bool elapsed) {
    TimerMgi::elapsed_ = elapsed;
    TimerMgi::set_point_ = set_point;
    TimerMgi::curr_time_ = millis();
}

void TimerMgi::SetSetPoint( unsigned long set_point ) {
    TimerMgi::set_point_ = set_point;
}

unsigned int TimerMgi::GetSetPoint() {
    return TimerMgi::set_point_;
}

void TimerMgi::TickTimer() {
    if (millis() - TimerMgi::curr_time_ >= TimerMgi::set_point_) {
        TimerMgi::elapsed_ = true;
    }
}

void TimerMgi::ResetTimer() {
    TimerMgi::elapsed_ = false;
    TimerMgi::curr_time_ = millis();
}

bool TimerMgi::IsElapsed() {
    return TimerMgi::elapsed_;
}

void TimerMgi::ForceElapsed()
{
    TimerMgi::elapsed_ = true;
    TimerMgi::curr_time_ = TimerMgi::set_point_;
}
