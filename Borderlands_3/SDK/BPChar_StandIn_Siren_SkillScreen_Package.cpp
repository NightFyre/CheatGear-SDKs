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
	 * 		Name   -> Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_StandIn_Siren_SkillScreen_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.UserConstructionScript");
		
		ABPChar_StandIn_Siren_SkillScreen_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.UnhideCharacterArms
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_StandIn_Siren_SkillScreen_C::UnhideCharacterArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.UnhideCharacterArms");
		
		ABPChar_StandIn_Siren_SkillScreen_C_UnhideCharacterArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.HideCharacterArms
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABPChar_StandIn_Siren_SkillScreen_C::HideCharacterArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.HideCharacterArms");
		
		ABPChar_StandIn_Siren_SkillScreen_C_HideCharacterArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.ExecuteUbergraph_BPChar_StandIn_Siren_SkillScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABPChar_StandIn_Siren_SkillScreen_C::ExecuteUbergraph_BPChar_StandIn_Siren_SkillScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C.ExecuteUbergraph_BPChar_StandIn_Siren_SkillScreen");
		
		ABPChar_StandIn_Siren_SkillScreen_C_ExecuteUbergraph_BPChar_StandIn_Siren_SkillScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABPChar_StandIn_Siren_SkillScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABPChar_StandIn_Siren_SkillScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_StandIn_Siren_SkillScreen.BPChar_StandIn_Siren_SkillScreen_C");
		return ptr;
	}

}


