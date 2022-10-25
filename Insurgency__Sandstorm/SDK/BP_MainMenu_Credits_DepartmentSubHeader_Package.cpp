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
	 * 		Name   -> Function BP_MainMenu_Credits_DepartmentSubHeader.BP_MainMenu_Credits_DepartmentSubHeader_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_MainMenu_Credits_DepartmentSubHeader_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Credits_DepartmentSubHeader.BP_MainMenu_Credits_DepartmentSubHeader_C.PreConstruct");
		
		UBP_MainMenu_Credits_DepartmentSubHeader_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_MainMenu_Credits_DepartmentSubHeader.BP_MainMenu_Credits_DepartmentSubHeader_C.ExecuteUbergraph_BP_MainMenu_Credits_DepartmentSubHeader
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MainMenu_Credits_DepartmentSubHeader_C::ExecuteUbergraph_BP_MainMenu_Credits_DepartmentSubHeader(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MainMenu_Credits_DepartmentSubHeader.BP_MainMenu_Credits_DepartmentSubHeader_C.ExecuteUbergraph_BP_MainMenu_Credits_DepartmentSubHeader");
		
		UBP_MainMenu_Credits_DepartmentSubHeader_C_ExecuteUbergraph_BP_MainMenu_Credits_DepartmentSubHeader_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MainMenu_Credits_DepartmentSubHeader_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MainMenu_Credits_DepartmentSubHeader_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_MainMenu_Credits_DepartmentSubHeader.BP_MainMenu_Credits_DepartmentSubHeader_C");
		return ptr;
	}

}


