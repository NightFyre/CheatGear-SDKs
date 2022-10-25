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
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Wattson_Grenade_Hover_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.UserConstructionScript");
		
		AProj_Wattson_Grenade_Hover_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.TL_Hover__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProj_Wattson_Grenade_Hover_C::TL_Hover__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.TL_Hover__FinishedFunc");
		
		AProj_Wattson_Grenade_Hover_C_TL_Hover__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.TL_Hover__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProj_Wattson_Grenade_Hover_C::TL_Hover__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.TL_Hover__UpdateFunc");
		
		AProj_Wattson_Grenade_Hover_C_TL_Hover__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.GbxAsyncRequest_Miss_75E6A60F49F25A5F3C7939850ECEB48E
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Wattson_Grenade_Hover_C::GbxAsyncRequest_Miss_75E6A60F49F25A5F3C7939850ECEB48E(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.GbxAsyncRequest_Miss_75E6A60F49F25A5F3C7939850ECEB48E");
		
		AProj_Wattson_Grenade_Hover_C_GbxAsyncRequest_Miss_75E6A60F49F25A5F3C7939850ECEB48E_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.GbxAsyncRequest_Hit_75E6A60F49F25A5F3C7939850ECEB48E
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Wattson_Grenade_Hover_C::GbxAsyncRequest_Hit_75E6A60F49F25A5F3C7939850ECEB48E(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.GbxAsyncRequest_Hit_75E6A60F49F25A5F3C7939850ECEB48E");
		
		AProj_Wattson_Grenade_Hover_C_GbxAsyncRequest_Hit_75E6A60F49F25A5F3C7939850ECEB48E_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Prime
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Wattson_Grenade_Hover_C::HNT_Prime()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Prime");
		
		AProj_Wattson_Grenade_Hover_C_HNT_Prime_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Drop
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Wattson_Grenade_Hover_C::HNT_Drop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Drop");
		
		AProj_Wattson_Grenade_Hover_C_HNT_Drop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Throw
	 * 		Flags  -> (Net, NetMulticast, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProj_Wattson_Grenade_Hover_C::HNT_Throw()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.HNT_Throw");
		
		AProj_Wattson_Grenade_Hover_C_HNT_Throw_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Wattson_Grenade_Hover_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.OnExplode");
		
		AProj_Wattson_Grenade_Hover_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ReceiveHit
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class UPrimitiveComponent*                         MyComp                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Other                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bSelfMoved                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     HitLocation                                                (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     NormalImpulse                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProj_Wattson_Grenade_Hover_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ReceiveHit");
		
		AProj_Wattson_Grenade_Hover_C_ReceiveHit_Params params {};
		params.MyComp = MyComp;
		params.Other = Other;
		params.OtherComp = OtherComp;
		params.bSelfMoved = bSelfMoved;
		params.HitLocation = HitLocation;
		params.HitNormal = HitNormal;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProj_Wattson_Grenade_Hover_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ReceiveBeginPlay");
		
		AProj_Wattson_Grenade_Hover_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ExecuteUbergraph_Proj_Wattson_Grenade_Hover
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProj_Wattson_Grenade_Hover_C::ExecuteUbergraph_Proj_Wattson_Grenade_Hover(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C.ExecuteUbergraph_Proj_Wattson_Grenade_Hover");
		
		AProj_Wattson_Grenade_Hover_C_ExecuteUbergraph_Proj_Wattson_Grenade_Hover_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProj_Wattson_Grenade_Hover_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProj_Wattson_Grenade_Hover_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Wattson_Grenade_Hover.Proj_Wattson_Grenade_Hover_C");
		return ptr;
	}

}


