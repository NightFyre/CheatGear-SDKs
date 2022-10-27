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
	 * 		Name   -> Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ContinueOrNewCharacterDialog_C::BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature");
		
		UUI_ContinueOrNewCharacterDialog_C_BndEvt__YesButton_K2Node_ComponentBoundEvent_19_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_ContinueOrNewCharacterDialog_C::BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature");
		
		UUI_ContinueOrNewCharacterDialog_C_BndEvt__NewCharacterButton_K2Node_ComponentBoundEvent_26_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Init
	 * 		Flags  -> ()
	 */
	void UUI_ContinueOrNewCharacterDialog_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Init");
		
		UUI_ContinueOrNewCharacterDialog_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.ExecuteUbergraph_UI_ContinueOrNewCharacterDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_ContinueOrNewCharacterDialog_C::ExecuteUbergraph_UI_ContinueOrNewCharacterDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.ExecuteUbergraph_UI_ContinueOrNewCharacterDialog");
		
		UUI_ContinueOrNewCharacterDialog_C_ExecuteUbergraph_UI_ContinueOrNewCharacterDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.New__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Ip                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            GameplayPort                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ResponsePort                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AuthToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_ContinueOrNewCharacterDialog_C::New__DelegateSignature(const class FString& Ip, int32_t GameplayPort, int32_t ResponsePort, const class FString& AuthToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.New__DelegateSignature");
		
		UUI_ContinueOrNewCharacterDialog_C_New__DelegateSignature_Params params {};
		params.Ip = Ip;
		params.GameplayPort = GameplayPort;
		params.ResponsePort = ResponsePort;
		params.AuthToken = AuthToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Continue__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Ip                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            GameplayPort                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ResponsePort                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AuthToken                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UUI_ContinueOrNewCharacterDialog_C::Continue__DelegateSignature(const class FString& Ip, int32_t GameplayPort, int32_t ResponsePort, const class FString& AuthToken)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C.Continue__DelegateSignature");
		
		UUI_ContinueOrNewCharacterDialog_C_Continue__DelegateSignature_Params params {};
		params.Ip = Ip;
		params.GameplayPort = GameplayPort;
		params.ResponsePort = ResponsePort;
		params.AuthToken = AuthToken;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_ContinueOrNewCharacterDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_ContinueOrNewCharacterDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_ContinueOrNewCharacterDialog.UI_ContinueOrNewCharacterDialog_C");
		return ptr;
	}

}


