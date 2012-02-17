#ifndef APOCALYPSE_H
#define APOCALYPSE_H

namespace Apocalypse{
class Apocalypse
{
public:
    enum ExitStatus{EXIT_SUCCESS = 0, EXIT_FAILURE = 1};
    enum Status{RUNNING, CLOSING, LOADING};
    Apocalypse();
    ~Apocalypse();

    ExitStatus getExitStatus();

    Status     getStatus();



private:
    Status status_;
    ExitStatus exit_status_;


};
}
#endif // APOCALYPSE_H
