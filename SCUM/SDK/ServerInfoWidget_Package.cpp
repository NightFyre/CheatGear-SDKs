/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.SetValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Valid                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UServerInfoWidget_C::SetValid(bool Valid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.SetValid");
		
		UServerInfoWidget_C_SetValid_Params params {};
		params.Valid = Valid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.Connect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      password                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UServerInfoWidget_C::Connect(const class FString& password)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Connect");
		
		UServerInfoWidget_C_Connect_Params params {};
		params.password = password;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.SetColor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerInfoWidget_C::SetColor(const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.SetColor");
		
		UServerInfoWidget_C_SetColor_Params params {};
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FServerInfo                                 ServerInfo                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UServerInfoWidget_C::UpdateFromServerInfo(const struct FServerInfo& ServerInfo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.UpdateFromServerInfo");
		
		UServerInfoWidget_C_UpdateFromServerInfo_Params params {};
		params.ServerInfo = ServerInfo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties
	 * 		Flags  -> ()
	 */
	void UServerInfoWidget_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnSynchronizeProperties");
		
		UServerInfoWidget_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerInfoWidget_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature");
		
		UServerInfoWidget_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UServerInfoWidget_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature");
		
		UServerInfoWidget_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.Construct
	 * 		Flags  -> ()
	 */
	void UServerInfoWidget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.Construct");
		
		UServerInfoWidget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerInfoWidget_C::ExecuteUbergraph_ServerInfoWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.ExecuteUbergraph_ServerInfoWidget");
		
		UServerInfoWidget_C_ExecuteUbergraph_ServerInfoWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FServerInfo                                 Info                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UServerInfoWidget_C::OnRemoved__DelegateSignature(const struct FServerInfo& Info)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnRemoved__DelegateSignature");
		
		UServerInfoWidget_C_OnRemoved__DelegateSignature_Params params {};
		params.Info = Info;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UServerInfoWidget_C*                         ServerInfoWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerInfoWidget_C::OnDoubleClicked__DelegateSignature(class UServerInfoWidget_C* ServerInfoWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnDoubleClicked__DelegateSignature");
		
		UServerInfoWidget_C_OnDoubleClicked__DelegateSignature_Params params {};
		params.ServerInfoWidget = ServerInfoWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UServerInfoWidget_C*                         ServerInfoWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UServerInfoWidget_C::OnClicked__DelegateSignature(class UServerInfoWidget_C* ServerInfoWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ServerInfoWidget.ServerInfoWidget_C.OnClicked__DelegateSignature");
		
		UServerInfoWidget_C_OnClicked__DelegateSignature_Params params {};
		params.ServerInfoWidget = ServerInfoWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UServerInfoWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UServerInfoWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ServerInfoWidget.ServerInfoWidget_C");
		return ptr;
	}

}


