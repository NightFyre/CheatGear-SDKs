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
	 * 		Name   -> Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPCryoFreezeComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ReceiveBeginPlay");
		
		UBPCryoFreezeComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.OnGbxComponentFracture_Event_1
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     FractureCentroid                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitDirection                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              FracturePercent                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSilentFracture                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPCryoFreezeComponent_C::OnGbxComponentFracture_Event_1(const struct FVector& FractureCentroid, const struct FVector& HitDirection, float FracturePercent, bool bSilentFracture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.OnGbxComponentFracture_Event_1");
		
		UBPCryoFreezeComponent_C_OnGbxComponentFracture_Event_1_Params params {};
		params.FractureCentroid = FractureCentroid;
		params.HitDirection = HitDirection;
		params.FracturePercent = FracturePercent;
		params.bSilentFracture = bSilentFracture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ExecuteUbergraph_BPCryoFreezeComponent
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPCryoFreezeComponent_C::ExecuteUbergraph_BPCryoFreezeComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPCryoFreezeComponent.BPCryoFreezeComponent_C.ExecuteUbergraph_BPCryoFreezeComponent");
		
		UBPCryoFreezeComponent_C_ExecuteUbergraph_BPCryoFreezeComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPCryoFreezeComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPCryoFreezeComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPCryoFreezeComponent.BPCryoFreezeComponent_C");
		return ptr;
	}

}


