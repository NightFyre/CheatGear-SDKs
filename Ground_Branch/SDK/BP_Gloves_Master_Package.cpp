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
	 * 		Name   -> Function BP_Gloves_Master.BP_Gloves_Master_C.OnAddedToCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                NewParentCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Gloves_Master_C::OnAddedToCharacter(class AGBCharacter* NewParentCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gloves_Master.BP_Gloves_Master_C.OnAddedToCharacter");
		
		ABP_Gloves_Master_C_OnAddedToCharacter_Params params {};
		params.NewParentCharacter = NewParentCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Gloves_Master.BP_Gloves_Master_C.OnRemovedFromCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AGBCharacter*                                OldParentCharacter                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        OldSocketName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Gloves_Master_C::OnRemovedFromCharacter(class AGBCharacter* OldParentCharacter, const class FName& OldSocketName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gloves_Master.BP_Gloves_Master_C.OnRemovedFromCharacter");
		
		ABP_Gloves_Master_C_OnRemovedFromCharacter_Params params {};
		params.OldParentCharacter = OldParentCharacter;
		params.OldSocketName = OldSocketName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Gloves_Master.BP_Gloves_Master_C.ExecuteUbergraph_BP_Gloves_Master
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Gloves_Master_C::ExecuteUbergraph_BP_Gloves_Master(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Gloves_Master.BP_Gloves_Master_C.ExecuteUbergraph_BP_Gloves_Master");
		
		ABP_Gloves_Master_C_ExecuteUbergraph_BP_Gloves_Master_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Gloves_Master_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Gloves_Master_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Gloves_Master.BP_Gloves_Master_C");
		return ptr;
	}

}


