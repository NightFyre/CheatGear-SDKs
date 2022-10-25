#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function RareAudio.AudioEventToComponentMap.ClearMappings
	 */
	struct AAudioEventToComponentMap_ClearMappings_Params
	{	};

	/**
	 * Function RareAudio.AudioEventToComponentMap.AddMappingWithSingleEmitterComponent
	 */
	struct AAudioEventToComponentMap_AddMappingWithSingleEmitterComponent_Params
	{
	public:
		class UWwiseEvent*                                         PlayEvent;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseEvent*                                         StopEvent;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseEmitterComponent*                              WwiseEmitterComponent;                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseObjectPoolWrapper*                             WwiseEmitterPool;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.AudioEventToComponentMap.AddMapping
	 */
	struct AAudioEventToComponentMap_AddMapping_Params
	{
	public:
		class UWwiseEvent*                                         PlayEvent;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseEvent*                                         StopEvent;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UWwiseEmitterComponent*>                      WwiseEmitterComponents;                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
		class UWwiseObjectPoolWrapper*                             WwiseEmitterPool;                                        // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.AudioEventToComponentMapComponent.ClearMappings
	 */
	struct UAudioEventToComponentMapComponent_ClearMappings_Params
	{	};

	/**
	 * Function RareAudio.AudioEventToComponentMapComponent.AddMappingWithSingleEmitterComponent
	 */
	struct UAudioEventToComponentMapComponent_AddMappingWithSingleEmitterComponent_Params
	{
	public:
		class UWwiseEvent*                                         PlayEvent;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseEvent*                                         StopEvent;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseEmitterComponent*                              WwiseEmitterComponent;                                   // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseObjectPoolWrapper*                             WwiseEmitterPool;                                        // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.AudioEventToComponentMapComponent.AddMapping
	 */
	struct UAudioEventToComponentMapComponent_AddMapping_Params
	{
	public:
		class UWwiseEvent*                                         PlayEvent;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseEvent*                                         StopEvent;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UWwiseEmitterComponent*>                      WwiseEmitterComponents;                                  // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
		class UWwiseObjectPoolWrapper*                             WwiseEmitterPool;                                        // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseStopGlobalEvent
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseStopGlobalEvent_Params
	{
	public:
		class UWwiseEvent*                                         Event;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FadeTime;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetState
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseSetState_Params
	{
	public:
		class FName                                                StateGroup;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                StateValue;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseSetGlobalRTPC
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseSetGlobalRTPC_Params
	{
	public:
		class FName                                                RTPCName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RTPCValue;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostOneShotOnOwner
	 */
	struct UWwiseEmitterBlueprintLibrary_WwisePostOneShotOnOwner_Params
	{
	public:
		class UObject*                                             Owner;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseObjectPoolWrapper*                             EmitterPool;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FWwiseEmitterCreationParams                         CreationParams;                                          // 0x0010(0x0028)  (Parm)
		struct FVector                                             Offset;                                                  // 0x0038(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EEmitterRelationship                                       Relationship;                                            // 0x0044(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostGlobalEvent
	 */
	struct UWwiseEmitterBlueprintLibrary_WwisePostGlobalEvent_Params
	{
	public:
		class UWwiseEvent*                                         Event;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwisePostEventAtLocation
	 */
	struct UWwiseEmitterBlueprintLibrary_WwisePostEventAtLocation_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (Parm, OutParm)
		class UWwiseEvent*                                         Event;                                                   // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0028(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             Front;                                                   // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		class UWwiseObjectPoolWrapper*                             EmitterPool;                                             // 0x0040(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEmitterRelationship                                       Relationship;                                            // 0x0048(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XC8C[0x3];                                   // 0x0049(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x004C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseIsGlobalEvent
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseIsGlobalEvent_Params
	{
	public:
		class UWwiseEvent*                                         Event;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerInfo
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerInfo_Params
	{
	public:
		struct FWwiseListenerInfo                                  InfoOut;                                                 // 0x0000(0x003C)  (Parm, OutParm)
		int32_t                                                    Viewport;                                                // 0x003C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetListenerEmitter
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseGetListenerEmitter_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (Parm, OutParm)
		class UObject*                                             WorldContextObject;                                      // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ListenerIndex;                                           // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Name;                                                    // 0x002C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0034(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bFollowOrientaion;                                       // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W8OQ[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWwiseObjectPoolWrapper*                             EmitterPool;                                             // 0x0048(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseGetGlobalRTPC
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseGetGlobalRTPC_Params
	{
	public:
		class FName                                                RTPCName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RTPCValue;                                               // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterWaitToComplete
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterWaitToComplete_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		int32_t                                                    PlayId;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U7PK[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UObject*                                             WorldContextObject;                                      // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLatentActionInfo                                   LatentInfo;                                              // 0x0030(0x0018)  (Parm)
		bool                                                       ReturnValue;                                             // 0x0048(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterStop
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterStop_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		int32_t                                                    PlayId;                                                  // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      FadeTime;                                                // 0x0024(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetSwitch
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetSwitch_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FName                                                SwitchGroup;                                             // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Value;                                                   // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPCOnAll
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPCOnAll_Params
	{
	public:
		TArray<struct FWwiseEmitter>                               Emitters;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor)
		class FName                                                Name;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetRTPC
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetRTPC_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FName                                                Name;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetParams
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetParams_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FWwiseEmitterParams                                 Params;                                                  // 0x0020(0x0002)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0022(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterSetLocation
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterSetLocation_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		struct FVector                                             Location;                                                // 0x0020(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEventOnAll
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEventOnAll_Params
	{
	public:
		TArray<struct FWwiseEmitter>                               Emitters;                                                // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEmitterRelationship                                       Relationship;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IU4M[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SourcePath;                                              // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		class FName                                                SourceObj;                                               // 0x0024(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6PG4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterPostEvent
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterPostEvent_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEmitterRelationship                                       Relationship;                                            // 0x0028(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V3L1[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SourcePath;                                              // 0x002C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		class FName                                                SourceObj;                                               // 0x0034(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x003C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsValid
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsValid_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterIsPlaying
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterIsPlaying_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UWwiseEvent*                                         Event;                                                   // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterGetRTPC
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterGetRTPC_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		class FName                                                Name;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0028(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x002C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterDestroy
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterDestroy_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPCOnAll
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPCOnAll_Params
	{
	public:
		TArray<class UWwiseEmitterComponent*>                      EmitterComponents;                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference)
		class FName                                                Name;                                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentSetRTPC
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentSetRTPC_Params
	{
	public:
		class UWwiseEmitterComponent*                              EmitterComponent;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Name;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Value;                                                   // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEventOnAll
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEventOnAll_Params
	{
	public:
		TArray<class UWwiseEmitterComponent*>                      EmitterComponents;                                       // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ContainsInstancedReference)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEmitterRelationship                                       Relationship;                                            // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GNZP[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SourcePath;                                              // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		class FName                                                SourceObj;                                               // 0x0024(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LNQM[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<int32_t>                                            ReturnValue;                                             // 0x0030(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseEmitterComponentPostEvent
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseEmitterComponentPostEvent_Params
	{
	public:
		class UWwiseEmitterComponent*                              EmitterComponent;                                        // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseEvent*                                         WwiseEvent;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EEmitterRelationship                                       Relationship;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0YOF[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                SourcePath;                                              // 0x0014(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		class FName                                                SourceObj;                                               // 0x001C(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateEmitter
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseCreateEmitter_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (Parm, OutParm)
		class FName                                                Name;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Owner;                                                   // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		class UWwiseObjectPoolWrapper*                             EmitterPool;                                             // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		struct FVector                                             Offset;                                                  // 0x0038(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
		bool                                                       ReturnValue;                                             // 0x0044(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.WwiseCreateDetachedEmitter
	 */
	struct UWwiseEmitterBlueprintLibrary_WwiseCreateDetachedEmitter_Params
	{
	public:
		struct FWwiseEmitter                                       Emitter;                                                 // 0x0000(0x0020)  (Parm, OutParm)
		class FName                                                Name;                                                    // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWwiseObjectPoolWrapper*                             EmitterPool;                                             // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0030(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_JEHR[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FWwiseEmitterCreationParams                         CreationParams;                                          // 0x0040(0x0028)  (Parm)
		EEmitterRelationship                                       Relationship;                                            // 0x0068(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IDRO[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Forward;                                                 // 0x006C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay)
		int32_t                                                    ReturnValue;                                             // 0x0078(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.SeekOnEvent
	 */
	struct UWwiseEmitterBlueprintLibrary_SeekOnEvent_Params
	{
	public:
		struct FWwiseEmitter                                       WwiseEmitter;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		class UWwiseEvent*                                         in_eventID;                                              // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    in_iPosition;                                            // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       in_bSeekToNearestMarker;                                 // 0x002C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_XL4C[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    in_PlayingID;                                            // 0x0030(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0034(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterBlueprintLibrary.GetPlaybackPosition
	 */
	struct UWwiseEmitterBlueprintLibrary_GetPlaybackPosition_Params
	{
	public:
		struct FWwiseEmitter                                       WwiseEmitter;                                            // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm)
		int32_t                                                    in_PlayingID;                                            // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    PlaybackPositionInMs;                                    // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetNamedEmitter
	 */
	struct UWwiseEmitterComponentBlueprintLibrary_GetNamedEmitter_Params
	{
	public:
		struct FWwiseEmitter                                       OutEmitter;                                              // 0x0000(0x0020)  (Parm, OutParm)
		class FName                                                InNameOfEmitterToRetrieve;                               // 0x0020(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              InActorToFindEmitterOn;                                  // 0x0028(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestNEmitters
	 */
	struct UWwiseEmitterComponentBlueprintLibrary_GetClosestNEmitters_Params
	{
	public:
		TArray<struct FWwiseEmitter>                               OutEmitters;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor)
		struct FVector                                             InFromPosition;                                          // 0x0010(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		int32_t                                                    InNumEmittersToFind;                                     // 0x001C(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		class AActor*                                              InActorToFindClosestEmitterOn;                           // 0x0020(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.WwiseEmitterComponentBlueprintLibrary.GetClosestEmitter
	 */
	struct UWwiseEmitterComponentBlueprintLibrary_GetClosestEmitter_Params
	{
	public:
		struct FWwiseEmitter                                       OutEmitter;                                              // 0x0000(0x0020)  (Parm, OutParm)
		struct FVector                                             InFromPosition;                                          // 0x0020(0x000C)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EDHF[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              InActorToFindClosestEmitterOn;                           // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0038(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function RareAudio.AudioSpaceComponent.OnOverlapEnd
	 */
	struct UAudioSpaceComponent_OnOverlapEnd_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.AudioSpaceComponent.OnOverlapBegin
	 */
	struct UAudioSpaceComponent_OnOverlapBegin_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       FromSweep;                                               // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_034Q[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0018(0x0080)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function RareAudio.AudioSpaceDataAsset.GetRtpcName
	 */
	struct UAudioSpaceDataAsset_GetRtpcName_Params
	{
	public:
		class FName                                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.AudioSpaceTrackerComponent.GetCurrentSpace
	 */
	struct UAudioSpaceTrackerComponent_GetCurrentSpace_Params
	{
	public:
		class UAudioSpaceDataAsset*                                ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function RareAudio.StaticMeshAudioEmittersComponent.PopulateInstanceAssociations
	 */
	struct UStaticMeshAudioEmittersComponent_PopulateInstanceAssociations_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
