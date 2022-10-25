#pragma once

/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
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
	 * Function BP_CompassMarker.BP_CompassMarker_C.GetTargetPosition
	 */
	struct UBP_CompassMarker_C_GetTargetPosition_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CompassMarker.BP_CompassMarker_C.UpdateMarker
	 */
	struct UBP_CompassMarker_C_UpdateMarker_Params
	{
	public:
		struct FVector                                             CameraPosition;                                          // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FRotator                                            CameraRotation;                                          // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CompassMarker.BP_CompassMarker_C.UpdateAngle
	 */
	struct UBP_CompassMarker_C_UpdateAngle_Params
	{
	public:
		float                                                      Degrees;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CompassMarker.BP_CompassMarker_C.PreConstruct
	 */
	struct UBP_CompassMarker_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CompassMarker.BP_CompassMarker_C.Construct
	 */
	struct UBP_CompassMarker_C_Construct_Params
	{	};

	/**
	 * Function BP_CompassMarker.BP_CompassMarker_C.ExecuteUbergraph_BP_CompassMarker
	 */
	struct UBP_CompassMarker_C_ExecuteUbergraph_BP_CompassMarker_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6PRS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_CompassMarker.BP_CompassMarker_C.OnMarkerExpired__DelegateSignature
	 */
	struct UBP_CompassMarker_C_OnMarkerExpired__DelegateSignature_Params
	{
	public:
		class UBP_CompassMarker_C*                                 Marker;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
