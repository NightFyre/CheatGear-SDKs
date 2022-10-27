/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.CanAddAttachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWeaponAttachment*                           attachment                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_Weapon_BlackHawk_Crossbow_C::CanAddAttachment(class AWeaponAttachment* attachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.CanAddAttachment");
		
		ABP_Weapon_BlackHawk_Crossbow_C_CanAddAttachment_Params params {};
		params.attachment = attachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.OnAttachmentAdded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWeaponAttachment*                           attachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_BlackHawk_Crossbow_C::OnAttachmentAdded(class AWeaponAttachment* attachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.OnAttachmentAdded");
		
		ABP_Weapon_BlackHawk_Crossbow_C_OnAttachmentAdded_Params params {};
		params.attachment = attachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.OnAttachmentRemoved
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWeaponAttachment*                           attachment                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_BlackHawk_Crossbow_C::OnAttachmentRemoved(class AWeaponAttachment* attachment)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.OnAttachmentRemoved");
		
		ABP_Weapon_BlackHawk_Crossbow_C_OnAttachmentRemoved_Params params {};
		params.attachment = attachment;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.ExecuteUbergraph_BP_Weapon_BlackHawk_Crossbow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Weapon_BlackHawk_Crossbow_C::ExecuteUbergraph_BP_Weapon_BlackHawk_Crossbow(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C.ExecuteUbergraph_BP_Weapon_BlackHawk_Crossbow");
		
		ABP_Weapon_BlackHawk_Crossbow_C_ExecuteUbergraph_BP_Weapon_BlackHawk_Crossbow_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Weapon_BlackHawk_Crossbow_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Weapon_BlackHawk_Crossbow_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Weapon_BlackHawk_Crossbow.BP_Weapon_BlackHawk_Crossbow_C");
		return ptr;
	}

}


