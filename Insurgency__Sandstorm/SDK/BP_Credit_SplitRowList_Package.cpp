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
	 * 		Name   -> Function BP_Credit_SplitRowList.BP_Credit_SplitRowList_C.PopulateTextFromList
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FString>                              Names                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	 */
	void UBP_Credit_SplitRowList_C::PopulateTextFromList(TArray<class FString>* Names)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Credit_SplitRowList.BP_Credit_SplitRowList_C.PopulateTextFromList");
		
		UBP_Credit_SplitRowList_C_PopulateTextFromList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Names != nullptr)
			*Names = params.Names;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Credit_SplitRowList.BP_Credit_SplitRowList_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Credit_SplitRowList_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Credit_SplitRowList.BP_Credit_SplitRowList_C.PreConstruct");
		
		UBP_Credit_SplitRowList_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_Credit_SplitRowList.BP_Credit_SplitRowList_C.ExecuteUbergraph_BP_Credit_SplitRowList
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_Credit_SplitRowList_C::ExecuteUbergraph_BP_Credit_SplitRowList(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Credit_SplitRowList.BP_Credit_SplitRowList_C.ExecuteUbergraph_BP_Credit_SplitRowList");
		
		UBP_Credit_SplitRowList_C_ExecuteUbergraph_BP_Credit_SplitRowList_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Credit_SplitRowList_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Credit_SplitRowList_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_Credit_SplitRowList.BP_Credit_SplitRowList_C");
		return ptr;
	}

}


