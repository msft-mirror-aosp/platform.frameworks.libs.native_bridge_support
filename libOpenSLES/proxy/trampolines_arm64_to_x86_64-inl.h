// clang-format off
const KnownTrampoline kKnownTrampolines[] = {
{"slCreateEngine", DoCustomTrampoline_slCreateEngine, reinterpret_cast<void*>(DoBadThunk)},
{"slQueryNumSupportedEngineInterfaces", GetTrampolineFunc<auto(void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
{"slQuerySupportedEngineInterfaces", GetTrampolineFunc<auto(uint32_t, void*) -> uint32_t>(), reinterpret_cast<void*>(NULL)},
};  // kKnownTrampolines
const KnownVariable kKnownVariables[] = {
{"SL_IID_3DCOMMIT", 8},
{"SL_IID_3DDOPPLER", 8},
{"SL_IID_3DGROUPING", 8},
{"SL_IID_3DLOCATION", 8},
{"SL_IID_3DMACROSCOPIC", 8},
{"SL_IID_3DSOURCE", 8},
{"SL_IID_ANDROIDACOUSTICECHOCANCELLATION", 8},
{"SL_IID_ANDROIDAUTOMATICGAINCONTROL", 8},
{"SL_IID_ANDROIDBUFFERQUEUESOURCE", 8},
{"SL_IID_ANDROIDCONFIGURATION", 8},
{"SL_IID_ANDROIDEFFECT", 8},
{"SL_IID_ANDROIDEFFECTCAPABILITIES", 8},
{"SL_IID_ANDROIDEFFECTSEND", 8},
{"SL_IID_ANDROIDNOISESUPPRESSION", 8},
{"SL_IID_ANDROIDSIMPLEBUFFERQUEUE", 8},
{"SL_IID_AUDIODECODERCAPABILITIES", 8},
{"SL_IID_AUDIOENCODER", 8},
{"SL_IID_AUDIOENCODERCAPABILITIES", 8},
{"SL_IID_AUDIOIODEVICECAPABILITIES", 8},
{"SL_IID_BASSBOOST", 8},
{"SL_IID_BUFFERQUEUE", 8},
{"SL_IID_DEVICEVOLUME", 8},
{"SL_IID_DYNAMICINTERFACEMANAGEMENT", 8},
{"SL_IID_DYNAMICSOURCE", 8},
{"SL_IID_EFFECTSEND", 8},
{"SL_IID_ENGINE", 8},
{"SL_IID_ENGINECAPABILITIES", 8},
{"SL_IID_ENVIRONMENTALREVERB", 8},
{"SL_IID_EQUALIZER", 8},
{"SL_IID_LED", 8},
{"SL_IID_METADATAEXTRACTION", 8},
{"SL_IID_METADATATRAVERSAL", 8},
{"SL_IID_MIDIMESSAGE", 8},
{"SL_IID_MIDIMUTESOLO", 8},
{"SL_IID_MIDITEMPO", 8},
{"SL_IID_MIDITIME", 8},
{"SL_IID_MUTESOLO", 8},
{"SL_IID_NULL", 8},
{"SL_IID_OBJECT", 8},
{"SL_IID_OUTPUTMIX", 8},
{"SL_IID_PITCH", 8},
{"SL_IID_PLAY", 8},
{"SL_IID_PLAYBACKRATE", 8},
{"SL_IID_PREFETCHSTATUS", 8},
{"SL_IID_PRESETREVERB", 8},
{"SL_IID_RATEPITCH", 8},
{"SL_IID_RECORD", 8},
{"SL_IID_SEEK", 8},
{"SL_IID_THREADSYNC", 8},
{"SL_IID_VIBRA", 8},
{"SL_IID_VIRTUALIZER", 8},
{"SL_IID_VISUALIZATION", 8},
{"SL_IID_VOLUME", 8},
};  // kKnownVariables
// clang-format on
