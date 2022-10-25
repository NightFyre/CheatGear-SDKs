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
	 * 		Name   -> Function UI_KeyBinding.UI_KeyBinding_C.Unbind Key
	 * 		Flags  -> ()
	 */
	void UUI_KeyBinding_C::Unbind_Key()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.Unbind Key");
		
		UUI_KeyBinding_C_Unbind_Key_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyBinding.UI_KeyBinding_C.BindKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUI_KeyBinding_C::BindKey(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.BindKey");
		
		UUI_KeyBinding_C_BindKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyBinding.UI_KeyBinding_C.OnMouseButtonDown_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UUI_KeyBinding_C::OnMouseButtonDown_1(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnMouseButtonDown_1");
		
		UUI_KeyBinding_C_OnMouseButtonDown_1_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyBinding.UI_KeyBinding_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		bool                                               Shift                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               ctrl                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Alt                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_KeyBinding_C::Init(const struct FKey& Key, bool Shift, bool ctrl, bool Alt)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.Init");
		
		UUI_KeyBinding_C_Init_Params params {};
		params.Key = Key;
		params.Shift = Shift;
		params.ctrl = ctrl;
		params.Alt = Alt;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyBinding.UI_KeyBinding_C.OnSynchronizeProperties
	 * 		Flags  -> ()
	 */
	void UUI_KeyBinding_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnSynchronizeProperties");
		
		UUI_KeyBinding_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyBinding.UI_KeyBinding_C.OnDeselected
	 * 		Flags  -> ()
	 */
	void UUI_KeyBinding_C::OnDeselected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnDeselected");
		
		UUI_KeyBinding_C_OnDeselected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyBinding_C::ExecuteUbergraph_UI_KeyBinding(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.ExecuteUbergraph_UI_KeyBinding");
		
		UUI_KeyBinding_C_ExecuteUbergraph_UI_KeyBinding_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyBinding.UI_KeyBinding_C.OnRebindInitiated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_KeyBinding_C*                            keyBindingWidget                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyBinding_C::OnRebindInitiated__DelegateSignature(class UUI_KeyBinding_C* keyBindingWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.OnRebindInitiated__DelegateSignature");
		
		UUI_KeyBinding_C_OnRebindInitiated__DelegateSignature_Params params {};
		params.keyBindingWidget = keyBindingWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_KeyBinding.UI_KeyBinding_C.KeyPressed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ActionName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FKey                                        actionKey                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 * 		float                                              Scale                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_KeyBinding_C::KeyPressed__DelegateSignature(const class FName& ActionName, const struct FKey& actionKey, float Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_KeyBinding.UI_KeyBinding_C.KeyPressed__DelegateSignature");
		
		UUI_KeyBinding_C_KeyPressed__DelegateSignature_Params params {};
		params.ActionName = ActionName;
		params.actionKey = actionKey;
		params.Scale = Scale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_KeyBinding_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_KeyBinding_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_KeyBinding.UI_KeyBinding_C");
		return ptr;
	}

}


