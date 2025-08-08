// clang-format off
const KnownTrampoline kKnownTrampolines[] = {
{"expf", GetTrampolineFunc<auto(float) -> float>(), reinterpret_cast<void*>(NULL)},
{"powf", GetTrampolineFunc<auto(float, float) -> float>(), reinterpret_cast<void*>(NULL)},
};  // kKnownTrampolines
const KnownVariable kKnownVariables[] = {
};  // kKnownVariables
// clang-format on
