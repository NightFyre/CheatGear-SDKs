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
	 * 		Name   -> Function UI_SquadEmblem.UI_SquadEmblem_C.GetEmblemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConZSquadEmblem                            Data                                                       (Parm, OutParm, NoDestructor)
	 */
	void UUI_SquadEmblem_C::GetEmblemData(struct FConZSquadEmblem* Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.GetEmblemData");
		
		UUI_SquadEmblem_C_GetEmblemData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Data != nullptr)
			*Data = params.Data;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEmblem.UI_SquadEmblem_C.SetEmblemData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FConZSquadEmblem                            Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_SquadEmblem_C::SetEmblemData(const struct FConZSquadEmblem& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.SetEmblemData");
		
		UUI_SquadEmblem_C_SetEmblemData_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEmblem.UI_SquadEmblem_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_SquadEmblem_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.PreConstruct");
		
		UUI_SquadEmblem_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadEmblem.UI_SquadEmblem_C.ExecuteUbergraph_UI_SquadEmblem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_SquadEmblem_C::ExecuteUbergraph_UI_SquadEmblem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadEmblem.UI_SquadEmblem_C.ExecuteUbergraph_UI_SquadEmblem");
		
		UUI_SquadEmblem_C_ExecuteUbergraph_UI_SquadEmblem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SquadEmblem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SquadEmblem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SquadEmblem.UI_SquadEmblem_C");
		return ptr;
	}

}


