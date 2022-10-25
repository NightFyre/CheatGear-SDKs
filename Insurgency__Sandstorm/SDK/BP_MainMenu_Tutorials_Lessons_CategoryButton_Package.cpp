/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_CategoryButton.BP_MainMenu_Tutorials_Lessons_CategoryButton_C.SetCategoryText
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_CategoryButton_C::SetCategoryText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_CategoryButton.BP_MainMenu_Tutorials_Lessons_CategoryButton_C.SetCategoryText");
		
		UBP_MainMenu_Tutorials_Lessons_CategoryButton_C_SetCategoryText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_CategoryButton.BP_MainMenu_Tutorials_Lessons_CategoryButton_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBP_MainMenu_Tutorials_Lessons_CategoryButton_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_CategoryButton.BP_MainMenu_Tutorials_Lessons_CategoryButton_C.Construct");
		
		UBP_MainMenu_Tutorials_Lessons_CategoryButton_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Tutorials_Lessons_CategoryButton.BP_MainMenu_Tutorials_Lessons_CategoryButton_C.ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons_CategoryButton
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Tutorials_Lessons_CategoryButton_C::ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons_CategoryButton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Tutorials_Lessons_CategoryButton.BP_MainMenu_Tutorials_Lessons_CategoryButton_C.ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons_CategoryButton");
		
		UBP_MainMenu_Tutorials_Lessons_CategoryButton_C_ExecuteUbergraph_BP_MainMenu_Tutorials_Lessons_CategoryButton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_Tutorials_Lessons_CategoryButton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_Tutorials_Lessons_CategoryButton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_Tutorials_Lessons_CategoryButton.BP_MainMenu_Tutorials_Lessons_CategoryButton_C");
		return ptr;
	}

}


