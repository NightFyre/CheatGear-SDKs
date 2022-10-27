/**
 * Name: Ground_Branch
 * Version: 1032
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
	 * 		Name   -> Function BP_Grenade_Master.BP_Grenade_Master_C.UseMainHandPressed
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Master_C::UseMainHandPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Master.BP_Grenade_Master_C.UseMainHandPressed");
		
		ABP_Grenade_Master_C_UseMainHandPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Master.BP_Grenade_Master_C.UseMainHandReleased
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Master_C::UseMainHandReleased()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Master.BP_Grenade_Master_C.UseMainHandReleased");
		
		ABP_Grenade_Master_C_UseMainHandReleased_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Master.BP_Grenade_Master_C.ReloadPressed
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Master_C::ReloadPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Master.BP_Grenade_Master_C.ReloadPressed");
		
		ABP_Grenade_Master_C_ReloadPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Master.BP_Grenade_Master_C.RemoveGrenadeArc
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Master_C::RemoveGrenadeArc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Master.BP_Grenade_Master_C.RemoveGrenadeArc");
		
		ABP_Grenade_Master_C_RemoveGrenadeArc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Master.BP_Grenade_Master_C.CreateGrenadeArc
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Master_C::CreateGrenadeArc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Master.BP_Grenade_Master_C.CreateGrenadeArc");
		
		ABP_Grenade_Master_C_CreateGrenadeArc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Master.BP_Grenade_Master_C.ShowReinsertPinHint
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Master_C::ShowReinsertPinHint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Master.BP_Grenade_Master_C.ShowReinsertPinHint");
		
		ABP_Grenade_Master_C_ShowReinsertPinHint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Master.BP_Grenade_Master_C.OnSpeedChangedEvent
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Master_C::OnSpeedChangedEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Master.BP_Grenade_Master_C.OnSpeedChangedEvent");
		
		ABP_Grenade_Master_C_OnSpeedChangedEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Master.BP_Grenade_Master_C.OnBeingUnequipped
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Master_C::OnBeingUnequipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Master.BP_Grenade_Master_C.OnBeingUnequipped");
		
		ABP_Grenade_Master_C_OnBeingUnequipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Master.BP_Grenade_Master_C.OnBeingEquipped
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Master_C::OnBeingEquipped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Master.BP_Grenade_Master_C.OnBeingEquipped");
		
		ABP_Grenade_Master_C_OnBeingEquipped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Master.BP_Grenade_Master_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Grenade_Master_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Master.BP_Grenade_Master_C.ReceiveBeginPlay");
		
		ABP_Grenade_Master_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Grenade_Master.BP_Grenade_Master_C.ExecuteUbergraph_BP_Grenade_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Grenade_Master_C::ExecuteUbergraph_BP_Grenade_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Grenade_Master.BP_Grenade_Master_C.ExecuteUbergraph_BP_Grenade_Master");
		
		ABP_Grenade_Master_C_ExecuteUbergraph_BP_Grenade_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Grenade_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Grenade_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Grenade_Master.BP_Grenade_Master_C");
		return ptr;
	}

}


