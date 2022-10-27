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
	 * 		Name   -> Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UHeatComponent_Gunner_Minigun_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.ReceiveBeginPlay");
		
		UHeatComponent_Gunner_Minigun_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.OnStopOverheat
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHeatComponent_Gunner_Minigun_C::OnStopOverheat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.OnStopOverheat");
		
		UHeatComponent_Gunner_Minigun_C_OnStopOverheat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.OnStartOverheat
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UHeatComponent_Gunner_Minigun_C::OnStartOverheat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.OnStartOverheat");
		
		UHeatComponent_Gunner_Minigun_C_OnStartOverheat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.ExecuteUbergraph_HeatComponent_Gunner_Minigun
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UHeatComponent_Gunner_Minigun_C::ExecuteUbergraph_HeatComponent_Gunner_Minigun(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C.ExecuteUbergraph_HeatComponent_Gunner_Minigun");
		
		UHeatComponent_Gunner_Minigun_C_ExecuteUbergraph_HeatComponent_Gunner_Minigun_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHeatComponent_Gunner_Minigun_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHeatComponent_Gunner_Minigun_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HeatComponent_Gunner_Minigun.HeatComponent_Gunner_Minigun_C");
		return ptr;
	}

}


