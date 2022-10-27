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
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_Mod3_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.UserConstructionScript");
		
		AIO_Beastmaster_AntiGravityTrap_Mod3_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.SetTrapEndCondition
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AIO_Beastmaster_AntiGravityTrap_Mod3_C::SetTrapEndCondition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.SetTrapEndCondition");
		
		AIO_Beastmaster_AntiGravityTrap_Mod3_C_SetTrapEndCondition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Mod3
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AIO_Beastmaster_AntiGravityTrap_Mod3_C::ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Mod3(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C.ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Mod3");
		
		AIO_Beastmaster_AntiGravityTrap_Mod3_C_ExecuteUbergraph_IO_Beastmaster_AntiGravityTrap_Mod3_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AIO_Beastmaster_AntiGravityTrap_Mod3_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AIO_Beastmaster_AntiGravityTrap_Mod3_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IO_Beastmaster_AntiGravityTrap_Mod3.IO_Beastmaster_AntiGravityTrap_Mod3_C");
		return ptr;
	}

}


