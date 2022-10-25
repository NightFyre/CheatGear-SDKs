/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.On Get User Menu Content 0
	 * 		Flags  -> ()
	 */
	class UUserWidget* UWBP_QuickPlayerAdmin_C::On_Get_User_Menu_Content()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.On Get User Menu Content 0");
		
		UWBP_QuickPlayerAdmin_C_On_Get_User_Menu_Content_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.GetToolTipWidget_1
	 * 		Flags  -> ()
	 */
	class UWidget* UWBP_QuickPlayerAdmin_C::GetToolTipWidget_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.GetToolTipWidget_1");
		
		UWBP_QuickPlayerAdmin_C_GetToolTipWidget_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnGetMenuContent_1
	 * 		Flags  -> ()
	 */
	void UWBP_QuickPlayerAdmin_C::OnGetMenuContent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnGetMenuContent_1");
		
		UWBP_QuickPlayerAdmin_C_OnGetMenuContent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_QuickPlayerAdmin_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.Construct");
		
		UWBP_QuickPlayerAdmin_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UWBP_QuickPlayerAdmin_C::BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature");
		
		UWBP_QuickPlayerAdmin_C_BndEvt__Button_Combo_K2Node_ComponentBoundEvent_584_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.SetupContent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_ComboBox_Content_C*                     MenuDropdownContent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuickPlayerAdmin_C::SetupContent(class UWBP_ComboBox_Content_C* MenuDropdownContent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.SetupContent");
		
		UWBP_QuickPlayerAdmin_C_SetupContent_Params params {};
		params.MenuDropdownContent = MenuDropdownContent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnIndexChanged_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuickPlayerAdmin_C::OnIndexChanged_Event(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnIndexChanged_Event");
		
		UWBP_QuickPlayerAdmin_C_OnIndexChanged_Event_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsOpen                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWBP_QuickPlayerAdmin_C::BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");
		
		UWBP_QuickPlayerAdmin_C_BndEvt__MenuAnchor_Content_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params params {};
		params.bIsOpen = bIsOpen;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnBanReason_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_QuickPlayerAdmin_C::OnBanReason_Event(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnBanReason_Event");
		
		UWBP_QuickPlayerAdmin_C_OnBanReason_Event_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnBanDuration_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_QuickPlayerAdmin_C::OnBanDuration_Event(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnBanDuration_Event");
		
		UWBP_QuickPlayerAdmin_C_OnBanDuration_Event_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BanPlayer
	 * 		Flags  -> ()
	 */
	void UWBP_QuickPlayerAdmin_C::BanPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.BanPlayer");
		
		UWBP_QuickPlayerAdmin_C_BanPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.KickPlayer
	 * 		Flags  -> ()
	 */
	void UWBP_QuickPlayerAdmin_C::KickPlayer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.KickPlayer");
		
		UWBP_QuickPlayerAdmin_C_KickPlayer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnKickReason_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Filename                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWBP_QuickPlayerAdmin_C::OnKickReason_Event(const class FString& Filename)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnKickReason_Event");
		
		UWBP_QuickPlayerAdmin_C_OnKickReason_Event_Params params {};
		params.Filename = Filename;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnNoKickReason_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UWBP_DialogueBox_C*                          Dialogue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuickPlayerAdmin_C::OnNoKickReason_Event(class UWBP_DialogueBox_C* Dialogue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.OnNoKickReason_Event");
		
		UWBP_QuickPlayerAdmin_C_OnNoKickReason_Event_Params params {};
		params.Dialogue = Dialogue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.ExecuteUbergraph_WBP_QuickPlayerAdmin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_QuickPlayerAdmin_C::ExecuteUbergraph_WBP_QuickPlayerAdmin(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C.ExecuteUbergraph_WBP_QuickPlayerAdmin");
		
		UWBP_QuickPlayerAdmin_C_ExecuteUbergraph_WBP_QuickPlayerAdmin_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_QuickPlayerAdmin_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_QuickPlayerAdmin_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuickPlayerAdmin.WBP_QuickPlayerAdmin_C");
		return ptr;
	}

}


