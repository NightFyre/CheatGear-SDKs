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
	 * 		Name   -> Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnHitTargetable
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      HitActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     HitNormal                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMove_IronBear_SurpriseForYou_C::OnHitTargetable(class AActor* HitActor, const struct FVector& HitNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnHitTargetable");
		
		UMove_IronBear_SurpriseForYou_C_OnHitTargetable_Params params {};
		params.HitActor = HitActor;
		params.HitNormal = HitNormal;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnServerStart
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              MoveDuration                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      TargetActor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMove_IronBear_SurpriseForYou_C::OnServerStart(float MoveDuration, class AActor* TargetActor, class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnServerStart");
		
		UMove_IronBear_SurpriseForYou_C_OnServerStart_Params params {};
		params.MoveDuration = MoveDuration;
		params.TargetActor = TargetActor;
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnStop
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               bInterrupted                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UMove_IronBear_SurpriseForYou_C::OnStop(bool bInterrupted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.OnStop");
		
		UMove_IronBear_SurpriseForYou_C_OnStop_Params params {};
		params.bInterrupted = bInterrupted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.ExecuteUbergraph_Move_IronBear_SurpriseForYou
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UMove_IronBear_SurpriseForYou_C::ExecuteUbergraph_Move_IronBear_SurpriseForYou(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C.ExecuteUbergraph_Move_IronBear_SurpriseForYou");
		
		UMove_IronBear_SurpriseForYou_C_ExecuteUbergraph_Move_IronBear_SurpriseForYou_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMove_IronBear_SurpriseForYou_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMove_IronBear_SurpriseForYou_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Move_IronBear_SurpriseForYou.Move_IronBear_SurpriseForYou_C");
		return ptr;
	}

}


