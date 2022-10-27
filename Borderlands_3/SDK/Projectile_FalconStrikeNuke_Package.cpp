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
	 * 		Name   -> Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.InitMissile
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_FalconStrikeNuke_C::InitMissile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.InitMissile");
		
		AProjectile_FalconStrikeNuke_C_InitMissile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_FalconStrikeNuke_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.UserConstructionScript");
		
		AProjectile_FalconStrikeNuke_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.GbxAsyncRequest_Miss_FB153E514BCFA0D9652350A562778064
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_FalconStrikeNuke_C::GbxAsyncRequest_Miss_FB153E514BCFA0D9652350A562778064(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.GbxAsyncRequest_Miss_FB153E514BCFA0D9652350A562778064");
		
		AProjectile_FalconStrikeNuke_C_GbxAsyncRequest_Miss_FB153E514BCFA0D9652350A562778064_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.GbxAsyncRequest_Hit_FB153E514BCFA0D9652350A562778064
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FHitResult                                  Result                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void AProjectile_FalconStrikeNuke_C::GbxAsyncRequest_Hit_FB153E514BCFA0D9652350A562778064(const struct FHitResult& Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.GbxAsyncRequest_Hit_FB153E514BCFA0D9652350A562778064");
		
		AProjectile_FalconStrikeNuke_C_GbxAsyncRequest_Hit_FB153E514BCFA0D9652350A562778064_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_FalconStrikeNuke_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.ReceiveBeginPlay");
		
		AProjectile_FalconStrikeNuke_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.OnExplode
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_FalconStrikeNuke_C::OnExplode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.OnExplode");
		
		AProjectile_FalconStrikeNuke_C_OnExplode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.StartAsyncLineTrace
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_FalconStrikeNuke_C::StartAsyncLineTrace()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.StartAsyncLineTrace");
		
		AProjectile_FalconStrikeNuke_C_StartAsyncLineTrace_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.ResumeBeginPlay
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_FalconStrikeNuke_C::ResumeBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.ResumeBeginPlay");
		
		AProjectile_FalconStrikeNuke_C_ResumeBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.ExecuteUbergraph_Projectile_FalconStrikeNuke
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_FalconStrikeNuke_C::ExecuteUbergraph_Projectile_FalconStrikeNuke(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C.ExecuteUbergraph_Projectile_FalconStrikeNuke");
		
		AProjectile_FalconStrikeNuke_C_ExecuteUbergraph_Projectile_FalconStrikeNuke_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_FalconStrikeNuke_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_FalconStrikeNuke_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_FalconStrikeNuke.Projectile_FalconStrikeNuke_C");
		return ptr;
	}

}


