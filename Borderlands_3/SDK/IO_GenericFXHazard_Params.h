#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
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
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.ConvertRelativeLocationsToWorld
	 */
	struct AIO_GenericFXHazard_C_ConvertRelativeLocationsToWorld_Params
	{	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayShutdown
	 */
	struct AIO_GenericFXHazard_C_Audio_PlayShutdown_Params
	{
	public:
		class UDA_GenericFXHazard_C*                               self3;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.Audio_PlayWarmup
	 */
	struct AIO_GenericFXHazard_C_Audio_PlayWarmup_Params
	{
	public:
		class UDA_GenericFXHazard_C*                               DataAsset;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.UserConstructionScript
	 */
	struct AIO_GenericFXHazard_C_UserConstructionScript_Params
	{	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.ReceiveBeginPlay
	 */
	struct AIO_GenericFXHazard_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_1
	 */
	struct AIO_GenericFXHazard_C___UserState_FireState_1_Params
	{
	public:
		bool                                                       bFromLoad;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.__UserState_FireState_2
	 */
	struct AIO_GenericFXHazard_C___UserState_FireState_2_Params
	{
	public:
		bool                                                       bFromLoad;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnActivate
	 */
	struct AIO_GenericFXHazard_C_OnActivate_Params
	{	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.OnDeactivate
	 */
	struct AIO_GenericFXHazard_C_OnDeactivate_Params
	{	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.SetPlaceableFireState
	 */
	struct AIO_GenericFXHazard_C_SetPlaceableFireState_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard
	 */
	struct AIO_GenericFXHazard_C_BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_IO_GenericFXHazard_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GQ9C[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x0090)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.ExecuteUbergraph_IO_GenericFXHazard
	 */
	struct AIO_GenericFXHazard_C_ExecuteUbergraph_IO_GenericFXHazard_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function IO_GenericFXHazard.IO_GenericFXHazard_C.Event_BeginPlayerOverlap__DelegateSignature
	 */
	struct AIO_GenericFXHazard_C_Event_BeginPlayerOverlap__DelegateSignature_Params
	{
	public:
		class AGbxPlayerController*                                GbxPlayerController;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
