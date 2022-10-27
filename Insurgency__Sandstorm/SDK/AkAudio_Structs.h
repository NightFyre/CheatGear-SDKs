#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum AkAudio.EAkCallbackType
	 */
	enum class EAkCallbackType : uint8_t
	{
		EndOfEvent       = 0,
		Marker           = 1,
		Duration         = 2,
		Starvation       = 3,
		MusicPlayStarted = 4,
		MusicSyncBeat    = 5,
		MusicSyncBar     = 6,
		MusicSyncEntry   = 7,
		MusicSyncExit    = 8,
		MusicSyncGrid    = 9,
		MusicSyncUserCue = 10,
		MusicSyncPoint   = 11,
		MIDIEvent        = 12,
		MAX              = 13
	};

	/**
	 * Enum AkAudio.EAkResult
	 */
	enum class EAkResult : uint8_t
	{
		NotImplemented              = 0,
		Success                     = 1,
		Fail                        = 2,
		PartialSuccess              = 3,
		NotCompatible               = 4,
		AlreadyConnected            = 5,
		InvalidFile                 = 6,
		AudioFileHeaderTooLarge     = 7,
		MaxReached                  = 8,
		InvalidID                   = 9,
		IDNotFound                  = 10,
		InvalidInstanceID           = 11,
		NoMoreData                  = 12,
		InvalidStateGroup           = 13,
		ChildAlreadyHasAParent      = 14,
		InvalidLanguage             = 15,
		CannotAddItseflAsAChild     = 16,
		InvalidParameter            = 17,
		ElementAlreadyInList        = 18,
		PathNotFound                = 19,
		PathNoVertices              = 20,
		PathNotRunning              = 21,
		PathNotPaused               = 22,
		PathNodeAlreadyInList       = 23,
		PathNodeNotInList           = 24,
		DataNeeded                  = 25,
		NoDataNeeded                = 26,
		DataReady                   = 27,
		NoDataReady                 = 28,
		InsufficientMemory          = 29,
		Cancelled                   = 30,
		UnknownBankID               = 31,
		BankReadError               = 32,
		InvalidSwitchType           = 33,
		FormatNotReady              = 34,
		WrongBankVersion            = 35,
		FileNotFound                = 36,
		DeviceNotReady              = 37,
		BankAlreadyLoaded           = 38,
		RenderedFX                  = 39,
		ProcessNeeded               = 40,
		ProcessDone                 = 41,
		MemManagerNotInitialized    = 42,
		StreamMgrNotInitialized     = 43,
		SSEInstructionsNotSupported = 44,
		Busy                        = 45,
		UnsupportedChannelConfig    = 46,
		PluginMediaNotAvailable     = 47,
		MustBeVirtualized           = 48,
		CommandTooLarge             = 49,
		RejectedByFilter            = 50,
		InvalidCustomPlatformName   = 51,
		DLLCannotLoad               = 52,
		DLLPathNotFound             = 53,
		NoJavaVM                    = 54,
		OpenSLError                 = 55,
		PluginNotRegistered         = 56,
		DataAlignmentError          = 57,
		MAX                         = 58
	};

	/**
	 * Enum AkAudio.EAkAndroidAudioAPI
	 */
	enum class EAkAndroidAudioAPI : uint8_t
	{
		AAudio    = 0,
		OpenSL_ES = 1,
		MAX       = 2
	};

	/**
	 * Enum AkAudio.EAkAudioSessionMode
	 */
	enum class EAkAudioSessionMode : uint8_t
	{
		Default        = 0,
		VoiceChat      = 1,
		GameChat       = 2,
		VideoRecording = 3,
		Measurement    = 4,
		MoviePlayback  = 5,
		VideoChat      = 6,
		MAX            = 7
	};

	/**
	 * Enum AkAudio.EAkAudioSessionCategoryOptions
	 */
	enum class EAkAudioSessionCategoryOptions : uint8_t
	{
		MixWithOthers    = 0,
		DuckOthers       = 1,
		AllowBluetooth   = 2,
		DefaultToSpeaker = 3,
		MAX              = 4
	};

	/**
	 * Enum AkAudio.EAkAudioSessionCategory
	 */
	enum class EAkAudioSessionCategory : uint8_t
	{
		Ambient       = 0,
		SoloAmbient   = 1,
		PlayAndRecord = 2,
		MAX           = 3
	};

	/**
	 * Enum AkAudio.EReflectionFilterBits
	 */
	enum class EReflectionFilterBits : uint8_t
	{
		Wall    = 0,
		Ceiling = 1,
		Floor   = 2,
		MAX     = 3
	};

	/**
	 * Enum AkAudio.AkBankContentType
	 */
	enum class EAkBankContentType : uint8_t
	{
		AkBankContentType_AkBankContent_StructureOnly = 0,
		AkBankContentType_AkBankContent_All           = 1,
		AkBankContentType_AkBankContent_MAX           = 2
	};

	/**
	 * Enum AkAudio.AkPreparationType
	 */
	enum class EAkPreparationType : uint8_t
	{
		AkPreparationType_Preparation_Load          = 0,
		AkPreparationType_Preparation_Unload        = 1,
		AkPreparationType_Preparation_LoadAndDecode = 2,
		AkPreparationType_Preparation_MAX           = 3
	};

	/**
	 * Enum AkAudio.AkCodecId
	 */
	enum class EAkCodecId : uint8_t
	{
		AkCodecId_Bank            = 0,
		AkCodecId_PCM             = 1,
		AkCodecId_ADPCM           = 2,
		AkCodecId_XMA             = 3,
		AkCodecId_Vorbis          = 4,
		AkCodecId_WiiADPCM        = 5,
		AkCodecId_PCMEX           = 6,
		AkCodecId_ExternalSource  = 7,
		AkCodecId_XWMA            = 8,
		AkCodecId_AAC             = 9,
		AkCodecId_FilePackage     = 10,
		AkCodecId_ATRAC9          = 11,
		AkCodecId_VAG             = 12,
		AkCodecId_ProfilerCapture = 13,
		AkCodecId_AnalysisFile    = 14,
		AkCodecId_MIDI            = 15,
		AkCodecId_OpusNX          = 16,
		AkCodecId_CAF             = 17,
		AkCodecId_AkOpus          = 18,
		AkCodecId_AkCodecId_MAX   = 19
	};

	/**
	 * Enum AkAudio.EAkMidiCcValues
	 */
	enum class EAkMidiCcValues : uint8_t
	{
		AkMidiCcBankSelectCoarse  = 0,
		AkMidiCcModWheelCoarse    = 1,
		AkMidiCcBreathCtrlCoarse  = 2,
		AkMidiCcCtrl3Coarse       = 3,
		AkMidiCcFootPedalCoarse   = 4,
		AkMidiCcPortamentoCoarse  = 5,
		AkMidiCcDataEntryCoarse   = 6,
		AkMidiCcVolumeCoarse      = 7,
		AkMidiCcBalanceCoarse     = 8,
		AkMidiCcCtrl9Coarse       = 9,
		AkMidiCcPanPositionCoarse = 10,
		AkMidiCcExpressionCoarse  = 11,
		AkMidiCcEffectCtrl1Coarse = 12,
		AkMidiCcEffectCtrl2Coarse = 13,
		AkMidiCcCtrl14Coarse      = 14,
		AkMidiCcCtrl15Coarse      = 15,
		AkMidiCcGenSlider1        = 16,
		AkMidiCcGenSlider2        = 17,
		AkMidiCcGenSlider3        = 18,
		AkMidiCcGenSlider4        = 19,
		AkMidiCcCtrl20Coarse      = 20,
		AkMidiCcCtrl21Coarse      = 21,
		AkMidiCcCtrl22Coarse      = 22,
		AkMidiCcCtrl23Coarse      = 23,
		AkMidiCcCtrl24Coarse      = 24,
		AkMidiCcCtrl25Coarse      = 25,
		AkMidiCcCtrl26Coarse      = 26,
		AkMidiCcCtrl27Coarse      = 27,
		AkMidiCcCtrl28Coarse      = 28,
		AkMidiCcCtrl29Coarse      = 29,
		AkMidiCcCtrl30Coarse      = 30,
		AkMidiCcCtrl31Coarse      = 31,
		AkMidiCcBankSelectFine    = 32,
		AkMidiCcModWheelFine      = 33,
		AkMidiCcBreathCtrlFine    = 34,
		AkMidiCcCtrl3Fine         = 35,
		AkMidiCcFootPedalFine     = 36,
		AkMidiCcPortamentoFine    = 37,
		AkMidiCcDataEntryFine     = 38,
		AkMidiCcVolumeFine        = 39,
		AkMidiCcBalanceFine       = 40,
		AkMidiCcCtrl9Fine         = 41,
		AkMidiCcPanPositionFine   = 42,
		AkMidiCcExpressionFine    = 43,
		AkMidiCcEffectCtrl1Fine   = 44,
		AkMidiCcEffectCtrl2Fine   = 45,
		AkMidiCcCtrl14Fine        = 46,
		AkMidiCcCtrl15Fine        = 47,
		AkMidiCcCtrl20Fine        = 48,
		AkMidiCcCtrl21Fine        = 49,
		AkMidiCcCtrl22Fine        = 50,
		AkMidiCcCtrl23Fine        = 51,
		AkMidiCcCtrl24Fine        = 52,
		AkMidiCcCtrl25Fine        = 53,
		AkMidiCcCtrl26Fine        = 54,
		AkMidiCcCtrl27Fine        = 55,
		AkMidiCcCtrl28Fine        = 56,
		AkMidiCcCtrl29Fine        = 57,
		AkMidiCcCtrl30Fine        = 58,
		AkMidiCcCtrl31Fine        = 59,
		AkMidiCcHoldPedal         = 60,
		AkMidiCcPortamentoOnOff   = 61,
		AkMidiCcSustenutoPedal    = 62,
		AkMidiCcSoftPedal         = 63,
		AkMidiCcLegatoPedal       = 64,
		AkMidiCcHoldPedal2        = 65,
		AkMidiCcSoundVariation    = 66,
		AkMidiCcSoundTimbre       = 67,
		AkMidiCcSoundReleaseTime  = 68,
		AkMidiCcSoundAttackTime   = 69,
		AkMidiCcSoundBrightness   = 70,
		AkMidiCcSoundCtrl6        = 71,
		AkMidiCcSoundCtrl7        = 72,
		AkMidiCcSoundCtrl8        = 73,
		AkMidiCcSoundCtrl9        = 74,
		AkMidiCcSoundCtrl10       = 75,
		AkMidiCcGeneralButton1    = 76,
		AkMidiCcGeneralButton2    = 77,
		AkMidiCcGeneralButton3    = 78,
		AkMidiCcGeneralButton4    = 79,
		AkMidiCcReverbLevel       = 80,
		AkMidiCcTremoloLevel      = 81,
		AkMidiCcChorusLevel       = 82,
		AkMidiCcCelesteLevel      = 83,
		AkMidiCcPhaserLevel       = 84,
		AkMidiCcDataButtonP1      = 85,
		AkMidiCcDataButtonM1      = 86,
		AkMidiCcNonRegisterCoarse = 87,
		AkMidiCcNonRegisterFine   = 88,
		AkMidiCcAllSoundOff       = 89,
		AkMidiCcAllControllersOff = 90,
		AkMidiCcLocalKeyboard     = 91,
		AkMidiCcAllNotesOff       = 92,
		AkMidiCcOmniModeOff       = 93,
		AkMidiCcOmniModeOn        = 94,
		AkMidiCcOmniMonophonicOn  = 95,
		AkMidiCcOmniPolyphonicOn  = 96,
		MAX                       = 97
	};

	/**
	 * Enum AkAudio.EAkMidiEventType
	 */
	enum class EAkMidiEventType : uint8_t
	{
		AkMidiEventTypeInvalid           = 0,
		AkMidiEventTypeNoteOff           = 1,
		AkMidiEventTypeNoteOn            = 2,
		AkMidiEventTypeNoteAftertouch    = 3,
		AkMidiEventTypeController        = 4,
		AkMidiEventTypeProgramChange     = 5,
		AkMidiEventTypeChannelAftertouch = 6,
		AkMidiEventTypePitchBend         = 7,
		AkMidiEventTypeSysex             = 8,
		AkMidiEventTypeEscape            = 9,
		AkMidiEventTypeMeta              = 10,
		MAX                              = 11
	};

	/**
	 * Enum AkAudio.ERTPCValueType
	 */
	enum class ERTPCValueType : uint8_t
	{
		Default     = 0,
		Global      = 1,
		GameObject  = 2,
		PlayingID   = 3,
		Unavailable = 4,
		MAX         = 5
	};

	/**
	 * Enum AkAudio.EAkCurveInterpolation
	 */
	enum class EAkCurveInterpolation : uint8_t
	{
		Log3          = 0,
		Sine          = 1,
		Log1          = 2,
		InvSCurve     = 3,
		Linear        = 4,
		SCurve        = 5,
		Exp1          = 6,
		SineRecip     = 7,
		Exp3          = 8,
		LastFadeCurve = 9,
		Constant      = 10,
		MAX           = 11
	};

	/**
	 * Enum AkAudio.AkActionOnEventType
	 */
	enum class EAkActionOnEventType : uint8_t
	{
		AkActionOnEventType_Stop                    = 0,
		AkActionOnEventType_Pause                   = 1,
		AkActionOnEventType_Resume                  = 2,
		AkActionOnEventType_Break                   = 3,
		AkActionOnEventType_ReleaseEnvelope         = 4,
		AkActionOnEventType_AkActionOnEventType_MAX = 5
	};

	/**
	 * Enum AkAudio.AkMultiPositionType
	 */
	enum class EAkMultiPositionType : uint8_t
	{
		AkMultiPositionType_SingleSource            = 0,
		AkMultiPositionType_MultiSources            = 1,
		AkMultiPositionType_MultiDirections         = 2,
		AkMultiPositionType_AkMultiPositionType_MAX = 3
	};

	/**
	 * Enum AkAudio.AkSpeakerConfiguration
	 */
	enum class EAkSpeakerConfiguration : uint8_t
	{
		AkSpeakerConfiguration_Ak_Speaker_Front_Left          = 0,
		AkSpeakerConfiguration_Ak_Speaker_Front_Right         = 1,
		AkSpeakerConfiguration_Ak_Speaker_Front_Center        = 2,
		AkSpeakerConfiguration_Ak_Speaker_Low_Frequency       = 3,
		AkSpeakerConfiguration_Ak_Speaker_Back_Left           = 4,
		AkSpeakerConfiguration_Ak_Speaker_Back_Right          = 5,
		AkSpeakerConfiguration_Ak_Speaker_Back_Center         = 6,
		AkSpeakerConfiguration_Ak_Speaker_Side_Left           = 7,
		AkSpeakerConfiguration_Ak_Speaker_Side_Right          = 8,
		AkSpeakerConfiguration_Ak_Speaker_Top                 = 9,
		AkSpeakerConfiguration_Ak_Speaker_Height_Front_Left   = 10,
		AkSpeakerConfiguration_Ak_Speaker_Height_Front_Center = 11,
		AkSpeakerConfiguration_Ak_Speaker_Height_Front_Right  = 12,
		AkSpeakerConfiguration_Ak_Speaker_Height_Back_Left    = 13,
		AkSpeakerConfiguration_Ak_Speaker_Height_Back_Center  = 14,
		AkSpeakerConfiguration_Ak_Speaker_Height_Back_Right   = 15,
		AkSpeakerConfiguration_Ak_Speaker_MAX                 = 16
	};

	/**
	 * Enum AkAudio.AkChannelConfiguration
	 */
	enum class EAkChannelConfiguration : uint8_t
	{
		AkChannelConfiguration_Ak_Parent               = 0,
		AkChannelConfiguration_Ak_LFE                  = 1,
		AkChannelConfiguration_Ak_1                    = 2,
		AkChannelConfiguration_Ak_2                    = 3,
		AkChannelConfiguration_Ak_201                  = 4,
		AkChannelConfiguration_Ak_3                    = 5,
		AkChannelConfiguration_Ak_301                  = 6,
		AkChannelConfiguration_Ak_4                    = 7,
		AkChannelConfiguration_Ak_401                  = 8,
		AkChannelConfiguration_Ak_5                    = 9,
		AkChannelConfiguration_Ak_501                  = 10,
		AkChannelConfiguration_Ak_7                    = 11,
		AkChannelConfiguration_Ak_5_1                  = 12,
		AkChannelConfiguration_Ak_7_1                  = 13,
		AkChannelConfiguration_Ak_7_101                = 14,
		AkChannelConfiguration_Ak_Auro_9               = 15,
		AkChannelConfiguration_Ak_Auro_10              = 16,
		AkChannelConfiguration_Ak_Auro_11              = 17,
		AkChannelConfiguration_Ak_Auro_13              = 18,
		AkChannelConfiguration_Ak_Ambisonics_1st_order = 19,
		AkChannelConfiguration_Ak_Ambisonics_2nd_order = 20,
		AkChannelConfiguration_Ak_Ambisonics_3rd_order = 21,
		AkChannelConfiguration_Ak_MAX                  = 22
	};

	/**
	 * Enum AkAudio.AkAcousticPortalState
	 */
	enum class EAkAcousticPortalState : uint8_t
	{
		AkAcousticPortalState_Closed                    = 0,
		AkAcousticPortalState_Open                      = 1,
		AkAcousticPortalState_AkAcousticPortalState_MAX = 2
	};

	/**
	 * Enum AkAudio.PanningRule
	 */
	enum class EPanningRule : uint8_t
	{
		PanningRule_PanningRule_Speakers   = 0,
		PanningRule_PanningRule_Headphones = 1,
		PanningRule_PanningRule_MAX        = 2
	};

	/**
	 * Enum AkAudio.AkMeshType
	 */
	enum class EAkMeshType : uint8_t
	{
		AkMeshType_StaticMesh     = 0,
		AkMeshType_CollisionMesh  = 1,
		AkMeshType_AkMeshType_MAX = 2
	};

	/**
	 * Enum AkAudio.EAkHololensAudioAPI
	 */
	enum class EAkHololensAudioAPI : uint8_t
	{
		Wasapi      = 0,
		XAudio2     = 1,
		DirectSound = 2,
		MAX         = 3
	};

	/**
	 * Enum AkAudio.EAkCommSystem
	 */
	enum class EAkCommSystem : uint8_t
	{
		Socket = 0,
		HTCS   = 1,
		MAX    = 2
	};

	/**
	 * Enum AkAudio.EAkChannelMask
	 */
	enum class EAkChannelMask : uint8_t
	{
		FrontLeft         = 0,
		FrontRight        = 1,
		FrontCenter       = 2,
		LowFrequency      = 3,
		BackLeft          = 4,
		BackRight         = 5,
		BackCenter        = 6,
		SideLeft          = 7,
		SideRight         = 8,
		Top               = 9,
		HeightFrontLeft   = 10,
		HeightFrontCenter = 11,
		HeightFrontRight  = 12,
		HeightBackLeft    = 13,
		HeightBackCenter  = 14,
		HeightBackRight   = 15,
		MAX               = 16
	};

	/**
	 * Enum AkAudio.EAkChannelConfigType
	 */
	enum class EAkChannelConfigType : uint8_t
	{
		Anonymous = 0,
		Standard  = 1,
		Ambisonic = 2,
		MAX       = 3
	};

	/**
	 * Enum AkAudio.EAkDiffractionFlags
	 */
	enum class EAkDiffractionFlags : uint8_t
	{
		UseBuiltInParam            = 0,
		UseObstruction             = 1,
		CalcEmitterVirtualPosition = 2,
		MAX                        = 3
	};

	/**
	 * Enum AkAudio.EAkPanningRule
	 */
	enum class EAkPanningRule : uint8_t
	{
		Speakers   = 0,
		Headphones = 1,
		MAX        = 2
	};

	/**
	 * Enum AkAudio.EAkWindowsAudioAPI
	 */
	enum class EAkWindowsAudioAPI : uint8_t
	{
		Wasapi      = 0,
		XAudio2     = 1,
		DirectSound = 2,
		MAX         = 3
	};

	/**
	 * Enum AkAudio.EAkWinGDKAudioAPI
	 */
	enum class EAkWinGDKAudioAPI : uint8_t
	{
		Wasapi      = 0,
		XAudio2     = 1,
		DirectSound = 2,
		MAX         = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AkAudio.AkMainOutputSettings
	 * Size -> 0x0028
	 */
	struct FAkMainOutputSettings
	{
	public:
		class FString                                              AudioDeviceShareset;                                     // 0x0000(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DeviceID;                                                // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkPanningRule                                             PanningRule;                                             // 0x0014(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HSV6[0x3];                                   // 0x0015(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		EAkChannelConfigType                                       ChannelConfigType;                                       // 0x0018(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AIFM[0x3];                                   // 0x0019(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		uint32_t                                                   ChannelMask;                                             // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumberOfChannels;                                        // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MMP9[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkSpatialAudioSettings
	 * Size -> 0x0020
	 */
	struct FAkSpatialAudioSettings
	{
	public:
		uint32_t                                                   MaxSoundPropagationDepth;                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   DiffractionFlags;                                        // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MovementThreshold;                                       // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NumberOfPrimaryRays;                                     // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   ReflectionOrder;                                         // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableDiffractionOnReflections;                          // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableDirectPathDiffraction;                             // 0x0015(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N54F[0x2];                                   // 0x0016(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaximumPathLength;                                       // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableTransmission;                                      // 0x001C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FLC3[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkCommonInitializationSettings
	 * Size -> 0x0060
	 */
	struct FAkCommonInitializationSettings
	{
	public:
		uint32_t                                                   MaximumNumberOfMemoryPools;                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaximumNumberOfPositioningPaths;                         // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   CommandQueueSize;                                        // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   SamplesPerFrame;                                         // 0x000C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkMainOutputSettings                               MainOutputSettings;                                      // 0x0010(0x0028) Edit, NativeAccessSpecifierPublic
		float                                                      StreamingLookAheadRatio;                                 // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   NumberOfRefillsInVoice;                                  // 0x003C(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0864[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAkSpatialAudioSettings                             SpatialAudioSettings;                                    // 0x0040(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkCommonInitializationSettingsWithSampleRate
	 * Size -> 0x0008 (FullSize[0x0068] - InheritedSize[0x0060])
	 */
	struct FAkCommonInitializationSettingsWithSampleRate : public FAkCommonInitializationSettings
	{
	public:
		uint32_t                                                   SampleRate;                                              // 0x0060(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MOTV[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettings
	 * Size -> 0x0020
	 */
	struct FAkCommunicationSettings
	{
	public:
		uint32_t                                                   PoolSize;                                                // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   DiscoveryBroadcastPort;                                  // 0x0004(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   CommandPort;                                             // 0x0006(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   NotificationPort;                                        // 0x0008(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q208[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NetworkName;                                             // 0x0010(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettingsWithSystemInitialization
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FAkCommunicationSettingsWithSystemInitialization : public FAkCommunicationSettings
	{
	public:
		bool                                                       InitializeSystemComms;                                   // 0x0020(0x0001) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FBRZ[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedSpatialAudioSettings
	 * Size -> 0x0008
	 */
	struct FAkAdvancedSpatialAudioSettings
	{
	public:
		float                                                      DiffractionShadowAttenuationFactor;                      // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DiffractionShadowDegrees;                                // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedInitializationSettings
	 * Size -> 0x0034
	 */
	struct FAkAdvancedInitializationSettings
	{
	public:
		uint32_t                                                   IO_MemorySize;                                           // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   IO_Granularity;                                          // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TargetAutoStreamBufferLength;                            // 0x0008(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseStreamCache;                                          // 0x000C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATWM[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   MaximumPinnedBytesInCache;                               // 0x0010(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableGameSyncPreparation;                               // 0x0014(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HXIF[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   ContinuousPlaybackLookAhead;                             // 0x0018(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MonitorQueuePoolSize;                                    // 0x001C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   MaximumHardwareTimeoutMs;                                // 0x0020(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DebugOutOfRangeCheckEnabled;                             // 0x0024(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PF4I[0x3];                                   // 0x0025(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugOutOfRangeLimit;                                    // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAkAdvancedSpatialAudioSettings                     SpatialAudioSettings;                                    // 0x002C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAdvancedInitializationSettingsWithMultiCoreRendering
	 * Size -> 0x0004 (FullSize[0x0038] - InheritedSize[0x0034])
	 */
	struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : public FAkAdvancedInitializationSettings
	{
	public:
		bool                                                       EnableMultiCoreRendering;                                // 0x0034(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6T3V[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAndroidAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkAndroidAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RoundFrameSizeToHardwareSize;                            // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FYWJ[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkBoolPropertyToControl
	 * Size -> 0x0010
	 */
	struct FAkBoolPropertyToControl
	{
	public:
		class FString                                              ItemProperty;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkWwiseObjectDetails
	 * Size -> 0x0030
	 */
	struct FAkWwiseObjectDetails
	{
	public:
		class FString                                              ItemName;                                                // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemPath;                                                // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ItemId;                                                  // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkWwiseItemToControl
	 * Size -> 0x0040
	 */
	struct FAkWwiseItemToControl
	{
	public:
		struct FAkWwiseObjectDetails                               ItemPicked;                                              // 0x0000(0x0030) Edit, EditConst, NativeAccessSpecifierPublic
		class FString                                              ItemPath;                                                // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkSegmentInfo
	 * Size -> 0x0024
	 */
	struct FAkSegmentInfo
	{
	public:
		int32_t                                                    CurrentPosition;                                         // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PreEntryDuration;                                        // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ActiveDuration;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PostExitDuration;                                        // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RemainingLookAheadTime;                                  // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BeatDuration;                                            // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BarDuration;                                             // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridDuration;                                            // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GridOffset;                                              // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkGeometrySurfaceOverride
	 * Size -> 0x0010
	 */
	struct FAkGeometrySurfaceOverride
	{
	public:
		class UAkAcousticTexture*                                  AcousticTexture;                                         // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              bEnableOcclusionOverride : 1;                            // 0x0008(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KHYT[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OcclusionValue;                                          // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAcousticSurface
	 * Size -> 0x0018
	 */
	struct FAkAcousticSurface
	{
	public:
		uint32_t                                                   Texture;                                                 // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Occlusion;                                               // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkTriangle
	 * Size -> 0x0008
	 */
	struct FAkTriangle
	{
	public:
		uint16_t                                                   Point0;                                                  // 0x0000(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Point1;                                                  // 0x0002(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Point2;                                                  // 0x0004(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint16_t                                                   Surface;                                                 // 0x0006(0x0002) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkGeometryData
	 * Size -> 0x0050
	 */
	struct FAkGeometryData
	{
	public:
		TArray<struct FVector>                                     Vertices;                                                // 0x0000(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAkAcousticSurface>                          Surfaces;                                                // 0x0010(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FAkTriangle>                                 Triangles;                                               // 0x0020(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPhysicalMaterial*>                           ToOverrideAcousticTexture;                               // 0x0030(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UPhysicalMaterial*>                           ToOverrideOcclusion;                                     // 0x0040(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkHololensAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkHololensAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalFocus;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHeadMountedDisplayAudioDevice;                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1YQM[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkPluginInfo
	 * Size -> 0x0028
	 */
	struct FAkPluginInfo
	{
	public:
		class FString                                              Name;                                                    // 0x0000(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   PluginID;                                                // 0x0010(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5EJ4[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              dll;                                                     // 0x0018(0x0010) Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkAudioSession
	 * Size -> 0x000C
	 */
	struct FAkAudioSession
	{
	public:
		EAkAudioSessionCategory                                    AudioSessionCategory;                                    // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VTUL[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		uint32_t                                                   AudioSessionCategoryOptions;                             // 0x0004(0x0004) Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkAudioSessionMode                                        AudioSessionMode;                                        // 0x0008(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FWMT[0x3];                                   // 0x0009(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
	};

	/**
	 * ScriptStruct AkAudio.AkPS4AdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkPS4AdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   ACPBatchBufferSize;                                      // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FPSI[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkPropertyToControl
	 * Size -> 0x0010
	 */
	struct FAkPropertyToControl
	{
	public:
		class FString                                              ItemProperty;                                            // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkPoly
	 * Size -> 0x0010
	 */
	struct FAkPoly
	{
	public:
		class UAkAcousticTexture*                                  Texture;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Occlusion;                                               // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableSurface;                                           // 0x000C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BXBF[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkCommunicationSettingsWithCommSelection
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FAkCommunicationSettingsWithCommSelection : public FAkCommunicationSettings
	{
	public:
		EAkCommSystem                                              CommunicationSystem;                                     // 0x0020(0x0001) ELEMENT_SIZE_MISMATCH Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJR5[0x3];                                   // 0x0021(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_XYAH[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkWindowsAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkWindowsAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalFocus;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHeadMountedDisplayAudioDevice;                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XRFN[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkWinGDKAdvancedInitializationSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	struct FAkWinGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint32_t                                                   AudioAPI;                                                // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GlobalFocus;                                             // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHeadMountedDisplayAudioDevice;                        // 0x003D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OU1I[0x2];                                   // 0x003E(0x0002) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneGDKApuHeapInitializationSettings
	 * Size -> 0x0008
	 */
	struct FAkXboxOneGDKApuHeapInitializationSettings
	{
	public:
		uint32_t                                                   CachedSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NonCachedSize;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneGDKAdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkXboxOneGDKAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint16_t                                                   MaximumNumberOfXMAVoices;                                // 0x0038(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KP06[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneApuHeapInitializationSettings
	 * Size -> 0x0008
	 */
	struct FAkXboxOneApuHeapInitializationSettings
	{
	public:
		uint32_t                                                   CachedSize;                                              // 0x0000(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		uint32_t                                                   NonCachedSize;                                           // 0x0004(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkXboxOneAdvancedInitializationSettings
	 * Size -> 0x0004 (FullSize[0x003C] - InheritedSize[0x0038])
	 */
	struct FAkXboxOneAdvancedInitializationSettings : public FAkAdvancedInitializationSettingsWithMultiCoreRendering
	{
	public:
		uint16_t                                                   MaximumNumberOfXMAVoices;                                // 0x0038(0x0002) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseHardwareCodecLowLatencyMode;                          // 0x003A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4K8M[0x1];                                   // 0x003B(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAudioEventTrackKey
	 * Size -> 0x0020
	 */
	struct FAkAudioEventTrackKey
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z5BZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAkAudioEvent*                                       AkAudioEvent;                                            // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              EventName;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneTangentDataSerializationHelper
	 * Size -> 0x0014
	 */
	struct FMovieSceneTangentDataSerializationHelper
	{
	public:
		float                                                      ArriveTangent;                                           // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangent;                                            // 0x0004(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveTangentWeightMode                                TangentWeightMode;                                       // 0x0008(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RWZI[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArriveTangentWeight;                                     // 0x000C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LeaveTangentWeight;                                      // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneFloatValueSerializationHelper
	 * Size -> 0x001C
	 */
	struct FMovieSceneFloatValueSerializationHelper
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveInterpMode                                       InterpMode;                                              // 0x0004(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveTangentMode                                      TangentMode;                                             // 0x0005(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1Q8T[0x2];                                   // 0x0006(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneTangentDataSerializationHelper           Tangent;                                                 // 0x0008(0x0014) NoDestructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneFloatChannelSerializationHelper
	 * Size -> 0x0030
	 */
	struct FMovieSceneFloatChannelSerializationHelper
	{
	public:
		ERichCurveExtrapolation                                    PreInfinityExtrap;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ERichCurveExtrapolation                                    PostInfinityExtrap;                                      // 0x0001(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VV8H[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            Times;                                                   // 0x0008(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FMovieSceneFloatValueSerializationHelper>    Values;                                                  // 0x0018(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultValue;                                            // 0x0028(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasDefaultValue;                                        // 0x002C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3VLZ[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AKWaapiJsonObject
	 * Size -> 0x0010
	 */
	struct FAKWaapiJsonObject
	{
	public:
		unsigned char                                              UnknownData_BLE6[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkWaapiSubscriptionId
	 * Size -> 0x0008
	 */
	struct FAkWaapiSubscriptionId
	{
	public:
		unsigned char                                              UnknownData_6TXF[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkAmbSoundCheckpointRecord
	 * Size -> 0x0001
	 */
	struct FAkAmbSoundCheckpointRecord
	{
	public:
		bool                                                       bCurrentlyPlaying;                                       // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkExternalSourceInfo
	 * Size -> 0x0038
	 */
	struct FAkExternalSourceInfo
	{
	public:
		class FString                                              ExternalSrcName;                                         // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAkCodecId                                                 CodecID;                                                 // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4JAI[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Filename;                                                // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAkExternalMediaAsset*                               ExternalSourceAsset;                                     // 0x0028(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsStreamed;                                              // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O3UC[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkMidiEventBase
	 * Size -> 0x0002
	 */
	struct FAkMidiEventBase
	{
	public:
		EAkMidiEventType                                           Type;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Chan;                                                    // 0x0001(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiProgramChange
	 * Size -> 0x0001 (FullSize[0x0003] - InheritedSize[0x0002])
	 */
	struct FAkMidiProgramChange : public FAkMidiEventBase
	{
	public:
		unsigned char                                              ProgramNum;                                              // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiChannelAftertouch
	 * Size -> 0x0001 (FullSize[0x0003] - InheritedSize[0x0002])
	 */
	struct FAkMidiChannelAftertouch : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Value;                                                   // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiNoteAftertouch
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiNoteAftertouch : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Note;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Value;                                                   // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiPitchBend
	 * Size -> 0x0006 (FullSize[0x0008] - InheritedSize[0x0002])
	 */
	struct FAkMidiPitchBend : public FAkMidiEventBase
	{
	public:
		unsigned char                                              ValueLsb;                                                // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ValueMsb;                                                // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FullValue;                                               // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiCc
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiCc : public FAkMidiEventBase
	{
	public:
		EAkMidiCcValues                                            Cc;                                                      // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Value;                                                   // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiNoteOnOff
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiNoteOnOff : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Note;                                                    // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Velocity;                                                // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkMidiGeneric
	 * Size -> 0x0002 (FullSize[0x0004] - InheritedSize[0x0002])
	 */
	struct FAkMidiGeneric : public FAkMidiEventBase
	{
	public:
		unsigned char                                              Param1;                                                  // 0x0002(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Param2;                                                  // 0x0003(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkChannelMask
	 * Size -> 0x0004
	 */
	struct FAkChannelMask
	{
	public:
		int32_t                                                    ChannelMask;                                             // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkGeometrySurfacePropertiesToMap
	 * Size -> 0x0030
	 */
	struct FAkGeometrySurfacePropertiesToMap
	{
	public:
		unsigned char                                              AcousticTexture[0x28];                                   // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		float                                                      OcclusionValue;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A8RZ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AkAudio.AkWaapiFieldNames
	 * Size -> 0x0010
	 */
	struct FAkWaapiFieldNames
	{
	public:
		class FString                                              FieldName;                                               // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.AkWaapiUri
	 * Size -> 0x0010
	 */
	struct FAkWaapiUri
	{
	public:
		class FString                                              Uri;                                                     // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneAkAudioEventTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneAkAudioEventTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UMovieSceneAkAudioEventSection*                      Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AkAudio.MovieSceneAkAudioRTPCTemplate
	 * Size -> 0x0008 (FullSize[0x0028] - InheritedSize[0x0020])
	 */
	struct FMovieSceneAkAudioRTPCTemplate : public FMovieSceneEvalTemplate
	{
	public:
		class UMovieSceneAkAudioRTPCSection*                       Section;                                                 // 0x0020(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
