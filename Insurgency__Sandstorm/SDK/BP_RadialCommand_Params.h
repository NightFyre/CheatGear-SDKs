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
	 * Function BP_RadialCommand.BP_RadialCommand_C.UpdateDisabledImageVisibility
	 */
	struct UBP_RadialCommand_C_UpdateDisabledImageVisibility_Params
	{	};

	/**
	 * Function BP_RadialCommand.BP_RadialCommand_C.SetHovered
	 */
	struct UBP_RadialCommand_C_SetHovered_Params
	{
	public:
		bool                                                       bNewHovered;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_QLKA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_RadialCommand.BP_RadialCommand_C.ConfigureTextCollapse
	 */
	struct UBP_RadialCommand_C_ConfigureTextCollapse_Params
	{
	public:
		class UTextBlock*                                          Text;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialCommand.BP_RadialCommand_C.UpdateDisplayText
	 */
	struct UBP_RadialCommand_C_UpdateDisplayText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_RadialCommand.BP_RadialCommand_C.UpdateFireSupport
	 */
	struct UBP_RadialCommand_C_UpdateFireSupport_Params
	{	};

	/**
	 * Function BP_RadialCommand.BP_RadialCommand_C.GetTextColor
	 */
	struct UBP_RadialCommand_C_GetTextColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialCommand.BP_RadialCommand_C.Construct
	 */
	struct UBP_RadialCommand_C_Construct_Params
	{	};

	/**
	 * Function BP_RadialCommand.BP_RadialCommand_C.Tick
	 */
	struct UBP_RadialCommand_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_RadialCommand.BP_RadialCommand_C.ExecuteUbergraph_BP_RadialCommand
	 */
	struct UBP_RadialCommand_C_ExecuteUbergraph_BP_RadialCommand_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
