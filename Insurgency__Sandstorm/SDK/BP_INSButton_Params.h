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
	 * Function BP_INSButton.BP_INSButton_C.OnFocusReceived
	 */
	struct UBP_INSButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.SetButtonMaterial
	 */
	struct UBP_INSButton_C_SetButtonMaterial_Params
	{
	public:
		class UMaterialInterface*                                  NewMaterial;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.SetButtonImageInternal
	 */
	struct UBP_INSButton_C_SetButtonImageInternal_Params
	{
	public:
		class UObject*                                             NewImage;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bCheckImageColor;                                        // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.SetButtonImage
	 */
	struct UBP_INSButton_C_SetButtonImage_Params
	{
	public:
		class UTexture2D*                                          NewTexture;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.SetText
	 */
	struct UBP_INSButton_C_SetText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.UpdateElementVisibility
	 */
	struct UBP_INSButton_C_UpdateElementVisibility_Params
	{	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.SetSelected
	 */
	struct UBP_INSButton_C_SetSelected_Params
	{
	public:
		bool                                                       bNewSelected;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       bCallEvents;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.UpdateColors
	 */
	struct UBP_INSButton_C_UpdateColors_Params
	{	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.SetTextInternal
	 */
	struct UBP_INSButton_C_SetTextInternal_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.SetTextShadowAlpha
	 */
	struct UBP_INSButton_C_SetTextShadowAlpha_Params
	{
	public:
		float                                                      Alpha;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.GetBorderColor
	 */
	struct UBP_INSButton_C_GetBorderColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.GetBackgroundColor
	 */
	struct UBP_INSButton_C_GetBackgroundColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.GetTextColor
	 */
	struct UBP_INSButton_C_GetTextColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0028)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.PreConstruct
	 */
	struct UBP_INSButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBP_INSButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature
	 */
	struct UBP_INSButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature
	 */
	struct UBP_INSButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_24_OnButtonReleasedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_INSButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_33_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.BndEvt__Btn_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBP_INSButton_C_BndEvt__Btn_K2Node_ComponentBoundEvent_40_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.OnAddedToFocusPath
	 */
	struct UBP_INSButton_C_OnAddedToFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.OnRemovedFromFocusPath
	 */
	struct UBP_INSButton_C_OnRemovedFromFocusPath_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.SimulatePress
	 */
	struct UBP_INSButton_C_SimulatePress_Params
	{	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.ExecuteUbergraph_BP_INSButton
	 */
	struct UBP_INSButton_C_ExecuteUbergraph_BP_INSButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.OnClickWithContext__DelegateSignature
	 */
	struct UBP_INSButton_C_OnClickWithContext__DelegateSignature_Params
	{
	public:
		class FString                                              ContextValue;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    ContextIntValue;                                         // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bSelected;                                               // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.OnUnHover__DelegateSignature
	 */
	struct UBP_INSButton_C_OnUnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.OnHover__DelegateSignature
	 */
	struct UBP_INSButton_C_OnHover__DelegateSignature_Params
	{	};

	/**
	 * Function BP_INSButton.BP_INSButton_C.OnClick__DelegateSignature
	 */
	struct UBP_INSButton_C_OnClick__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
