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
	 * 		Name   -> Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.StartSeperationAnxietyNova
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     Loc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_DigiClone_C::StartSeperationAnxietyNova(const struct FVector& Loc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.StartSeperationAnxietyNova");
		
		UInterface_Operative_DigiClone_C_StartSeperationAnxietyNova_Params params {};
		params.Loc = Loc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.NotifyPanicButtonTriggered
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UInterface_Operative_DigiClone_C::NotifyPanicButtonTriggered()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.NotifyPanicButtonTriggered");
		
		UInterface_Operative_DigiClone_C_NotifyPanicButtonTriggered_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.GetDigiCloneReference
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Digiclone                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UInterface_Operative_DigiClone_C::GetDigiCloneReference(class AActor** Digiclone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.GetDigiCloneReference");
		
		UInterface_Operative_DigiClone_C_GetDigiCloneReference_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Digiclone != nullptr)
			*Digiclone = params.Digiclone;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.Is DigiClone Active
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               Return                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UInterface_Operative_DigiClone_C::Is_DigiClone_Active(bool* Return)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Interface_Operative_DigiClone.Interface_Operative_DigiClone_C.Is DigiClone Active");
		
		UInterface_Operative_DigiClone_C_Is_DigiClone_Active_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Return != nullptr)
			*Return = params.Return;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInterface_Operative_DigiClone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInterface_Operative_DigiClone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Interface_Operative_DigiClone.Interface_Operative_DigiClone_C");
		return ptr;
	}

}


