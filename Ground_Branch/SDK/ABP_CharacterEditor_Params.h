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
	 * Function ABP_CharacterEditor.ABP_CharacterEditor_C.AnimGraph
	 */
	struct UABP_CharacterEditor_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_CharacterEditor.ABP_CharacterEditor_C.CopyPoseFrom
	 */
	struct UABP_CharacterEditor_C_CopyPoseFrom_Params
	{
	public:
		class UAnimInstance*                                       AnimInstance;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_CharacterEditor.ABP_CharacterEditor_C.BlueprintInitializeAnimation
	 */
	struct UABP_CharacterEditor_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_CharacterEditor.ABP_CharacterEditor_C.RandomiseFidgetTimer
	 */
	struct UABP_CharacterEditor_C_RandomiseFidgetTimer_Params
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_CharacterEditor.ABP_CharacterEditor_C.Fidget
	 */
	struct UABP_CharacterEditor_C_Fidget_Params
	{	};

	/**
	 * Function ABP_CharacterEditor.ABP_CharacterEditor_C.BlueprintUpdateAnimation
	 */
	struct UABP_CharacterEditor_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_CharacterEditor.ABP_CharacterEditor_C.ExecuteUbergraph_ABP_CharacterEditor
	 */
	struct UABP_CharacterEditor_C_ExecuteUbergraph_ABP_CharacterEditor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
