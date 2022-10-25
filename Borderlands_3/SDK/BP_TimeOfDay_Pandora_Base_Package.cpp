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
	 * 		Name   -> Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.GetWorldPhaseLockStart
	 * 		Flags  -> (Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     World_Location                                             (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDay_Pandora_Base_C::GetWorldPhaseLockStart(struct FVector* World_Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.GetWorldPhaseLockStart");
		
		ABP_TimeOfDay_Pandora_Base_C_GetWorldPhaseLockStart_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (World_Location != nullptr)
			*World_Location = params.World_Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.Enable_Phase_Lock
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Enabled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_TimeOfDay_Pandora_Base_C::Enable_Phase_Lock(bool Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.Enable_Phase_Lock");
		
		ABP_TimeOfDay_Pandora_Base_C_Enable_Phase_Lock_Params params {};
		params.Enabled = Enabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.SetMoonState
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_IO_EridiumVortex                              MoonState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDay_Pandora_Base_C::SetMoonState(Enum_IO_EridiumVortex MoonState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.SetMoonState");
		
		ABP_TimeOfDay_Pandora_Base_C_SetMoonState_Params params {};
		params.MoonState = MoonState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TimeOfDay_Pandora_Base_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.UserConstructionScript");
		
		ABP_TimeOfDay_Pandora_Base_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.PostVortexMoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TimeOfDay_Pandora_Base_C::PostVortexMoon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.PostVortexMoon");
		
		ABP_TimeOfDay_Pandora_Base_C_PostVortexMoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.FireHawkMoon
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_TimeOfDay_Pandora_Base_C::FireHawkMoon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.FireHawkMoon");
		
		ABP_TimeOfDay_Pandora_Base_C_FireHawkMoon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.ExecuteUbergraph_BP_TimeOfDay_Pandora_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_TimeOfDay_Pandora_Base_C::ExecuteUbergraph_BP_TimeOfDay_Pandora_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C.ExecuteUbergraph_BP_TimeOfDay_Pandora_Base");
		
		ABP_TimeOfDay_Pandora_Base_C_ExecuteUbergraph_BP_TimeOfDay_Pandora_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_TimeOfDay_Pandora_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_TimeOfDay_Pandora_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_TimeOfDay_Pandora_Base.BP_TimeOfDay_Pandora_Base_C");
		return ptr;
	}

}


