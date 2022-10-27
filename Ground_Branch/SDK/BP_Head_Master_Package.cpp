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
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.GetHiddenComponents
	 * 		Flags  -> ()
	 */
	TArray<class UPrimitiveComponent*> ABP_Head_Master_C::GetHiddenComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.GetHiddenComponents");
		
		ABP_Head_Master_C_GetHiddenComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.OnLoaded_9CBCE6A14A8702E4485FDFB6CF77D520
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_Head_Master_C::OnLoaded_9CBCE6A14A8702E4485FDFB6CF77D520(class UClass* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.OnLoaded_9CBCE6A14A8702E4485FDFB6CF77D520");
		
		ABP_Head_Master_C_OnLoaded_9CBCE6A14A8702E4485FDFB6CF77D520_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.SetOpacityMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTexture2D*                                  NewOpacityMask                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Head_Master_C::SetOpacityMask(class UTexture2D* NewOpacityMask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.SetOpacityMask");
		
		ABP_Head_Master_C_SetOpacityMask_Params params {};
		params.NewOpacityMask = NewOpacityMask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.UpdateSkin
	 * 		Flags  -> ()
	 */
	void ABP_Head_Master_C::UpdateSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.UpdateSkin");
		
		ABP_Head_Master_C_UpdateSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.OnAddedToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                NewParentCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Head_Master_C::OnAddedToCharacter(class AGBCharacter* NewParentCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.OnAddedToCharacter");
		
		ABP_Head_Master_C_OnAddedToCharacter_Params params {};
		params.NewParentCharacter = NewParentCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.OnRemovedFromCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                OldParentCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        OldSocketName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Head_Master_C::OnRemovedFromCharacter(class AGBCharacter* OldParentCharacter, const class FName& OldSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.OnRemovedFromCharacter");
		
		ABP_Head_Master_C_OnRemovedFromCharacter_Params params {};
		params.OldParentCharacter = OldParentCharacter;
		params.OldSocketName = OldSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.InventoryModifiersUpdated
	 * 		Flags  -> ()
	 */
	void ABP_Head_Master_C::InventoryModifiersUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.InventoryModifiersUpdated");
		
		ABP_Head_Master_C_InventoryModifiersUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.CreateArms
	 * 		Flags  -> ()
	 */
	void ABP_Head_Master_C::CreateArms()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.CreateArms");
		
		ABP_Head_Master_C_CreateArms_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.UpdateSkinMask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Head_Master_C::UpdateSkinMask(class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.UpdateSkinMask");
		
		ABP_Head_Master_C_UpdateSkinMask_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.OnMaskFaceAssetLoaded_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Head_Master_C::OnMaskFaceAssetLoaded_Event(class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.OnMaskFaceAssetLoaded_Event");
		
		ABP_Head_Master_C_OnMaskFaceAssetLoaded_Event_Params params {};
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.ArmsCheck
	 * 		Flags  -> ()
	 */
	void ABP_Head_Master_C::ArmsCheck()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.ArmsCheck");
		
		ABP_Head_Master_C_ArmsCheck_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Head_Master.BP_Head_Master_C.ExecuteUbergraph_BP_Head_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Head_Master_C::ExecuteUbergraph_BP_Head_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Head_Master.BP_Head_Master_C.ExecuteUbergraph_BP_Head_Master");
		
		ABP_Head_Master_C_ExecuteUbergraph_BP_Head_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Head_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Head_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Head_Master.BP_Head_Master_C");
		return ptr;
	}

}


