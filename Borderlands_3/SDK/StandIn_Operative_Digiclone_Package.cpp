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
	 * 		Name   -> Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AStandIn_Operative_Digiclone_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.UserConstructionScript");
		
		AStandIn_Operative_Digiclone_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UGbxCustomizationData*                       Customization                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStandIn_Operative_Digiclone_C::BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone(class UGbxCustomizationData* Customization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone");
		
		AStandIn_Operative_Digiclone_C_BndEvt__CustomizationComponent_K2Node_ComponentBoundEvent_0_CharacterCustomizationApplied__DelegateSignature_StandIn_Operative_Digiclone_Params params {};
		params.Customization = Customization;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.OnReceivedClonedWeaponAppearance
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class USceneComponent*                             BaseComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStandIn_Operative_Digiclone_C::OnReceivedClonedWeaponAppearance(class USceneComponent* BaseComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.OnReceivedClonedWeaponAppearance");
		
		AStandIn_Operative_Digiclone_C_OnReceivedClonedWeaponAppearance_Params params {};
		params.BaseComponent = BaseComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.ExecuteUbergraph_StandIn_Operative_Digiclone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AStandIn_Operative_Digiclone_C::ExecuteUbergraph_StandIn_Operative_Digiclone(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C.ExecuteUbergraph_StandIn_Operative_Digiclone");
		
		AStandIn_Operative_Digiclone_C_ExecuteUbergraph_StandIn_Operative_Digiclone_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AStandIn_Operative_Digiclone_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AStandIn_Operative_Digiclone_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_Operative_Digiclone.StandIn_Operative_Digiclone_C");
		return ptr;
	}

}


