/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x041FB350
	 * 		Name   -> Function LostSands.LostSandsRowboatGunpowderBarrel.IsFuseEnabled
	 * 		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
	 */
	bool ALostSandsRowboatGunpowderBarrel::IsFuseEnabled()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostSands.LostSandsRowboatGunpowderBarrel.IsFuseEnabled");
		
		ALostSandsRowboatGunpowderBarrel_IsFuseEnabled_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041FB2B0
	 * 		Name   -> Function LostSands.LostSandsRowboatGunpowderBarrel.IsExplosionAtGoldenSandsOutpost
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
	 * Parameters:
	 * 		struct FVector                                     InLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	 */
	bool ALostSandsRowboatGunpowderBarrel::IsExplosionAtGoldenSandsOutpost(const struct FVector& InLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostSands.LostSandsRowboatGunpowderBarrel.IsExplosionAtGoldenSandsOutpost");
		
		ALostSandsRowboatGunpowderBarrel_IsExplosionAtGoldenSandsOutpost_Params params {};
		params.InLocation = InLocation;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041FB290
	 * 		Name   -> Function LostSands.LostSandsRowboatGunpowderBarrel.EnableFuse
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 */
	void ALostSandsRowboatGunpowderBarrel::EnableFuse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostSands.LostSandsRowboatGunpowderBarrel.EnableFuse");
		
		ALostSandsRowboatGunpowderBarrel_EnableFuse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x041FB270
	 * 		Name   -> Function LostSands.LostSandsRowboatGunpowderBarrel.DisableFuse
	 * 		Flags  -> (Final, RequiredAPI, Native, Public, BlueprintCallable)
	 */
	void ALostSandsRowboatGunpowderBarrel::DisableFuse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function LostSands.LostSandsRowboatGunpowderBarrel.DisableFuse");
		
		ALostSandsRowboatGunpowderBarrel_DisableFuse_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALostSandsRowboatGunpowderBarrel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALostSandsRowboatGunpowderBarrel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class LostSands.LostSandsRowboatGunpowderBarrel");
		return ptr;
	}

}


