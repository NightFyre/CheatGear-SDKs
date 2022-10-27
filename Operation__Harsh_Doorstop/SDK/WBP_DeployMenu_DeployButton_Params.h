#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
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
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalGetSpawnTimeRemaining
	 */
	struct UWBP_DeployMenu_DeployButton_C_InternalGetSpawnTimeRemaining_Params
	{
	public:
		int32_t                                                    SpawnSeconds;                                            // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WG8A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalUpdateBtnStyle
	 */
	struct UWBP_DeployMenu_DeployButton_C_InternalUpdateBtnStyle_Params
	{	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.InternalUpdateBtnText
	 */
	struct UWBP_DeployMenu_DeployButton_C_InternalUpdateBtnText_Params
	{
	public:
		bool                                                       bDeploying;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSpawnPointSelected;                                     // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.UpdateDeployBtnState
	 */
	struct UWBP_DeployMenu_DeployButton_C_UpdateDeployBtnState_Params
	{
	public:
		bool                                                       bPlayerAlive;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bDeploymentQueued;                                       // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bSpawnPointSelected;                                     // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_BNBN[0x5];                                   // 0x0003(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.PreConstruct
	 */
	struct UWBP_DeployMenu_DeployButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_DeployButton_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_DeployButton_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_DeployButton_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_2_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_DeployButton_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWBP_DeployMenu_DeployButton_C_BndEvt__DeployBtn_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.Tick
	 */
	struct UWBP_DeployMenu_DeployButton_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.ExecuteUbergraph_WBP_DeployMenu_DeployButton
	 */
	struct UWBP_DeployMenu_DeployButton_C_ExecuteUbergraph_WBP_DeployMenu_DeployButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnUnhovered__DelegateSignature
	 */
	struct UWBP_DeployMenu_DeployButton_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		bool                                                       bCloseBtn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnHovered__DelegateSignature
	 */
	struct UWBP_DeployMenu_DeployButton_C_OnHovered__DelegateSignature_Params
	{
	public:
		bool                                                       bCloseBtn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnReleased__DelegateSignature
	 */
	struct UWBP_DeployMenu_DeployButton_C_OnReleased__DelegateSignature_Params
	{
	public:
		bool                                                       bCloseBtn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnPressed__DelegateSignature
	 */
	struct UWBP_DeployMenu_DeployButton_C_OnPressed__DelegateSignature_Params
	{
	public:
		bool                                                       bCloseBtn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function WBP_DeployMenu_DeployButton.WBP_DeployMenu_DeployButton_C.OnClicked__DelegateSignature
	 */
	struct UWBP_DeployMenu_DeployButton_C_OnClicked__DelegateSignature_Params
	{
	public:
		bool                                                       bCloseBtn;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
