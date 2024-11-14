// clang-format off
const KnownTrampoline kKnownTrampolines[] = {
{"AImageDecoderFrameInfo_create", GetTrampolineFunc<auto(void) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoderFrameInfo_delete", GetTrampolineFunc<auto(void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoderFrameInfo_getBlendOp", GetTrampolineFunc<auto(void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoderFrameInfo_getDisposeOp", GetTrampolineFunc<auto(void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoderFrameInfo_getDuration", GetTrampolineFunc<auto(void*) -> int64_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoderFrameInfo_getFrameRect", DoCustomTrampoline_AImageDecoderFrameInfo_getFrameRect, reinterpret_cast<void*>(DoBadThunk)},
{"AImageDecoderFrameInfo_hasAlphaWithinBounds", GetTrampolineFunc<auto(void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoderHeaderInfo_getAlphaFlags", GetTrampolineFunc<auto(void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoderHeaderInfo_getAndroidBitmapFormat", GetTrampolineFunc<auto(void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoderHeaderInfo_getDataSpace", GetTrampolineFunc<auto(void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoderHeaderInfo_getHeight", GetTrampolineFunc<auto(void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoderHeaderInfo_getMimeType", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoderHeaderInfo_getWidth", GetTrampolineFunc<auto(void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_advanceFrame", GetTrampolineFunc<auto(void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_computeSampledSize", GetTrampolineFunc<auto(void*, int32_t, void*, void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_createFromAAsset", GetTrampolineFunc<auto(void*, void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_createFromBuffer", GetTrampolineFunc<auto(void*, uint32_t, void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_createFromFd", GetTrampolineFunc<auto(int32_t, void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_decodeImage", GetTrampolineFunc<auto(void*, void*, uint32_t, uint32_t) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_delete", GetTrampolineFunc<auto(void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_getFrameInfo", GetTrampolineFunc<auto(void*, void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_getHeaderInfo", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_getMinimumStride", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_getRepeatCount", GetTrampolineFunc<auto(void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_isAnimated", GetTrampolineFunc<auto(void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_resultToString", GetTrampolineFunc<auto(int32_t) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_rewind", GetTrampolineFunc<auto(void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_setAndroidBitmapFormat", GetTrampolineFunc<auto(void*, int32_t) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_setCrop", DoCustomTrampoline_AImageDecoder_setCrop, reinterpret_cast<void*>(DoBadThunk)},
{"AImageDecoder_setDataSpace", GetTrampolineFunc<auto(void*, int32_t) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_setInternallyHandleDisposePrevious", GetTrampolineFunc<auto(void*, uint8_t) -> void>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_setTargetSize", GetTrampolineFunc<auto(void*, int32_t, int32_t) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageDecoder_setUnpremultipliedRequired", GetTrampolineFunc<auto(void*, uint8_t) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AndroidBitmap_compress", GetTrampolineFunc<auto(void*, int32_t, void*, int32_t, int32_t, void*, auto(*)(void*, void*, uint32_t) -> uint8_t) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AndroidBitmap_getDataSpace", GetTrampolineFunc<auto(JNIEnv*, void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AndroidBitmap_getHardwareBuffer", GetTrampolineFunc<auto(JNIEnv*, void*, void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AndroidBitmap_getInfo", GetTrampolineFunc<auto(JNIEnv*, void*, void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AndroidBitmap_lockPixels", GetTrampolineFunc<auto(JNIEnv*, void*, void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AndroidBitmap_unlockPixels", GetTrampolineFunc<auto(JNIEnv*, void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
};  // kKnownTrampolines
const KnownVariable kKnownVariables[] = {
};  // kKnownVariables
// clang-format on
