/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetBrushWithImageTexture
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FSlateBrush                                 Brush                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UTexture2D*                                  Image                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FSlateBrush                                 UpdatedBrush                                               (Parm, OutParm)
	 */
	void UWBP_CreateGameSelectionListEntry_C::GetBrushWithImageTexture(struct FSlateBrush* Brush, class UTexture2D* Image, struct FSlateBrush* UpdatedBrush)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetBrushWithImageTexture");
		
		UWBP_CreateGameSelectionListEntry_C_GetBrushWithImageTexture_Params params {};
		params.Image = Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Brush != nullptr)
			*Brush = params.Brush;
		if (UpdatedBrush != nullptr)
			*UpdatedBrush = params.UpdatedBrush;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalRefreshDimensions
	 * 		Flags  -> (Private, BlueprintCallable, BlueprintEvent)
	 */
	void UWBP_CreateGameSelectionListEntry_C::InternalRefreshDimensions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalRefreshDimensions");
		
		UWBP_CreateGameSelectionListEntry_C_InternalRefreshDimensions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemMinHeight
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            MinHeight                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::GetItemMinHeight(int32_t* MinHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemMinHeight");
		
		UWBP_CreateGameSelectionListEntry_C_GetItemMinHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinHeight != nullptr)
			*MinHeight = params.MinHeight;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemMinWidth
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		int32_t                                            MinWidth                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::GetItemMinWidth(int32_t* MinWidth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemMinWidth");
		
		UWBP_CreateGameSelectionListEntry_C_GetItemMinWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MinWidth != nullptr)
			*MinWidth = params.MinWidth;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemMinDimensions
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            InMinWidth                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            InMinHeight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::SetItemMinDimensions(int32_t InMinWidth, int32_t InMinHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemMinDimensions");
		
		UWBP_CreateGameSelectionListEntry_C_SetItemMinDimensions_Params params {};
		params.InMinWidth = InMinWidth;
		params.InMinHeight = InMinHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSubText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UWBP_CreateGameSelectionListEntry_C::GetItemSubText(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSubText");
		
		UWBP_CreateGameSelectionListEntry_C_GetItemSubText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FText                                        Text                                                       (Parm, OutParm)
	 */
	void UWBP_CreateGameSelectionListEntry_C::GetItemText(class FText* Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemText");
		
		UWBP_CreateGameSelectionListEntry_C_GetItemText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Text != nullptr)
			*Text = params.Text;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSubText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CreateGameSelectionListEntry_C::SetItemSubText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSubText");
		
		UWBP_CreateGameSelectionListEntry_C_SetItemSubText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CreateGameSelectionListEntry_C::SetItemText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemText");
		
		UWBP_CreateGameSelectionListEntry_C_SetItemText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSubTextStyle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FFSelectionItemTextStyle                    TextStyle                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::GetItemSubTextStyle(struct FFSelectionItemTextStyle* TextStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSubTextStyle");
		
		UWBP_CreateGameSelectionListEntry_C_GetItemSubTextStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextStyle != nullptr)
			*TextStyle = params.TextStyle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemTextStyle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FFSelectionItemTextStyle                    TextStyle                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::GetItemTextStyle(struct FFSelectionItemTextStyle* TextStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemTextStyle");
		
		UWBP_CreateGameSelectionListEntry_C_GetItemTextStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextStyle != nullptr)
			*TextStyle = params.TextStyle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemStyle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		struct FCheckBoxStyle                              ItemStyle                                                  (Parm, OutParm)
	 */
	void UWBP_CreateGameSelectionListEntry_C::GetItemStyle(struct FCheckBoxStyle* ItemStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemStyle");
		
		UWBP_CreateGameSelectionListEntry_C_GetItemStyle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemStyle != nullptr)
			*ItemStyle = params.ItemStyle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemImage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  InItemImg                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::SetItemImage(class UTexture2D* InItemImg)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemImage");
		
		UWBP_CreateGameSelectionListEntry_C_SetItemImage_Params params {};
		params.InItemImg = InItemImg;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSubTextStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFSelectionItemTextStyle                    InItemSubTextStyle                                         (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::SetItemSubTextStyle(const struct FFSelectionItemTextStyle& InItemSubTextStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSubTextStyle");
		
		UWBP_CreateGameSelectionListEntry_C_SetItemSubTextStyle_Params params {};
		params.InItemSubTextStyle = InItemSubTextStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemTextStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFSelectionItemTextStyle                    InItemTextStyle                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::SetItemTextStyle(const struct FFSelectionItemTextStyle& InItemTextStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemTextStyle");
		
		UWBP_CreateGameSelectionListEntry_C_SetItemTextStyle_Params params {};
		params.InItemTextStyle = InItemTextStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemStyle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FCheckBoxStyle                              InItemStyle                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWBP_CreateGameSelectionListEntry_C::SetItemStyle(const struct FCheckBoxStyle& InItemStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemStyle");
		
		UWBP_CreateGameSelectionListEntry_C_SetItemStyle_Params params {};
		params.InItemStyle = InItemStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalUpdateItemBgTintColor
	 * 		Flags  -> (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CreateGameSelectionListEntry_C::InternalUpdateItemBgTintColor(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalUpdateItemBgTintColor");
		
		UWBP_CreateGameSelectionListEntry_C_InternalUpdateItemBgTintColor_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalApplyStyleToText
	 * 		Flags  -> (Private, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTextBlock*                                  Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FFSelectionItemTextStyle                    TextStyle                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::InternalApplyStyleToText(class UTextBlock* Text, struct FFSelectionItemTextStyle* TextStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.InternalApplyStyleToText");
		
		UWBP_CreateGameSelectionListEntry_C_InternalApplyStyleToText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (TextStyle != nullptr)
			*TextStyle = params.TextStyle;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.IsItemSelected
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CreateGameSelectionListEntry_C::IsItemSelected(bool* bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.IsItemSelected");
		
		UWBP_CreateGameSelectionListEntry_C_IsItemSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bSelected != nullptr)
			*bSelected = params.bSelected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSelectionState
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		ECheckBoxState                                     SelectionState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::GetItemSelectionState(ECheckBoxState* SelectionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.GetItemSelectionState");
		
		UWBP_CreateGameSelectionListEntry_C_GetItemSelectionState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (SelectionState != nullptr)
			*SelectionState = params.SelectionState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemIsSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CreateGameSelectionListEntry_C::SetItemIsSelected(bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemIsSelected");
		
		UWBP_CreateGameSelectionListEntry_C_SetItemIsSelected_Params params {};
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSelectionState
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ECheckBoxState                                     InSelectionState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::SetItemSelectionState(ECheckBoxState InSelectionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.SetItemSelectionState");
		
		UWBP_CreateGameSelectionListEntry_C_SetItemSelectionState_Params params {};
		params.InSelectionState = InSelectionState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CreateGameSelectionListEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.PreConstruct");
		
		UWBP_CreateGameSelectionListEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bIsChecked                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CreateGameSelectionListEntry_C::BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature");
		
		UWBP_CreateGameSelectionListEntry_C_BndEvt__ItemCheckBox_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature_Params params {};
		params.bIsChecked = bIsChecked;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.ExecuteUbergraph_WBP_CreateGameSelectionListEntry
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_CreateGameSelectionListEntry_C::ExecuteUbergraph_WBP_CreateGameSelectionListEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.ExecuteUbergraph_WBP_CreateGameSelectionListEntry");
		
		UWBP_CreateGameSelectionListEntry_C_ExecuteUbergraph_WBP_CreateGameSelectionListEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.OnSelectionStateChanged__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWBP_CreateGameSelectionListEntry_C*         Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelected                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_CreateGameSelectionListEntry_C::OnSelectionStateChanged__DelegateSignature(class UWBP_CreateGameSelectionListEntry_C* Item, bool bSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C.OnSelectionStateChanged__DelegateSignature");
		
		UWBP_CreateGameSelectionListEntry_C_OnSelectionStateChanged__DelegateSignature_Params params {};
		params.Item = Item;
		params.bSelected = bSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_CreateGameSelectionListEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_CreateGameSelectionListEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CreateGameSelectionListEntry.WBP_CreateGameSelectionListEntry_C");
		return ptr;
	}

}


