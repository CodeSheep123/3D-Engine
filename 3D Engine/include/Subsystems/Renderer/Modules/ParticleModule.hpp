#ifndef SATURN_PARTICLE_MODULE_HPP_
#define SATURN_PARTICLE_MODULE_HPP_

#include "RenderModule.hpp"

#include "Subsystems/AssetManager/Resource.hpp"
#include "Subsystems/Renderer/Shader.hpp"

namespace Saturn::RenderModules {

class ParticleModule : public RenderModule {
public:
    ParticleModule();

    void init() override;
    void
    process(Scene& scene, Viewport& viewport, Framebuffer& target) override;

private:
    Resource<Shader> particle_shader;
    Resource<Texture> default_texture;
};

} // namespace Saturn::RenderModules

#endif
