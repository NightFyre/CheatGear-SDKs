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
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.OnUseStarted
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FWieldableItemActionVisuals                 ActionVisuals                                              (ConstParm, Parm, OutParm, ReferenceParm)
	 */
	void UBP_Anim_TreasureMap_C::OnUseStarted(class UClass* InputID, const struct FWieldableItemActionVisuals& ActionVisuals)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.OnUseStarted");
		
		UBP_Anim_TreasureMap_C_OnUseStarted_Params params {};
		params.InputID = InputID;
		params.ActionVisuals = ActionVisuals;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.OnUseStopped
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      InputID                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Anim_TreasureMap_C::OnUseStopped(class UClass* InputID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.OnUseStopped");
		
		UBP_Anim_TreasureMap_C_OnUseStopped_Params params {};
		params.InputID = InputID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x017825A0
	 * 		Name   -> Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.ExecuteUbergraph_BP_Anim_TreasureMap
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_Anim_TreasureMap_C::ExecuteUbergraph_BP_Anim_TreasureMap(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Anim_TreasureMap.BP_Anim_TreasureMap_C.ExecuteUbergraph_BP_Anim_TreasureMap");
		
		UBP_Anim_TreasureMap_C_ExecuteUbergraph_BP_Anim_TreasureMap_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_Anim_TreasureMap_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_Anim_TreasureMap_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_Anim_TreasureMap.BP_Anim_TreasureMap_C");
		return ptr;
	}

}


