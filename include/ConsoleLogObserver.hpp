#ifndef H_AW_CONSOLELOGOBSERVER
#define H_AW_CONSOLELOGOBSERVER

#include <string>
#include <set>
#include <ctime>
#include <iomanip>
#include <sstream>
#include "LogObserver.hpp"
#include "Console.hpp"

namespace aw {
class ConsoleLogObserver : public LogObserver {

public:

    ConsoleLogObserver () = default;
    ~ConsoleLogObserver () override = default;

    ConsoleLogObserver (ConsoleLogObserver&&) = default;
    ConsoleLogObserver& operator = (ConsoleLogObserver&&) = default;

    ConsoleLogObserver (const ConsoleLogObserver&) = default;
    ConsoleLogObserver& operator = (const ConsoleLogObserver&) = default;

protected:

    virtual void notifyCallback (LogLevel, const std::string&, const std::string&) override;

    virtual std::string formatMessage (LogLevel, const std::string&, const std::string&) const;

};
}

#endif
