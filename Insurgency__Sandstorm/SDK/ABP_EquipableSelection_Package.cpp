/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function ABP_EquipableSelection.ABP_EquipableSelection_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_EquipableSelection_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_EquipableSelection.ABP_EquipableSelection_C.AnimGraph");
		
		UABP_EquipableSelection_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function ABP_EquipableSelection.ABP_EquipableSelection_C.CheckAmmoDelta
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AItemEquipable*                              Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimSequence*                               Sequence                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               LMG                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              MagazineTransparency                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_EquipableSelection_C::CheckAmmoDelta(class AItemEquipable* Item, class UAnimSequence** Sequence, bool* LMG, float* MagazineTransparency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_EquipableSelection.ABP_EquipableSelection_C.CheckAmmoDelta");
		
		UABP_EquipableSelection_C_CheckAmmoDelta_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sequence != nullptr)
			*Sequence = params.Sequence;
		if (LMG != nullptr)
			*LMG = params.LMG;
		if (MagazineTransparency != nullptr)
			*MagazineTransparency = params.MagazineTransparency;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function ABP_EquipableSelection.ABP_EquipableSelection_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_EquipableSelection_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_EquipableSelection.ABP_EquipableSelection_C.BlueprintUpdateAnimation");
		
		UABP_EquipableSelection_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function ABP_EquipableSelection.ABP_EquipableSelection_C.ExecuteUbergraph_ABP_EquipableSelection
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_EquipableSelection_C::ExecuteUbergraph_ABP_EquipableSelection(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_EquipableSelection.ABP_EquipableSelection_C.ExecuteUbergraph_ABP_EquipableSelection");
		
		UABP_EquipableSelection_C_ExecuteUbergraph_ABP_EquipableSelection_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_EquipableSelection_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_EquipableSelection_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_EquipableSelection.ABP_EquipableSelection_C");
		return ptr;
	}

}


