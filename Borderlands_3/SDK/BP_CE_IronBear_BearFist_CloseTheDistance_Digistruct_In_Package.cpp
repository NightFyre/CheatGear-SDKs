/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In.BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In.BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_C.OnBegin");
		
		UBP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In.BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_C.ExecuteUbergraph_BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_C::ExecuteUbergraph_BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In.BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_C.ExecuteUbergraph_BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In");
		
		UBP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_C_ExecuteUbergraph_BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In.BP_CE_IronBear_BearFist_CloseTheDistance_Digistruct_In_C");
		return ptr;
	}

}


