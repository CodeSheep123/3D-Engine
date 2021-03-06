#include <editor/widgets/log_window.hpp>

#include <imgui/imgui.h>
#include <iostream>

namespace editor {

LogWindow::LogWindow() {

}

void LogWindow::show_gui() {
    if (ImGui::Begin("Log", &shown, ImGuiWindowFlags_NoScrollbar)) {
        ImGui::Checkbox("Auto-scroll", &auto_scroll);
        ImGui::SameLine();
        if (ImGui::SmallButton("Clear")) {
            messages_str.clear();
        }

        ImGui::PushStyleColor(ImGuiCol_ChildBg, ImVec4(0.22f, 0.22f, 0.22f, 1.0f));
		ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.22f, 0.22f, 0.22f, 1.0f));
        ImGui::BeginChild("##log_scroll_region", ImVec2(0, 0), false);

        // Display messages
        ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(4, 1));
        ImGui::PushStyleColor(ImGuiCol_FrameBg, ImVec4(0.14f, 0.14f, 0.14f, 1.00f));
        // Show log as an input text widget spanning the entire size of the window
        // TODO: Figure out how to correctly use the clipboard
        ImGui::TextWrapped("%s", messages_str.c_str());
        ImGui::PopStyleColor();
        ImGui::PopStyleVar();

        // Scroll to bottom. Only enable this if auto scroll is enabled
        if (auto_scroll && (ImGui::GetScrollY() >= ImGui::GetScrollMaxY())) {
            ImGui::SetScrollHereY(1.0f);
            
        }

        ImGui::EndChild();
        ImGui::PopStyleColor();
        ImGui::PopStyleColor();
    }
    ImGui::End();
}

void LogWindow::write(ph::log::Severity severity, std::string_view str) {
    (messages_str += get_timestamp_string() += " ") += str;
    messages_str += "\n";

    std::cout << str << "\n";
}

}