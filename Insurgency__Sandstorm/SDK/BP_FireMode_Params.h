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
	 * Function BP_FireMode.BP_FireMode_C.UpdateFiremodeWidgetVisibility
	 */
	struct UBP_FireMode_C_UpdateFiremodeWidgetVisibility_Params
	{
	public:
		int32_t                                                    OutVisibleFiremodes;                                     // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireMode.BP_FireMode_C.UpdateAlwaysShow
	 */
	struct UBP_FireMode_C_UpdateAlwaysShow_Params
	{	};

	/**
	 * Function BP_FireMode.BP_FireMode_C.MakeVisible
	 */
	struct UBP_FireMode_C_MakeVisible_Params
	{	};

	/**
	 * Function BP_FireMode.BP_FireMode_C.ShowFiremodeFor
	 */
	struct UBP_FireMode_C_ShowFiremodeFor_Params
	{
	public:
		float                                                      LengthInSeconds;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireMode.BP_FireMode_C.UpdateFiremode
	 */
	struct UBP_FireMode_C_UpdateFiremode_Params
	{
	public:
		EFirearmFiremode                                           NewFiremode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GA1P[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_FireMode.BP_FireMode_C.WeaponChanged
	 */
	struct UBP_FireMode_C_WeaponChanged_Params
	{
	public:
		class AItemEquipable*                                      NewItem;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AItemEquipable*                                      OldItem;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireMode.BP_FireMode_C.FadeoutEvent
	 */
	struct UBP_FireMode_C_FadeoutEvent_Params
	{	};

	/**
	 * Function BP_FireMode.BP_FireMode_C.Construct
	 */
	struct UBP_FireMode_C_Construct_Params
	{	};

	/**
	 * Function BP_FireMode.BP_FireMode_C.Tick
	 */
	struct UBP_FireMode_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireMode.BP_FireMode_C.ExecuteUbergraph_BP_FireMode
	 */
	struct UBP_FireMode_C_ExecuteUbergraph_BP_FireMode_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FireMode.BP_FireMode_C.UpdateFiremodeContainerVisibility__DelegateSignature
	 */
	struct UBP_FireMode_C_UpdateFiremodeContainerVisibility__DelegateSignature_Params
	{
	public:
		bool                                                       bVisible;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
