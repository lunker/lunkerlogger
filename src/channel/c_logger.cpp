//
// Created by voiceloco on 2017. 7. 11..
//

#include "c_logger.hpp"

static CLogger instance;

CLogger::CLogger() : stat_logger ( keywords::channel="stat"), debug_logger( keywords::channel="debug"){

//    stat_logger (keywords::channel="stat");
//    debug_lo

}

void CLogger::LOG(std::string channel, std::string message) {
    if(channel.compare("stat") == 0) {
        BOOST_LOG(stat_logger) << message;
    }
    else {
        BOOST_LOG(debug_logger) << message;
    }
}

void CLogger::DEBUG(std::string channel, std::string message) {
    if(channel.compare("stat") == 0) {
        BOOST_LOG(stat_logger) << message;
    }
    else {
        BOOST_LOG(debug_logger) << message;
    }
}

void CLogger::INFO(std::string channel, std::string message) {

    if(channel.compare("stat") == 0) {

    }
    else {

    }

}
