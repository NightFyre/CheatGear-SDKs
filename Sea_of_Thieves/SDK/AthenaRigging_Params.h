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
	 * Function AthenaRigging.InstancedRopeComponent.SetUnderwater
	 */
	struct UInstancedRopeComponent_SetUnderwater_Params
	{
	public:
		bool                                                       Underwater;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function AthenaRigging.InstancedRopeComponent.SetRopes
	 */
	struct UInstancedRopeComponent_SetRopes_Params
	{
	public:
		TArray<struct FInstancedRopeParams>                        InRopes;                                                 // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	};

	/**
	 * Function AthenaRigging.RiggingSystemComponent.SetSocketLookupSource
	 */
	struct URiggingSystemComponent_SetSocketLookupSource_Params
	{
	public:
		class AActor*                                              InSocketSource;                                          // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaRigging.RiggingSystemComponent.ConvertLineToRopeIndex
	 */
	struct URiggingSystemComponent_ConvertLineToRopeIndex_Params
	{
	public:
		class FName                                                InLineGroupName;                                         // 0x0000(0x0008)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    InLineOffset;                                            // 0x0008(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaRigging.RopeInterface.SetRopeUVOffset
	 */
	struct URopeInterface_SetRopeUVOffset_Params
	{
	public:
		float                                                      InUVOffset;                                              // 0x0000(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function AthenaRigging.RopeInterface.SetRopeEndpoints
	 */
	struct URopeInterface_SetRopeEndpoints_Params
	{
	public:
		struct FVector                                             InWorldSpaceStart;                                       // 0x0000(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		struct FVector                                             InWorldSpaceEnd;                                         // 0x000C(0x000C)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
