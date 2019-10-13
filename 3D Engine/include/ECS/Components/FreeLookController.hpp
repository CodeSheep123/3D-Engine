#ifndef SATURN_COMPONENT_FREELOOK_CONTROLLER_HPP_
#define SATURN_COMPONENT_FREELOOK_CONTROLLER_HPP_

#include "ComponentBase.hpp"

namespace Saturn::Components {

struct COMPONENT DEFAULT_SERIALIZE FreeLookController : public ComponentBase {
    float mouse_sensitivity;
};

} // namespace Saturn::Components

#endif