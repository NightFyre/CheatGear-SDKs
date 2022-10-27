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
	 * 		Name   -> Function CommandRing_Mortar.CommandRing_Mortar_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ACommandRing_Mortar_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandRing_Mortar.CommandRing_Mortar_C.UserConstructionScript");
		
		ACommandRing_Mortar_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function CommandRing_Mortar.CommandRing_Mortar_C.BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar
	 * 		Flags  -> (HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  HitResult                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ACommandRing_Mortar_C::BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar(const struct FHitResult& HitResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandRing_Mortar.CommandRing_Mortar_C.BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar");
		
		ACommandRing_Mortar_C_BndEvt__GbxTrajectometer_K2Node_ComponentBoundEvent_0_SimulationResultEvent__DelegateSignature_CommandRing_Mortar_Params params {};
		params.HitResult = HitResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function CommandRing_Mortar.CommandRing_Mortar_C.ExecuteUbergraph_CommandRing_Mortar
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ACommandRing_Mortar_C::ExecuteUbergraph_CommandRing_Mortar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CommandRing_Mortar.CommandRing_Mortar_C.ExecuteUbergraph_CommandRing_Mortar");
		
		ACommandRing_Mortar_C_ExecuteUbergraph_CommandRing_Mortar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACommandRing_Mortar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACommandRing_Mortar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CommandRing_Mortar.CommandRing_Mortar_C");
		return ptr;
	}

}


