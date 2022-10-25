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
	 * 		Name   -> PredefinedFunction URamaMeleeCore.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URamaMeleeCore::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RamaMeleePlugin.RamaMeleeCore");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RamaMeleePlugin.RamaMeleeWeapon.UpdateSwingPoseBodies
	 * 		Flags  -> ()
	 */
	void URamaMeleeWeapon::UpdateSwingPoseBodies()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaMeleePlugin.RamaMeleeWeapon.UpdateSwingPoseBodies");
		
		URamaMeleeWeapon_UpdateSwingPoseBodies_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RamaMeleePlugin.RamaMeleeWeapon.StopSwingDamage
	 * 		Flags  -> ()
	 */
	void URamaMeleeWeapon::StopSwingDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaMeleePlugin.RamaMeleeWeapon.StopSwingDamage");
		
		URamaMeleeWeapon_StopSwingDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RamaMeleePlugin.RamaMeleeWeapon.StartSwingDamage
	 * 		Flags  -> ()
	 */
	void URamaMeleeWeapon::StartSwingDamage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaMeleePlugin.RamaMeleeWeapon.StartSwingDamage");
		
		URamaMeleeWeapon_StartSwingDamage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function RamaMeleePlugin.RamaMeleeWeapon.MeleeSweep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          BodyPreviousPose                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool URamaMeleeWeapon::MeleeSweep(struct FHitResult* Hit, TArray<struct FTransform> BodyPreviousPose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function RamaMeleePlugin.RamaMeleeWeapon.MeleeSweep");
		
		URamaMeleeWeapon_MeleeSweep_Params params {};
		params.BodyPreviousPose = BodyPreviousPose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit != nullptr)
			*Hit = params.Hit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URamaMeleeWeapon.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URamaMeleeWeapon::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class RamaMeleePlugin.RamaMeleeWeapon");
		return ptr;
	}

}


