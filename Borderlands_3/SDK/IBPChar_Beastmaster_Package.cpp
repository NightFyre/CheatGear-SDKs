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
	 * 		Name   -> Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.TryForceSpawnPetAtLocation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bRes                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UIBPChar_Beastmaster_C::TryForceSpawnPetAtLocation(const struct FVector& Location, bool* bRes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.TryForceSpawnPetAtLocation");
		
		UIBPChar_Beastmaster_C_TryForceSpawnPetAtLocation_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bRes != nullptr)
			*bRes = params.bRes;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.SetNewPetThreatScale
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		float                                              NewScale                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Beastmaster_C::SetNewPetThreatScale(float NewScale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.SetNewPetThreatScale");
		
		UIBPChar_Beastmaster_C_SetNewPetThreatScale_Params params {};
		params.NewScale = NewScale;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.PlayPetAudioCallAndResponse
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		Enum_BeastmasterDialogAction                       DialogType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Beastmaster_C::PlayPetAudioCallAndResponse(Enum_BeastmasterDialogAction DialogType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.PlayPetAudioCallAndResponse");
		
		UIBPChar_Beastmaster_C_PlayPetAudioCallAndResponse_Params params {};
		params.DialogType = DialogType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.GetCurrentPet
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AOakCharacter*                               res                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UIBPChar_Beastmaster_C::GetCurrentPet(class AOakCharacter** res)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function IBPChar_Beastmaster.IBPChar_Beastmaster_C.GetCurrentPet");
		
		UIBPChar_Beastmaster_C_GetCurrentPet_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (res != nullptr)
			*res = params.res;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UIBPChar_Beastmaster_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UIBPChar_Beastmaster_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass IBPChar_Beastmaster.IBPChar_Beastmaster_C");
		return ptr;
	}

}


