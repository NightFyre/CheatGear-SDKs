/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPI_HDWeaponAnimSet.BPI_HDWeaponAnimSet_C.ShouldUseMirroredLowerBodyLoco
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		bool                                               bOutUseMirrored                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPI_HDWeaponAnimSet_C::ShouldUseMirroredLowerBodyLoco(bool* bOutUseMirrored)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HDWeaponAnimSet.BPI_HDWeaponAnimSet_C.ShouldUseMirroredLowerBodyLoco");
		
		UBPI_HDWeaponAnimSet_C_ShouldUseMirroredLowerBodyLoco_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bOutUseMirrored != nullptr)
			*bOutUseMirrored = params.bOutUseMirrored;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPI_HDWeaponAnimSet.BPI_HDWeaponAnimSet_C.GetLocoTPPAnimSet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TMap<class FName, class UAnimSequenceBase*>        OutAnimSet                                                 (Parm, OutParm)
	 */
	void UBPI_HDWeaponAnimSet_C::GetLocoTPPAnimSet(TMap<class FName, class UAnimSequenceBase*>* OutAnimSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HDWeaponAnimSet.BPI_HDWeaponAnimSet_C.GetLocoTPPAnimSet");
		
		UBPI_HDWeaponAnimSet_C_GetLocoTPPAnimSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAnimSet != nullptr)
			*OutAnimSet = params.OutAnimSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function BPI_HDWeaponAnimSet.BPI_HDWeaponAnimSet_C.GetLocoAnimSet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		TMap<class FName, class UAnimSequenceBase*>        OutAnimSet                                                 (Parm, OutParm)
	 */
	void UBPI_HDWeaponAnimSet_C::GetLocoAnimSet(TMap<class FName, class UAnimSequenceBase*>* OutAnimSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HDWeaponAnimSet.BPI_HDWeaponAnimSet_C.GetLocoAnimSet");
		
		UBPI_HDWeaponAnimSet_C_GetLocoAnimSet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutAnimSet != nullptr)
			*OutAnimSet = params.OutAnimSet;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_HDWeaponAnimSet_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_HDWeaponAnimSet_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_HDWeaponAnimSet.BPI_HDWeaponAnimSet_C");
		return ptr;
	}

}


