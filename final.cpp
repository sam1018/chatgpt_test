template <typename... Args>
std::string concatenate(const Args&... strs) {
    std::string result;
    result.reserve( (std::string_view(strs).size() + ...) );
    (result.append(strs), ...);
    return result;
}
