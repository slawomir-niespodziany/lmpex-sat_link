#include "sat_link.h"
#include <cstdlib>
#include <iostream>
#include "lmp/lmp.h"

namespace {
lmp::ModuleRegisterer<AbstractLink, SatelliteLink> linkRegisterer;
};

std::string SatelliteLink::getId() { return "sat"s; }

bool SatelliteLink::sendMessage(const std::string &message) {
    bool success = (std::rand() % 100) < 90;

    std::cout << "Sending via SAT: \"" << message << "\" .."s << ((success) ? ("ok"s) : ("failed"s)) << std::endl;

    return success;
}
