/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.OnEquipItemMesh
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      PartComp                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class USkeletalMesh*                               ItemMesh                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Resurrection_Man_Capture_C::OnEquipItemMesh(class USkeletalMeshComponent* PartComp, class USkeletalMesh* ItemMesh)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.OnEquipItemMesh");
		
		ABP_Resurrection_Man_Capture_C_OnEquipItemMesh_Params params {};
		params.PartComp = PartComp;
		params.ItemMesh = ItemMesh;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.BP_Resurrection_Capture_AutoGenFunc
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     InObjectLoaded                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Resurrection_Man_Capture_C::BP_Resurrection_Capture_AutoGenFunc(class UObject* InObjectLoaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.BP_Resurrection_Capture_AutoGenFunc");
		
		ABP_Resurrection_Man_Capture_C_BP_Resurrection_Capture_AutoGenFunc_Params params {};
		params.InObjectLoaded = InObjectLoaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.OnItemEquip
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_Resurrection_Man_Capture_C::OnItemEquip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.OnItemEquip");
		
		ABP_Resurrection_Man_Capture_C_OnItemEquip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.ExecuteUbergraph_BP_Resurrection_Man_Capture
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Resurrection_Man_Capture_C::ExecuteUbergraph_BP_Resurrection_Man_Capture(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C.ExecuteUbergraph_BP_Resurrection_Man_Capture");
		
		ABP_Resurrection_Man_Capture_C_ExecuteUbergraph_BP_Resurrection_Man_Capture_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Resurrection_Man_Capture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Resurrection_Man_Capture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Resurrection_Man_Capture.BP_Resurrection_Man_Capture_C");
		return ptr;
	}

}


