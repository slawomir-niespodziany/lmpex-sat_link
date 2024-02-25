#include "abstract_link.h"

using namespace std::string_literals;

class SatelliteLink : public AbstractLink {
public:
    virtual std::string getId();
    virtual bool sendMessage(const std::string &message);
};