#include "Subsystems/Serialization/ComponentMetaInfo.hpp"

namespace Saturn::Meta::detail {

// This function was generated by SaturnEngine
void init_component_meta_data(std::vector<ComponentInfo>& data) {
	{
		ComponentInfo info;
		info.name = "BoxCollider ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["center"] = "glm::vec3";
		info.fields["half_widths"] = "glm::vec3";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "Camera ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["front"] = "glm::vec3";
		info.fields["up"] = "glm::vec3";
		info.fields["fov"] = "float";
		info.fields["viewport_id"] = "unsigned int";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "CameraZoomController ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["zoom_speed"] = "float";
		info.fields["min_zoom"] = "float";
		info.fields["max_zoom"] = "float";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "ClickEffect ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["sound_effect"] = "Resource<audeo::SoundSource>";
		info.fields["max_distance"] = "float";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "ColliderRenderer ";
		info.default_serialize = true;
		info.hide_in_editor = true;
		info.editor_only = false;
		
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "DirectionalLight ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["ambient"] = "Saturn::color3";
		info.fields["diffuse"] = "Saturn::color3";
		info.fields["specular"] = "Saturn::color3";
		info.fields["direction"] = "glm::vec3";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "DoNotSerialize ";
		info.default_serialize = false;
		info.hide_in_editor = false;
		info.editor_only = false;
		
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "EditorCameraController ";
		info.default_serialize = true;
		info.hide_in_editor = true;
		info.editor_only = false;
		info.fields["speed"] = "float";
		info.fields["sensitivity"] = "float";
		info.fields["zoom_speed"] = "float";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "FPSCameraController ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["speed"] = "float";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "FreeLookController ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["mouse_sensitivity"] = "float";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "Material ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["diffuse_map"] = "Resource<Saturn::Texture>";
		info.fields["shader"] = "Resource<Saturn::Shader>";
		info.fields["lit"] = "bool";
		info.fields["specular_map"] = "Resource<Saturn::Texture>";
		info.fields["shininess"] = "float";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "MusicController ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["music"] = "Resource<audeo::SoundSource>";
		info.fields["loop"] = "bool";
		info.fields["fade_in_ms"] = "float";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "Name ";
		info.default_serialize = true;
		info.hide_in_editor = true;
		info.editor_only = false;
		info.fields["name"] = "std::string";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "OutlineRenderer ";
		info.default_serialize = true;
		info.hide_in_editor = true;
		info.editor_only = false;
		info.fields["color"] = "Saturn::color3";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "ParticleEmitter ";
		info.default_serialize = false;
		info.hide_in_editor = true;
		info.editor_only = false;
		info.fields["velocity_over_lifetime"] = "Saturn::Components::ParticleEmitter::VelocityOverTimeModule";
		info.fields["additive"] = "bool";
		info.fields["main"] = "Saturn::Components::ParticleEmitter::MainModule";
		info.fields["shape"] = "Saturn::Components::ParticleEmitter::ShapeModule";
		info.fields["emission"] = "Saturn::Components::ParticleEmitter::EmissionModule";
		info.fields["size_over_lifetime"] = "Saturn::Components::ParticleEmitter::SizeOverTimeModule";
		info.fields["color_over_lifetime"] = "Saturn::Components::ParticleEmitter::ColorOverTimeModule";
		info.fields["particles"] = "std::vector<Particle>";
		info.fields["particle_vao"] = "Resource<Saturn::VertexArray>";
		info.fields["texture"] = "Resource<Saturn::Texture>";
		info.fields["particle_data"] = "Saturn::Components::ParticleEmitter::ParticleData";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "PointLight ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["ambient"] = "Saturn::color3";
		info.fields["diffuse"] = "Saturn::color3";
		info.fields["specular"] = "Saturn::color3";
		info.fields["intensity"] = "float";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "Rigidbody ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["mass"] = "float";
		info.fields["locked_axes"] = "glm::bvec3";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "Rotator ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["speed"] = "float";
		info.fields["euler_angles"] = "glm::vec3";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "Sound ";
		info.default_serialize = false;
		info.hide_in_editor = true;
		info.editor_only = false;
		info.fields["sound"] = "audeo::Sound";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "SoundListener ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["forward"] = "glm::vec3";
		info.fields["position"] = "glm::vec3";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "SpotLight ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["inner_angle"] = "float";
		info.fields["ambient"] = "Saturn::color3";
		info.fields["diffuse"] = "Saturn::color3";
		info.fields["specular"] = "Saturn::color3";
		info.fields["intensity"] = "float";
		info.fields["direction"] = "glm::vec3";
		info.fields["outer_angle"] = "float";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "StaticMesh ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["mesh"] = "Resource<Saturn::Mesh>";
		info.fields["face_cull"] = "bool";
		data.push_back(info);
	}
	{
		ComponentInfo info;
		info.name = "Transform ";
		info.default_serialize = true;
		info.hide_in_editor = false;
		info.editor_only = false;
		info.fields["position"] = "glm::vec3";
		info.fields["rotation"] = "glm::vec3";
		info.fields["scale"] = "glm::vec3";
		data.push_back(info);
	}
}


} // namespace Saturn::Meta::detail
