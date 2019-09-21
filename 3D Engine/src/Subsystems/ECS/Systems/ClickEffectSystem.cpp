#include "Subsystems/ECS/Systems/ClickEffectSystem.hpp"

#include "Subsystems/Input/Input.hpp"
#include "Subsystems/Scene/Scene.hpp"

#include "Subsystems/ECS/Components/ClickEffect.hpp"
#include "Subsystems/ECS/Components/Sound.hpp"

#include <audeo/audeo.hpp>

#include "Editor/EditorLog.hpp"

// This system is part of a user script. It is not part of the main engine.

namespace Saturn::Systems {

using namespace Components;

void ClickEffectSystem::on_update(Scene& scene) {
    for (auto [eff] : scene.get_ecs().select<ClickEffect>()) {

        // Clear expired sound effects
        if (eff.entity->has_component<Sound>()) {
            // If the sound is no longer playing, remove the component from
            // the entity
            if (!audeo::is_valid(eff.entity->get_component<Sound>().sound)) {
                eff.entity->remove_component<Sound>();
            }
        }

        // Only if the left mouse button was just pressed
        if (RawInput::get_key(Key::C).down &&
            RawInput::get_key(Key::C).has_changed) {

            // If it already has a sound component, override it with the new one
            if (eff.entity->has_component<Sound>()) {
                eff.entity->remove_component<Sound>();
            }

            audeo::Sound sound = audeo::play_sound(eff.sound_effect.get());
            audeo::set_distance_range_max(sound, 50.0f);

            // Add the sound to the entity so we can refer to it later.
            auto& snd_comp = scene.get_ecs().get_with_id<Sound>(
                eff.entity->add_component<Sound>());
            snd_comp.sound = sound;
        }
    }
}

} // namespace Saturn::Systems
