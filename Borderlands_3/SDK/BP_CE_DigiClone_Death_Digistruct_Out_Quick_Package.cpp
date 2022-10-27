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
	 * 		Name   -> Function BP_CE_DigiClone_Death_Digistruct_Out_Quick.BP_CE_DigiClone_Death_Digistruct_Out_Quick_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_DigiClone_Death_Digistruct_Out_Quick_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_DigiClone_Death_Digistruct_Out_Quick.BP_CE_DigiClone_Death_Digistruct_Out_Quick_C.OnBegin");
		
		UBP_CE_DigiClone_Death_Digistruct_Out_Quick_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_DigiClone_Death_Digistruct_Out_Quick.BP_CE_DigiClone_Death_Digistruct_Out_Quick_C.OnServerEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_DigiClone_Death_Digistruct_Out_Quick_C::OnServerEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_DigiClone_Death_Digistruct_Out_Quick.BP_CE_DigiClone_Death_Digistruct_Out_Quick_C.OnServerEnd");
		
		UBP_CE_DigiClone_Death_Digistruct_Out_Quick_C_OnServerEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_CE_DigiClone_Death_Digistruct_Out_Quick.BP_CE_DigiClone_Death_Digistruct_Out_Quick_C.ExecuteUbergraph_BP_CE_DigiClone_Death_Digistruct_Out_Quick
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CE_DigiClone_Death_Digistruct_Out_Quick_C::ExecuteUbergraph_BP_CE_DigiClone_Death_Digistruct_Out_Quick(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CE_DigiClone_Death_Digistruct_Out_Quick.BP_CE_DigiClone_Death_Digistruct_Out_Quick_C.ExecuteUbergraph_BP_CE_DigiClone_Death_Digistruct_Out_Quick");
		
		UBP_CE_DigiClone_Death_Digistruct_Out_Quick_C_ExecuteUbergraph_BP_CE_DigiClone_Death_Digistruct_Out_Quick_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CE_DigiClone_Death_Digistruct_Out_Quick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CE_DigiClone_Death_Digistruct_Out_Quick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CE_DigiClone_Death_Digistruct_Out_Quick.BP_CE_DigiClone_Death_Digistruct_Out_Quick_C");
		return ptr;
	}

}


