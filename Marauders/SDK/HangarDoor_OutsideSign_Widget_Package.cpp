/**
 * Name: Marauders
 * Version: 642675-attempt2
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
	 * 		Name   -> Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.Construct
	 * 		Flags  -> ()
	 */
	void UHangarDoor_OutsideSign_Widget_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.Construct");
		
		UHangarDoor_OutsideSign_Widget_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UHangarDoor_OutsideSign_Widget_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.PreConstruct");
		
		UHangarDoor_OutsideSign_Widget_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.SetOutsideSignText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Text_BoldLine                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Text_RegularLine                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UHangarDoor_OutsideSign_Widget_C::SetOutsideSignText(const class FString& Text_BoldLine, const class FString& Text_RegularLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.SetOutsideSignText");
		
		UHangarDoor_OutsideSign_Widget_C_SetOutsideSignText_Params params {};
		params.Text_BoldLine = Text_BoldLine;
		params.Text_RegularLine = Text_RegularLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.SetTheText
	 * 		Flags  -> ()
	 */
	void UHangarDoor_OutsideSign_Widget_C::SetTheText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.SetTheText");
		
		UHangarDoor_OutsideSign_Widget_C_SetTheText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.ExecuteUbergraph_HangarDoor_OutsideSign_Widget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHangarDoor_OutsideSign_Widget_C::ExecuteUbergraph_HangarDoor_OutsideSign_Widget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C.ExecuteUbergraph_HangarDoor_OutsideSign_Widget");
		
		UHangarDoor_OutsideSign_Widget_C_ExecuteUbergraph_HangarDoor_OutsideSign_Widget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHangarDoor_OutsideSign_Widget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHangarDoor_OutsideSign_Widget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HangarDoor_OutsideSign_Widget.HangarDoor_OutsideSign_Widget_C");
		return ptr;
	}

}


