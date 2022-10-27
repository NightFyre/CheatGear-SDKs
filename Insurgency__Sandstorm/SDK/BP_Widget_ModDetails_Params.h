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
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnKeyDown
	 */
	struct UBP_Widget_ModDetails_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.SetRateButtonsEnabled
	 */
	struct UBP_Widget_ModDetails_C_SetRateButtonsEnabled_Params
	{
	public:
		bool                                                       bNewEnabled;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateSubscribedState
	 */
	struct UBP_Widget_ModDetails_C_UpdateSubscribedState_Params
	{	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateSubscribedButtonState
	 */
	struct UBP_Widget_ModDetails_C_UpdateSubscribedButtonState_Params
	{
	public:
		bool                                                       bSubscribed;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateModData
	 */
	struct UBP_Widget_ModDetails_C_UpdateModData_Params
	{
	public:
		struct FModObject                                          NewModData;                                              // 0x0000(0x02D8)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.InternalUpdateModData
	 */
	struct UBP_Widget_ModDetails_C_InternalUpdateModData_Params
	{	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnSubscribed_A51B8D424F17FF21C12CD8B2AD241ACE
	 */
	struct UBP_Widget_ModDetails_C_OnSubscribed_A51B8D424F17FF21C12CD8B2AD241ACE_Params
	{
	public:
		struct FModObject                                          ModObject;                                               // 0x0000(0x02D8)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnUnsubscribed_36C17F4049A426DB22712494EAD5839B
	 */
	struct UBP_Widget_ModDetails_C_OnUnsubscribed_36C17F4049A426DB22712494EAD5839B_Params
	{	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnModRated_172200CB49810EECB2BFBE8010CAF237
	 */
	struct UBP_Widget_ModDetails_C_OnModRated_172200CB49810EECB2BFBE8010CAF237_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnModRatingsReceived_6E37F70043A39855536685911855CDC0
	 */
	struct UBP_Widget_ModDetails_C_OnModRatingsReceived_6E37F70043A39855536685911855CDC0_Params
	{
	public:
		bool                                                       bSuccess;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5ZKP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGetUserRatingsSchema                               Ratings;                                                 // 0x0008(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.Construct
	 */
	struct UBP_Widget_ModDetails_C_Construct_Params
	{	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBP_Widget_ModDetails_C_BndEvt__BP_ImageButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__ViewButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature
	 */
	struct UBP_Widget_ModDetails_C_BndEvt__ViewButton_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__SubscribeButton_K2Node_ComponentBoundEvent_3_OnClickWithContext__DelegateSignature
	 */
	struct UBP_Widget_ModDetails_C_BndEvt__SubscribeButton_K2Node_ComponentBoundEvent_3_OnClickWithContext__DelegateSignature_Params
	{
	public:
		class FString                                              ContextValue;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ContextIntValue;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__LikeButton_K2Node_ComponentBoundEvent_4_OnClickWithContext__DelegateSignature
	 */
	struct UBP_Widget_ModDetails_C_BndEvt__LikeButton_K2Node_ComponentBoundEvent_4_OnClickWithContext__DelegateSignature_Params
	{
	public:
		class FString                                              ContextValue;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ContextIntValue;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__DislikeButton_K2Node_ComponentBoundEvent_5_OnClickWithContext__DelegateSignature
	 */
	struct UBP_Widget_ModDetails_C_BndEvt__DislikeButton_K2Node_ComponentBoundEvent_5_OnClickWithContext__DelegateSignature_Params
	{
	public:
		class FString                                              ContextValue;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ContextIntValue;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateImagesForRating
	 */
	struct UBP_Widget_ModDetails_C_UpdateImagesForRating_Params
	{
	public:
		int32_t                                                    Rating;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.RateMod
	 */
	struct UBP_Widget_ModDetails_C_RateMod_Params
	{
	public:
		int32_t                                                    Rating;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.OnSubscriptionsUpdated
	 */
	struct UBP_Widget_ModDetails_C_OnSubscriptionsUpdated_Params
	{
	public:
		TArray<struct FModObject>                                  Mods;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.UpdateCurrentRating
	 */
	struct UBP_Widget_ModDetails_C_UpdateCurrentRating_Params
	{	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.NavigateNextImage
	 */
	struct UBP_Widget_ModDetails_C_NavigateNextImage_Params
	{	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.NavigatePreviousImage
	 */
	struct UBP_Widget_ModDetails_C_NavigatePreviousImage_Params
	{	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__BackIcon_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature
	 */
	struct UBP_Widget_ModDetails_C_BndEvt__BackIcon_K2Node_ComponentBoundEvent_7_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.BndEvt__NextIcon_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature
	 */
	struct UBP_Widget_ModDetails_C_BndEvt__NextIcon_K2Node_ComponentBoundEvent_8_OnPressed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_Widget_ModDetails.BP_Widget_ModDetails_C.ExecuteUbergraph_BP_Widget_ModDetails
	 */
	struct UBP_Widget_ModDetails_C_ExecuteUbergraph_BP_Widget_ModDetails_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
