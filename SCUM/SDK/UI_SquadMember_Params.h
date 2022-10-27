#pragma once

/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * Function UI_SquadMember.UI_SquadMember_C.UpdateOptions
	 */
	struct UUI_SquadMember_C_UpdateOptions_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.SetInfo
	 */
	struct UUI_SquadMember_C_SetInfo_Params
	{
	public:
		struct FDbIntegerId                                        UserProfileId;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class FString                                              Name;                                                    // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		EConZSquadMemberRank                                       Rank;                                                    // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_03D6[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      FamePoints;                                              // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       online;                                                  // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__DemoteButton_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__DemoteButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__DemoteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__DemoteButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__PromoteButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__PromoteButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__KickButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__KickButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.PromoteConfirmed
	 */
	struct UUI_SquadMember_C_PromoteConfirmed_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.PromoteCanceled
	 */
	struct UUI_SquadMember_C_PromoteCanceled_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.DemoteConfirmed
	 */
	struct UUI_SquadMember_C_DemoteConfirmed_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.DemoteCanceled
	 */
	struct UUI_SquadMember_C_DemoteCanceled_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.KickConfirmed
	 */
	struct UUI_SquadMember_C_KickConfirmed_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.KickCanceled
	 */
	struct UUI_SquadMember_C_KickCanceled_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.MakeLeaderConfirmed
	 */
	struct UUI_SquadMember_C_MakeLeaderConfirmed_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.MakeLeaderCanceled
	 */
	struct UUI_SquadMember_C_MakeLeaderCanceled_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_11_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_SquadMember_C_BndEvt__MakeLeaderButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_SquadMember.UI_SquadMember_C.ExecuteUbergraph_UI_SquadMember
	 */
	struct UUI_SquadMember_C_ExecuteUbergraph_UI_SquadMember_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
