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
	 * Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.UserConstructionScript
	 */
	struct AStandIn_Operative_Digiclone_C_UserConstructionScript_Params
	{	};

	/**
	 * Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone
	 */
	struct AStandIn_Operative_Digiclone_C_BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone_Params
	{
	public:
		class UGbxCustomizationData*                               Customization;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.OnReceivedClonedWeaponAppearance
	 */
	struct AStandIn_Operative_Digiclone_C_OnReceivedClonedWeaponAppearance_Params
	{
	public:
		class USceneComponent*                                     BaseComponent;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.ExecuteUbergraph_StandIn_Operative_Digiclone
	 */
	struct AStandIn_Operative_Digiclone_C_ExecuteUbergraph_StandIn_Operative_Digiclone_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
