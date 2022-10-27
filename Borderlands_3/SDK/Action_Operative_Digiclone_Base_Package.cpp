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
	 * 		Name   -> Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.AN_ShowDevice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Operative_Digiclone_Base_C::AN_ShowDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.AN_ShowDevice");
		
		UAction_Operative_Digiclone_Base_C_AN_ShowDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.AN_HideDevice
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAction_Operative_Digiclone_Base_C::AN_HideDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.AN_HideDevice");
		
		UAction_Operative_Digiclone_Base_C_AN_HideDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.OnEnd
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		EGbxActionEndState                                 ActionEndState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_Digiclone_Base_C::OnEnd(EGbxActionEndState ActionEndState, class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.OnEnd");
		
		UAction_Operative_Digiclone_Base_C_OnEnd_Params params {};
		params.ActionEndState = ActionEndState;
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.OnBeginBringUpWeapon
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_Digiclone_Base_C::OnBeginBringUpWeapon(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.OnBeginBringUpWeapon");
		
		UAction_Operative_Digiclone_Base_C_OnBeginBringUpWeapon_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.ExecuteUbergraph_Action_Operative_Digiclone_Base
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAction_Operative_Digiclone_Base_C::ExecuteUbergraph_Action_Operative_Digiclone_Base(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C.ExecuteUbergraph_Action_Operative_Digiclone_Base");
		
		UAction_Operative_Digiclone_Base_C_ExecuteUbergraph_Action_Operative_Digiclone_Base_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAction_Operative_Digiclone_Base_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAction_Operative_Digiclone_Base_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Action_Operative_Digiclone_Base.Action_Operative_Digiclone_Base_C");
		return ptr;
	}

}


