// clang-format off
const KnownTrampoline kKnownTrampolines[] = {
{"AImageReader_acquireLatestImage", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_acquireLatestImageAsync", GetTrampolineFunc<auto(void*, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_acquireNextImage", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_acquireNextImageAsync", GetTrampolineFunc<auto(void*, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_delete", GetTrampolineFunc<auto(void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_getFormat", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_getHeight", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_getMaxImages", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_getWidth", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_getWindow", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_getWindowNativeHandle", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_new", GetTrampolineFunc<auto(int32_t, int32_t, int32_t, int32_t, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_newWithDataSpace", GetTrampolineFunc<auto(int32_t, int32_t, uint64_t, int32_t, uint32_t, int32_t, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_newWithUsage", GetTrampolineFunc<auto(int32_t, int32_t, int32_t, uint64_t, int32_t, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImageReader_setBufferRemovedListener", DoCustomTrampoline_AImageReader_setBufferRemovedListener, reinterpret_cast<void*>(DoBadThunk)},
{"AImageReader_setImageListener", DoCustomTrampoline_AImageReader_setImageListener, reinterpret_cast<void*>(DoBadThunk)},
{"AImage_delete", GetTrampolineFunc<auto(void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AImage_deleteAsync", GetTrampolineFunc<auto(void*, int32_t) -> void>(), reinterpret_cast<void*>(NULL)},
{"AImage_getCropRect", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImage_getDataSpace", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImage_getFormat", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImage_getHardwareBuffer", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImage_getHeight", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImage_getNumberOfPlanes", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImage_getPlaneData", GetTrampolineFunc<auto(void*, int32_t, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImage_getPlanePixelStride", GetTrampolineFunc<auto(void*, int32_t, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImage_getPlaneRowStride", GetTrampolineFunc<auto(void*, int32_t, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImage_getTimestamp", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AImage_getWidth", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodecActionCode_isRecoverable", GetTrampolineFunc<auto(int32_t) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodecActionCode_isTransient", GetTrampolineFunc<auto(int32_t) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodecCryptoInfo_delete", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodecCryptoInfo_getClearBytes", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodecCryptoInfo_getEncryptedBytes", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodecCryptoInfo_getIV", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodecCryptoInfo_getKey", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodecCryptoInfo_getMode", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodecCryptoInfo_getNumSubSamples", GetTrampolineFunc<auto(void*) -> uint64_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodecCryptoInfo_new", GetTrampolineFunc<auto(int32_t, void*, void*, uint32_t, void*, void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodecCryptoInfo_setPattern", GetTrampolineFunc<auto(void*, void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_configure", GetTrampolineFunc<auto(void*, void*, void*, void*, uint32_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_createCodecByName", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_createCodecByNameForClient", GetTrampolineFunc<auto(void*, int32_t, uint32_t) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_createDecoderByType", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_createDecoderByTypeForClient", GetTrampolineFunc<auto(void*, int32_t, uint32_t) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_createEncoderByType", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_createEncoderByTypeForClient", GetTrampolineFunc<auto(void*, int32_t, uint32_t) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_createInputSurface", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_createPersistentInputSurface", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_delete", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_dequeueInputBuffer", GetTrampolineFunc<auto(void*, int64_t) -> int64_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_dequeueOutputBuffer", GetTrampolineFunc<auto(void*, void*, int64_t) -> int64_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_flush", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_getBufferFormat", GetTrampolineFunc<auto(void*, uint64_t) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_getInputBuffer", GetTrampolineFunc<auto(void*, uint64_t, void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_getInputFormat", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_getName", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_getOutputBuffer", GetTrampolineFunc<auto(void*, uint64_t, void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_getOutputFormat", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_queueInputBuffer", GetTrampolineFunc<auto(void*, uint64_t, int64_t, uint64_t, uint64_t, uint32_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_queueSecureInputBuffer", GetTrampolineFunc<auto(void*, uint64_t, int64_t, void*, uint64_t, uint32_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_releaseCrypto", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_releaseName", GetTrampolineFunc<auto(void*, void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_releaseOutputBuffer", GetTrampolineFunc<auto(void*, uint64_t, uint8_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_releaseOutputBufferAtTime", GetTrampolineFunc<auto(void*, uint64_t, int64_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_setAsyncNotifyCallback", DoCustomTrampoline_AMediaCodec_setAsyncNotifyCallback, reinterpret_cast<void*>(DoBadThunk)},
{"AMediaCodec_setInputSurface", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_setOnFrameRenderedCallback", GetTrampolineFunc<auto(void*, auto(*)(void*, void*, int64_t, int64_t) -> void, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_setOutputSurface", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_setParameters", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_signalEndOfInputStream", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_start", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCodec_stop", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCrypto_delete", GetTrampolineFunc<auto(void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaCrypto_isCryptoSchemeSupported", GetTrampolineFunc<auto(void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaCrypto_new", GetTrampolineFunc<auto(void*, void*, uint64_t) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaCrypto_requiresSecureDecoderComponent", GetTrampolineFunc<auto(void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDataSource_close", GetTrampolineFunc<auto(void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaDataSource_delete", GetTrampolineFunc<auto(void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaDataSource_new", GetTrampolineFunc<auto(void) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaDataSource_newUri", GetTrampolineFunc<auto(void*, int32_t, void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaDataSource_setClose", DoCustomTrampoline_AMediaDataSource_setClose, reinterpret_cast<void*>(DoBadThunk)},
{"AMediaDataSource_setGetAvailableSize", GetTrampolineFunc<auto(void*, auto(*)(void*, int64_t) -> int64_t) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaDataSource_setGetSize", DoCustomTrampoline_AMediaDataSource_setGetSize, reinterpret_cast<void*>(DoBadThunk)},
{"AMediaDataSource_setReadAt", DoCustomTrampoline_AMediaDataSource_setReadAt, reinterpret_cast<void*>(DoBadThunk)},
{"AMediaDataSource_setUserdata", GetTrampolineFunc<auto(void*, void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_closeSession", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_createByUUID", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_decrypt", GetTrampolineFunc<auto(void*, void*, void*, void*, void*, void*, void*, uint64_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_encrypt", GetTrampolineFunc<auto(void*, void*, void*, void*, void*, void*, void*, uint64_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_getKeyRequest", GetTrampolineFunc<auto(void*, void*, void*, uint64_t, void*, uint32_t, void*, uint64_t, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_getKeyRequestWithDefaultUrlAndType", GetTrampolineFunc<auto(void*, void*, void*, uint64_t, void*, uint32_t, void*, uint64_t, void*, void*, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_getPropertyByteArray", GetTrampolineFunc<auto(void*, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_getPropertyString", GetTrampolineFunc<auto(void*, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_getProvisionRequest", GetTrampolineFunc<auto(void*, void*, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_getSecureStops", GetTrampolineFunc<auto(void*, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_isCryptoSchemeSupported", GetTrampolineFunc<auto(void*, void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_openSession", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_provideKeyResponse", GetTrampolineFunc<auto(void*, void*, void*, uint64_t, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_provideProvisionResponse", GetTrampolineFunc<auto(void*, void*, uint64_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_queryKeyStatus", GetTrampolineFunc<auto(void*, void*, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_release", GetTrampolineFunc<auto(void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_releaseSecureStops", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_removeKeys", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_restoreKeys", GetTrampolineFunc<auto(void*, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_setOnEventListener", GetTrampolineFunc<auto(void*, auto(*)(void*, void*, uint32_t, int32_t, void*, uint64_t) -> void) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_setOnExpirationUpdateListener", GetTrampolineFunc<auto(void*, auto(*)(void*, void*, int64_t) -> void) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_setOnKeysChangeListener", GetTrampolineFunc<auto(void*, auto(*)(void*, void*, void*, uint64_t, uint8_t) -> void) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_setPropertyByteArray", GetTrampolineFunc<auto(void*, void*, void*, uint64_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_setPropertyString", GetTrampolineFunc<auto(void*, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_sign", GetTrampolineFunc<auto(void*, void*, void*, void*, void*, uint64_t, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaDrm_verify", GetTrampolineFunc<auto(void*, void*, void*, void*, void*, uint64_t, void*, uint64_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_advance", GetTrampolineFunc<auto(void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_delete", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_getCachedDuration", GetTrampolineFunc<auto(void*) -> int64_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_getFileFormat", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_getPsshInfo", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_getSampleCryptoInfo", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_getSampleFlags", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_getSampleFormat", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_getSampleSize", GetTrampolineFunc<auto(void*) -> int64_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_getSampleTime", GetTrampolineFunc<auto(void*) -> int64_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_getSampleTrackIndex", GetTrampolineFunc<auto(void*) -> int32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_getTrackCount", GetTrampolineFunc<auto(void*) -> uint64_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_getTrackFormat", GetTrampolineFunc<auto(void*, uint64_t) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_new", GetTrampolineFunc<auto(void) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_readSampleData", GetTrampolineFunc<auto(void*, void*, uint64_t) -> int64_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_seekTo", GetTrampolineFunc<auto(void*, int64_t, uint32_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_selectTrack", GetTrampolineFunc<auto(void*, uint64_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_setDataSource", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_setDataSourceCustom", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_setDataSourceFd", GetTrampolineFunc<auto(void*, int32_t, int64_t, int64_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaExtractor_unselectTrack", GetTrampolineFunc<auto(void*, uint64_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_clear", GetTrampolineFunc<auto(void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_copy", GetTrampolineFunc<auto(void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_delete", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_getBuffer", GetTrampolineFunc<auto(void*, void*, void*, void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_getDouble", GetTrampolineFunc<auto(void*, void*, void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_getFloat", GetTrampolineFunc<auto(void*, void*, void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_getInt32", GetTrampolineFunc<auto(void*, void*, void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_getInt64", GetTrampolineFunc<auto(void*, void*, void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_getRect", GetTrampolineFunc<auto(void*, void*, void*, void*, void*, void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_getSize", GetTrampolineFunc<auto(void*, void*, void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_getString", GetTrampolineFunc<auto(void*, void*, void*) -> uint8_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_new", GetTrampolineFunc<auto(void) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_setBuffer", GetTrampolineFunc<auto(void*, void*, void*, uint64_t) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_setDouble", GetTrampolineFunc<auto(void*, void*, double) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_setFloat", GetTrampolineFunc<auto(void*, void*, float) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_setInt32", GetTrampolineFunc<auto(void*, void*, int32_t) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_setInt64", GetTrampolineFunc<auto(void*, void*, int64_t) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_setRect", GetTrampolineFunc<auto(void*, void*, int32_t, int32_t, int32_t, int32_t) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_setSize", GetTrampolineFunc<auto(void*, void*, uint64_t) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_setString", GetTrampolineFunc<auto(void*, void*, void*) -> void>(), reinterpret_cast<void*>(NULL)},
{"AMediaFormat_toString", GetTrampolineFunc<auto(void*) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaMuxer_addTrack", GetTrampolineFunc<auto(void*, void*) -> int64_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaMuxer_append", GetTrampolineFunc<auto(int32_t, uint32_t) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaMuxer_delete", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaMuxer_getTrackCount", GetTrampolineFunc<auto(void*) -> int64_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaMuxer_getTrackFormat", GetTrampolineFunc<auto(void*, uint64_t) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaMuxer_new", GetTrampolineFunc<auto(int32_t, uint32_t) -> void*>(), reinterpret_cast<void*>(NULL)},
{"AMediaMuxer_setLocation", GetTrampolineFunc<auto(void*, float, float) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaMuxer_setOrientationHint", GetTrampolineFunc<auto(void*, int32_t) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaMuxer_start", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaMuxer_stop", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"AMediaMuxer_writeSampleData", GetTrampolineFunc<auto(void*, uint64_t, void*, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
};  // kKnownTrampolines
const KnownVariable kKnownVariables[] = {
{"AMEDIACODEC_KEY_HDR10_PLUS_INFO", 8},
{"AMEDIACODEC_KEY_LOW_LATENCY", 8},
{"AMEDIACODEC_KEY_OFFSET_TIME", 8},
{"AMEDIACODEC_KEY_REQUEST_SYNC_FRAME", 8},
{"AMEDIACODEC_KEY_SUSPEND", 8},
{"AMEDIACODEC_KEY_SUSPEND_TIME", 8},
{"AMEDIACODEC_KEY_VIDEO_BITRATE", 8},
{"AMEDIAFORMAT_KEY_AAC_DRC_ATTENUATION_FACTOR", 8},
{"AMEDIAFORMAT_KEY_AAC_DRC_BOOST_FACTOR", 8},
{"AMEDIAFORMAT_KEY_AAC_DRC_HEAVY_COMPRESSION", 8},
{"AMEDIAFORMAT_KEY_AAC_DRC_TARGET_REFERENCE_LEVEL", 8},
{"AMEDIAFORMAT_KEY_AAC_ENCODED_TARGET_LEVEL", 8},
{"AMEDIAFORMAT_KEY_AAC_MAX_OUTPUT_CHANNEL_COUNT", 8},
{"AMEDIAFORMAT_KEY_AAC_PROFILE", 8},
{"AMEDIAFORMAT_KEY_AAC_SBR_MODE", 8},
{"AMEDIAFORMAT_KEY_ALBUM", 8},
{"AMEDIAFORMAT_KEY_ALBUMART", 8},
{"AMEDIAFORMAT_KEY_ALBUMARTIST", 8},
{"AMEDIAFORMAT_KEY_ALLOW_FRAME_DROP", 8},
{"AMEDIAFORMAT_KEY_ARTIST", 8},
{"AMEDIAFORMAT_KEY_AUDIO_PRESENTATION_INFO", 8},
{"AMEDIAFORMAT_KEY_AUDIO_SESSION_ID", 8},
{"AMEDIAFORMAT_KEY_AUTHOR", 8},
{"AMEDIAFORMAT_KEY_BITRATE_MODE", 8},
{"AMEDIAFORMAT_KEY_BITS_PER_SAMPLE", 8},
{"AMEDIAFORMAT_KEY_BIT_RATE", 8},
{"AMEDIAFORMAT_KEY_CAPTURE_RATE", 8},
{"AMEDIAFORMAT_KEY_CDTRACKNUMBER", 8},
{"AMEDIAFORMAT_KEY_CHANNEL_COUNT", 8},
{"AMEDIAFORMAT_KEY_CHANNEL_MASK", 8},
{"AMEDIAFORMAT_KEY_COLOR_FORMAT", 8},
{"AMEDIAFORMAT_KEY_COLOR_RANGE", 8},
{"AMEDIAFORMAT_KEY_COLOR_STANDARD", 8},
{"AMEDIAFORMAT_KEY_COLOR_TRANSFER", 8},
{"AMEDIAFORMAT_KEY_COMPILATION", 8},
{"AMEDIAFORMAT_KEY_COMPLEXITY", 8},
{"AMEDIAFORMAT_KEY_COMPOSER", 8},
{"AMEDIAFORMAT_KEY_CREATE_INPUT_SURFACE_SUSPENDED", 8},
{"AMEDIAFORMAT_KEY_CRYPTO_DEFAULT_IV_SIZE", 8},
{"AMEDIAFORMAT_KEY_CRYPTO_ENCRYPTED_BYTE_BLOCK", 8},
{"AMEDIAFORMAT_KEY_CRYPTO_ENCRYPTED_SIZES", 8},
{"AMEDIAFORMAT_KEY_CRYPTO_IV", 8},
{"AMEDIAFORMAT_KEY_CRYPTO_KEY", 8},
{"AMEDIAFORMAT_KEY_CRYPTO_MODE", 8},
{"AMEDIAFORMAT_KEY_CRYPTO_PLAIN_SIZES", 8},
{"AMEDIAFORMAT_KEY_CRYPTO_SKIP_BYTE_BLOCK", 8},
{"AMEDIAFORMAT_KEY_CSD", 8},
{"AMEDIAFORMAT_KEY_CSD_0", 8},
{"AMEDIAFORMAT_KEY_CSD_1", 8},
{"AMEDIAFORMAT_KEY_CSD_2", 8},
{"AMEDIAFORMAT_KEY_CSD_AVC", 8},
{"AMEDIAFORMAT_KEY_CSD_HEVC", 8},
{"AMEDIAFORMAT_KEY_D263", 8},
{"AMEDIAFORMAT_KEY_DATE", 8},
{"AMEDIAFORMAT_KEY_DISCNUMBER", 8},
{"AMEDIAFORMAT_KEY_DISPLAY_CROP", 8},
{"AMEDIAFORMAT_KEY_DISPLAY_HEIGHT", 8},
{"AMEDIAFORMAT_KEY_DISPLAY_WIDTH", 8},
{"AMEDIAFORMAT_KEY_DURATION", 8},
{"AMEDIAFORMAT_KEY_ENCODER_DELAY", 8},
{"AMEDIAFORMAT_KEY_ENCODER_PADDING", 8},
{"AMEDIAFORMAT_KEY_ESDS", 8},
{"AMEDIAFORMAT_KEY_EXIF_OFFSET", 8},
{"AMEDIAFORMAT_KEY_EXIF_SIZE", 8},
{"AMEDIAFORMAT_KEY_FLAC_COMPRESSION_LEVEL", 8},
{"AMEDIAFORMAT_KEY_FRAME_COUNT", 8},
{"AMEDIAFORMAT_KEY_FRAME_RATE", 8},
{"AMEDIAFORMAT_KEY_GENRE", 8},
{"AMEDIAFORMAT_KEY_GRID_COLUMNS", 8},
{"AMEDIAFORMAT_KEY_GRID_ROWS", 8},
{"AMEDIAFORMAT_KEY_HAPTIC_CHANNEL_COUNT", 8},
{"AMEDIAFORMAT_KEY_HDR10_PLUS_INFO", 8},
{"AMEDIAFORMAT_KEY_HDR_STATIC_INFO", 8},
{"AMEDIAFORMAT_KEY_HEIGHT", 8},
{"AMEDIAFORMAT_KEY_ICC_PROFILE", 8},
{"AMEDIAFORMAT_KEY_INTRA_REFRESH_PERIOD", 8},
{"AMEDIAFORMAT_KEY_IS_ADTS", 8},
{"AMEDIAFORMAT_KEY_IS_AUTOSELECT", 8},
{"AMEDIAFORMAT_KEY_IS_DEFAULT", 8},
{"AMEDIAFORMAT_KEY_IS_FORCED_SUBTITLE", 8},
{"AMEDIAFORMAT_KEY_IS_SYNC_FRAME", 8},
{"AMEDIAFORMAT_KEY_I_FRAME_INTERVAL", 8},
{"AMEDIAFORMAT_KEY_LANGUAGE", 8},
{"AMEDIAFORMAT_KEY_LAST_SAMPLE_INDEX_IN_CHUNK", 8},
{"AMEDIAFORMAT_KEY_LATENCY", 8},
{"AMEDIAFORMAT_KEY_LEVEL", 8},
{"AMEDIAFORMAT_KEY_LOCATION", 8},
{"AMEDIAFORMAT_KEY_LOOP", 8},
{"AMEDIAFORMAT_KEY_LOW_LATENCY", 8},
{"AMEDIAFORMAT_KEY_LYRICIST", 8},
{"AMEDIAFORMAT_KEY_MANUFACTURER", 8},
{"AMEDIAFORMAT_KEY_MAX_BIT_RATE", 8},
{"AMEDIAFORMAT_KEY_MAX_B_FRAMES", 8},
{"AMEDIAFORMAT_KEY_MAX_FPS_TO_ENCODER", 8},
{"AMEDIAFORMAT_KEY_MAX_HEIGHT", 8},
{"AMEDIAFORMAT_KEY_MAX_INPUT_SIZE", 8},
{"AMEDIAFORMAT_KEY_MAX_PTS_GAP_TO_ENCODER", 8},
{"AMEDIAFORMAT_KEY_MAX_WIDTH", 8},
{"AMEDIAFORMAT_KEY_MIME", 8},
{"AMEDIAFORMAT_KEY_MPEG2_STREAM_HEADER", 8},
{"AMEDIAFORMAT_KEY_MPEGH_COMPATIBLE_SETS", 8},
{"AMEDIAFORMAT_KEY_MPEGH_PROFILE_LEVEL_INDICATION", 8},
{"AMEDIAFORMAT_KEY_MPEGH_REFERENCE_CHANNEL_LAYOUT", 8},
{"AMEDIAFORMAT_KEY_MPEG_USER_DATA", 8},
{"AMEDIAFORMAT_KEY_OPERATING_RATE", 8},
{"AMEDIAFORMAT_KEY_PCM_BIG_ENDIAN", 8},
{"AMEDIAFORMAT_KEY_PCM_ENCODING", 8},
{"AMEDIAFORMAT_KEY_PRIORITY", 8},
{"AMEDIAFORMAT_KEY_PROFILE", 8},
{"AMEDIAFORMAT_KEY_PSSH", 8},
{"AMEDIAFORMAT_KEY_PUSH_BLANK_BUFFERS_ON_STOP", 8},
{"AMEDIAFORMAT_KEY_REPEAT_PREVIOUS_FRAME_AFTER", 8},
{"AMEDIAFORMAT_KEY_ROTATION", 8},
{"AMEDIAFORMAT_KEY_SAMPLE_FILE_OFFSET", 8},
{"AMEDIAFORMAT_KEY_SAMPLE_RATE", 8},
{"AMEDIAFORMAT_KEY_SAMPLE_TIME_BEFORE_APPEND", 8},
{"AMEDIAFORMAT_KEY_SAR_HEIGHT", 8},
{"AMEDIAFORMAT_KEY_SAR_WIDTH", 8},
{"AMEDIAFORMAT_KEY_SEI", 8},
{"AMEDIAFORMAT_KEY_SLICE_HEIGHT", 8},
{"AMEDIAFORMAT_KEY_SLOW_MOTION_MARKERS", 8},
{"AMEDIAFORMAT_KEY_STRIDE", 8},
{"AMEDIAFORMAT_KEY_TARGET_TIME", 8},
{"AMEDIAFORMAT_KEY_TEMPORAL_LAYERING", 8},
{"AMEDIAFORMAT_KEY_TEMPORAL_LAYER_COUNT", 8},
{"AMEDIAFORMAT_KEY_TEMPORAL_LAYER_ID", 8},
{"AMEDIAFORMAT_KEY_TEXT_FORMAT_DATA", 8},
{"AMEDIAFORMAT_KEY_THUMBNAIL_CSD_AV1C", 8},
{"AMEDIAFORMAT_KEY_THUMBNAIL_CSD_HEVC", 8},
{"AMEDIAFORMAT_KEY_THUMBNAIL_HEIGHT", 8},
{"AMEDIAFORMAT_KEY_THUMBNAIL_TIME", 8},
{"AMEDIAFORMAT_KEY_THUMBNAIL_WIDTH", 8},
{"AMEDIAFORMAT_KEY_TILE_HEIGHT", 8},
{"AMEDIAFORMAT_KEY_TILE_WIDTH", 8},
{"AMEDIAFORMAT_KEY_TIME_US", 8},
{"AMEDIAFORMAT_KEY_TITLE", 8},
{"AMEDIAFORMAT_KEY_TRACK_ID", 8},
{"AMEDIAFORMAT_KEY_TRACK_INDEX", 8},
{"AMEDIAFORMAT_KEY_VALID_SAMPLES", 8},
{"AMEDIAFORMAT_KEY_WIDTH", 8},
{"AMEDIAFORMAT_KEY_XMP_OFFSET", 8},
{"AMEDIAFORMAT_KEY_XMP_SIZE", 8},
{"AMEDIAFORMAT_KEY_YEAR", 8},
};  // kKnownVariables
// clang-format on
