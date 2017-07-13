//
// Created by voiceloco on 2017. 7. 11..
//

#ifndef LUNKERLOGGER_C_LOGGER_HPP
#define LUNKERLOGGER_C_LOGGER_HPP


#include <boost/log/sources/channel_feature.hpp>
#include <boost/log/sources/channel_logger.hpp>
#include <boost/log/sources/record_ostream.hpp>

#endif //LUNKERLOGGER_C_LOGGER_HPP

namespace src = boost::log::sources;
namespace keywords = boost::log::keywords;

enum c_severity_level {
    error,
    warning,
    fixme,
    info,
    debug,
    log,
    trace,
    undefined
};

class CLogger {

public:

    CLogger();
    void LOG (std::string channel, std::string message);
    void DEBUG (std::string channel, std::string message);
    void INFO (std::string channel, std::string message);
private:
    src::channel_logger< > stat_logger, debug_logger;

};