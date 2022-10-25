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
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.GetHiddenComponents
	 * 		Flags  -> ()
	 */
	TArray<class UPrimitiveComponent*> ABP_HeadGear_Master_C::GetHiddenComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.GetHiddenComponents");
		
		ABP_HeadGear_Master_C_GetHiddenComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.SetStrap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index1                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HeadGear_Master_C::SetStrap(int32_t Index1)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.SetStrap");
		
		ABP_HeadGear_Master_C_SetStrap_Params params {};
		params.Index1 = Index1;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.DecodeKit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           ItemAsJson                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DecodedOwner                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBItem*                                     DecodedParentItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_HeadGear_Master_C::DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.DecodeKit");
		
		ABP_HeadGear_Master_C_DecodeKit_Params params {};
		params.ItemAsJson = ItemAsJson;
		params.DecodedOwner = DecodedOwner;
		params.DecodedParentItem = DecodedParentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.GetPatchName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PatchName                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HeadGear_Master_C::GetPatchName(class FString* PatchName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.GetPatchName");
		
		ABP_HeadGear_Master_C_GetPatchName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PatchName != nullptr)
			*PatchName = params.PatchName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.SetPatchName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PatchName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void ABP_HeadGear_Master_C::SetPatchName(const class FString& PatchName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.SetPatchName");
		
		ABP_HeadGear_Master_C_SetPatchName_Params params {};
		params.PatchName = PatchName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_HeadGear_Master_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.UserConstructionScript");
		
		ABP_HeadGear_Master_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnAddedToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                NewParentCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HeadGear_Master_C::OnAddedToCharacter(class AGBCharacter* NewParentCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnAddedToCharacter");
		
		ABP_HeadGear_Master_C_OnAddedToCharacter_Params params {};
		params.NewParentCharacter = NewParentCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnRemovedFromCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                OldParentCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        OldSocketName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HeadGear_Master_C::OnRemovedFromCharacter(class AGBCharacter* OldParentCharacter, const class FName& OldSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnRemovedFromCharacter");
		
		ABP_HeadGear_Master_C_OnRemovedFromCharacter_Params params {};
		params.OldParentCharacter = OldParentCharacter;
		params.OldSocketName = OldSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.CharacterPlayDying_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HeadGear_Master_C::CharacterPlayDying_Event_1(class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.CharacterPlayDying_Event_1");
		
		ABP_HeadGear_Master_C_CharacterPlayDying_Event_1_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.SetMorph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HeadGear_Master_C::SetMorph(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.SetMorph");
		
		ABP_HeadGear_Master_C_SetMorph_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.UpdateMorph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	 */
	void ABP_HeadGear_Master_C::UpdateMorph(class AGBCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.UpdateMorph");
		
		ABP_HeadGear_Master_C_UpdateMorph_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.UpdateSkin
	 * 		Flags  -> ()
	 */
	void ABP_HeadGear_Master_C::UpdateSkin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.UpdateSkin");
		
		ABP_HeadGear_Master_C_UpdateSkin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnHelmetSkinLoaded_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HeadGear_Master_C::OnHelmetSkinLoaded_Event(class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.OnHelmetSkinLoaded_Event");
		
		ABP_HeadGear_Master_C_OnHelmetSkinLoaded_Event_Params params {};
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.InventoryModifiersUpdated
	 * 		Flags  -> ()
	 */
	void ABP_HeadGear_Master_C::InventoryModifiersUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.InventoryModifiersUpdated");
		
		ABP_HeadGear_Master_C_InventoryModifiersUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_HeadGear_Master.BP_HeadGear_Master_C.ExecuteUbergraph_BP_HeadGear_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_HeadGear_Master_C::ExecuteUbergraph_BP_HeadGear_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_HeadGear_Master.BP_HeadGear_Master_C.ExecuteUbergraph_BP_HeadGear_Master");
		
		ABP_HeadGear_Master_C_ExecuteUbergraph_BP_HeadGear_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_HeadGear_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_HeadGear_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_HeadGear_Master.BP_HeadGear_Master_C");
		return ptr;
	}

}


