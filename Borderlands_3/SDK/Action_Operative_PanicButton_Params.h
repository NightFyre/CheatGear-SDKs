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
	 * Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnServerBegin
	 */
	struct UAction_Operative_PanicButton_C_OnServerBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnServerEnd
	 */
	struct UAction_Operative_PanicButton_C_OnServerEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3X07[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.StopButtonPress
	 */
	struct UAction_Operative_PanicButton_C_StopButtonPress_Params
	{	};

	/**
	 * Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.DetonateClone
	 */
	struct UAction_Operative_PanicButton_C_DetonateClone_Params
	{	};

	/**
	 * Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.StopDigicloneFX
	 */
	struct UAction_Operative_PanicButton_C_StopDigicloneFX_Params
	{	};

	/**
	 * Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnBegin
	 */
	struct UAction_Operative_PanicButton_C_OnBegin_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.OnEnd
	 */
	struct UAction_Operative_PanicButton_C_OnEnd_Params
	{
	public:
		EGbxActionEndState                                         ActionEndState;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KD1N[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Actor;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Action_Operative_PanicButton.Action_Operative_PanicButton_C.ExecuteUbergraph_Action_Operative_PanicButton
	 */
	struct UAction_Operative_PanicButton_C_ExecuteUbergraph_Action_Operative_PanicButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5UK9[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
