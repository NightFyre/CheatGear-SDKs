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
	 * 		Name   -> Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeOutArms
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UActionParent_Siren_SkillArms_C::AnimNotify_FadeOutArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeOutArms");
		
		UActionParent_Siren_SkillArms_C_AnimNotify_FadeOutArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeInArms
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UActionParent_Siren_SkillArms_C::AnimNotify_FadeInArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.AnimNotify_FadeInArms");
		
		UActionParent_Siren_SkillArms_C_AnimNotify_FadeInArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.OnBegin
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionParent_Siren_SkillArms_C::OnBegin(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.OnBegin");
		
		UActionParent_Siren_SkillArms_C_OnBegin_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.ExecuteUbergraph_ActionParent_Siren_SkillArms
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UActionParent_Siren_SkillArms_C::ExecuteUbergraph_ActionParent_Siren_SkillArms(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C.ExecuteUbergraph_ActionParent_Siren_SkillArms");
		
		UActionParent_Siren_SkillArms_C_ExecuteUbergraph_ActionParent_Siren_SkillArms_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UActionParent_Siren_SkillArms_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UActionParent_Siren_SkillArms_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ActionParent_Siren_SkillArms.ActionParent_Siren_SkillArms_C");
		return ptr;
	}

}


