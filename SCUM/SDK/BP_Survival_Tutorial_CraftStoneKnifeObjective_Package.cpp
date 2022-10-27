/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::UnbindItemClicked(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindItemClicked");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_UnbindItemClicked_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindTabModeOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Delegate                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::UnbindTabModeOpened(const class FScriptDelegate& Delegate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.UnbindTabModeOpened");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_UnbindTabModeOpened_Params params {};
		params.Delegate = Delegate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.GetPrisoner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APrisoner*                                   AsPrisoner                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::GetPrisoner(class APrisoner** AsPrisoner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.GetPrisoner");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_GetPrisoner_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AsPrisoner != nullptr)
			*AsPrisoner = params.AsPrisoner;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.AddToDialogueQueue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EDialogEvent                                       dialogEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::AddToDialogueQueue(EDialogEvent dialogEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.AddToDialogueQueue");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_AddToDialogueQueue_Params params {};
		params.dialogEvent = dialogEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveStarted
	 * 		Flags  -> ()
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::OnObjectiveStarted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveStarted");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveStarted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnTabModeOpened
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETabMode                                           tabMode                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::OnTabModeOpened(ETabMode tabMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnTabModeOpened");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnTabModeOpened_Params params {};
		params.tabMode = tabMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingTabOpened
	 * 		Flags  -> ()
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::CraftingTabOpened()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingTabOpened");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_CraftingTabOpened_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingItemClicked
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCraftableItem*                              CraftableItem                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::CraftingItemClicked(class UCraftableItem* CraftableItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.CraftingItemClicked");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_CraftingItemClicked_Params params {};
		params.CraftableItem = CraftableItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveCompleted
	 * 		Flags  -> ()
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::OnObjectiveCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveCompleted");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveFailed
	 * 		Flags  -> ()
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::OnObjectiveFailed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveFailed");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveFailed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveBelated
	 * 		Flags  -> ()
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::OnObjectiveBelated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.OnObjectiveBelated");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_OnObjectiveBelated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C.ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective");
		
		ABP_Survival_Tutorial_CraftStoneKnifeObjective_C_ExecuteUbergraph_BP_Survival_Tutorial_CraftStoneKnifeObjective_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Survival_Tutorial_CraftStoneKnifeObjective_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Survival_Tutorial_CraftStoneKnifeObjective_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Survival_Tutorial_CraftStoneKnifeObjective.BP_Survival_Tutorial_CraftStoneKnifeObjective_C");
		return ptr;
	}

}


