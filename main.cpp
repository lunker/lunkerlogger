#include "src/channel_severity/m_looger.hpp"
#include "src/channel/c_logger.hpp"


int main() {

    CLogger logger;
    logger.INFO("stat", "test channel support logger");

    return 0;
}
