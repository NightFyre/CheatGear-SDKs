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
	 * 		Name   -> Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnSynchronizeProperties
	 * 		Flags  -> ()
	 */
	void UUI_SpawnChoiceWidget_C::OnSynchronizeProperties()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnSynchronizeProperties");
		
		UUI_SpawnChoiceWidget_C_OnSynchronizeProperties_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.ExecuteUbergraph_UI_SpawnChoiceWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SpawnChoiceWidget_C::ExecuteUbergraph_UI_SpawnChoiceWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.ExecuteUbergraph_UI_SpawnChoiceWidget");
		
		UUI_SpawnChoiceWidget_C_ExecuteUbergraph_UI_SpawnChoiceWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUI_SpawnChoiceWidget_C*                     _this_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SpawnChoiceWidget_C::OnClicked__DelegateSignature(class UUI_SpawnChoiceWidget_C* _this_)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C.OnClicked__DelegateSignature");
		
		UUI_SpawnChoiceWidget_C_OnClicked__DelegateSignature_Params params {};
		params._this_ = _this_;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SpawnChoiceWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SpawnChoiceWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SpawnChoiceWidget.UI_SpawnChoiceWidget_C");
		return ptr;
	}

}


