#ifndef SATURN_COMPONENT_NAME_HPP_
#define SATURN_COMPONENT_NAME_HPP_

#include "ComponentBase.hpp"
#include <string>

namespace Saturn::Components {
// clang-format off
struct [[component, default_serialize, hide_in_editor, category("Editor-only")]] Name
    : ComponentBase {
    // clang-format on
    std::string name;
};

} // namespace Saturn::Components

#endif
