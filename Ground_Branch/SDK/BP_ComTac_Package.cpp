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
	 * 		Name   -> Function BP_ComTac.BP_ComTac_C.GetHiddenComponents
	 * 		Flags  -> ()
	 */
	TArray<class UPrimitiveComponent*> ABP_ComTac_C::GetHiddenComponents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ComTac.BP_ComTac_C.GetHiddenComponents");
		
		ABP_ComTac_C_GetHiddenComponents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ComTac.BP_ComTac_C.DecodeKit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           ItemAsJson                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DecodedOwner                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBItem*                                     DecodedParentItem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABP_ComTac_C::DecodeKit(class UVaRestJsonObject* ItemAsJson, class AActor* DecodedOwner, class AGBItem* DecodedParentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ComTac.BP_ComTac_C.DecodeKit");
		
		ABP_ComTac_C_DecodeKit_Params params {};
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
	 * 		Name   -> Function BP_ComTac.BP_ComTac_C.OnGoggleMeshLoaded_Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     LoadedAsset                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ComTac_C::OnGoggleMeshLoaded_Event(class UObject* LoadedAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ComTac.BP_ComTac_C.OnGoggleMeshLoaded_Event");
		
		ABP_ComTac_C_OnGoggleMeshLoaded_Event_Params params {};
		params.LoadedAsset = LoadedAsset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ComTac.BP_ComTac_C.OnAddedToItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBItem*                                     NewParentItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ComTac_C::OnAddedToItem(class AGBItem* NewParentItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ComTac.BP_ComTac_C.OnAddedToItem");
		
		ABP_ComTac_C_OnAddedToItem_Params params {};
		params.NewParentItem = NewParentItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ComTac.BP_ComTac_C.SetMesh
	 * 		Flags  -> ()
	 */
	void ABP_ComTac_C::SetMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ComTac.BP_ComTac_C.SetMesh");
		
		ABP_ComTac_C_SetMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ComTac.BP_ComTac_C.EncodeKit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UVaRestJsonObject*                           ItemAsJson                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ComTac_C::EncodeKit(class UVaRestJsonObject* ItemAsJson)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ComTac.BP_ComTac_C.EncodeKit");
		
		ABP_ComTac_C_EncodeKit_Params params {};
		params.ItemAsJson = ItemAsJson;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ComTac.BP_ComTac_C.ExecuteUbergraph_BP_ComTac
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ComTac_C::ExecuteUbergraph_BP_ComTac(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ComTac.BP_ComTac_C.ExecuteUbergraph_BP_ComTac");
		
		ABP_ComTac_C_ExecuteUbergraph_BP_ComTac_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ComTac_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ComTac_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ComTac.BP_ComTac_C");
		return ptr;
	}

}


