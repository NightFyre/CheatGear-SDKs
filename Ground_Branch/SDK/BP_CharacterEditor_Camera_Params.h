#pragma once

/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * Function BP_CharacterEditor_Camera.BP_CharacterEditor_Camera_C.FitToBounds
	 */
	struct ABP_CharacterEditor_Camera_C_FitToBounds_Params
	{
	public:
		struct FVector2D                                           InBounds;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      InFieldOfView;                                           // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CharacterEditor_Camera.BP_CharacterEditor_Camera_C.ReceiveBeginPlay
	 */
	struct ABP_CharacterEditor_Camera_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CharacterEditor_Camera.BP_CharacterEditor_Camera_C.ExecuteUbergraph_BP_CharacterEditor_Camera
	 */
	struct ABP_CharacterEditor_Camera_C_ExecuteUbergraph_BP_CharacterEditor_Camera_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
