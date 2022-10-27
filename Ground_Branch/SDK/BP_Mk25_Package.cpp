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
	 * 		Name   -> Function BP_Mk25.BP_Mk25_C.BndEvt__IronSight_K2Node_ComponentBoundEvent_2_OnSightZeroing__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGBSightComponent*                           SightComponent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AGBItem*                                     OwningItem                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RelativeZeroLocation                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     RelativeLocationOffset                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FRotator                                    RelativeRotationOffset                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_Mk25_C::BndEvt__IronSight_K2Node_ComponentBoundEvent_2_OnSightZeroing__DelegateSignature(class UGBSightComponent* SightComponent, class AGBItem* OwningItem, const struct FVector& RelativeZeroLocation, const struct FVector& RelativeLocationOffset, const struct FRotator& RelativeRotationOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mk25.BP_Mk25_C.BndEvt__IronSight_K2Node_ComponentBoundEvent_2_OnSightZeroing__DelegateSignature");
		
		ABP_Mk25_C_BndEvt__IronSight_K2Node_ComponentBoundEvent_2_OnSightZeroing__DelegateSignature_Params params {};
		params.SightComponent = SightComponent;
		params.OwningItem = OwningItem;
		params.RelativeZeroLocation = RelativeZeroLocation;
		params.RelativeLocationOffset = RelativeLocationOffset;
		params.RelativeRotationOffset = RelativeRotationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mk25.BP_Mk25_C.BndEvt__FrontSightPost_K2Node_ComponentBoundEvent_3_OnRelativeLocationOffset__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGBFrontSightPostComponent*                  FrontSightPostComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RelativeLocationOffset                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mk25_C::BndEvt__FrontSightPost_K2Node_ComponentBoundEvent_3_OnRelativeLocationOffset__DelegateSignature(class UGBFrontSightPostComponent* FrontSightPostComponent, float RelativeLocationOffset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mk25.BP_Mk25_C.BndEvt__FrontSightPost_K2Node_ComponentBoundEvent_3_OnRelativeLocationOffset__DelegateSignature");
		
		ABP_Mk25_C_BndEvt__FrontSightPost_K2Node_ComponentBoundEvent_3_OnRelativeLocationOffset__DelegateSignature_Params params {};
		params.FrontSightPostComponent = FrontSightPostComponent;
		params.RelativeLocationOffset = RelativeLocationOffset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Mk25.BP_Mk25_C.ExecuteUbergraph_BP_Mk25
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Mk25_C::ExecuteUbergraph_BP_Mk25(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Mk25.BP_Mk25_C.ExecuteUbergraph_BP_Mk25");
		
		ABP_Mk25_C_ExecuteUbergraph_BP_Mk25_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Mk25_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Mk25_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Mk25.BP_Mk25_C");
		return ptr;
	}

}


