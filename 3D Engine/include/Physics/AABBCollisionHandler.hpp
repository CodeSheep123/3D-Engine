#ifndef SATURN_AABB_COLLISION_HANDLER_HPP_
#define SATURN_AABB_COLLISION_HANDLER_HPP_

#include "ECS/Components/BoxCollider.hpp"
#include "ECS/Components/Rigidbody.hpp"
#include "ECS/Components/Transform.hpp"

#include <vector>

namespace Saturn {

class AABBCollisionHandler {
public:
    struct Collision {
        bool collided;

        Components::Rigidbody* first_rb;
        Components::BoxCollider* first_collider;

        Components::BoxCollider* other_collider;
    };

    Collision detect_collision(Components::Rigidbody& rb,
                               Components::BoxCollider& first,
                               Components::BoxCollider& second);
};

} // namespace Saturn

#endif