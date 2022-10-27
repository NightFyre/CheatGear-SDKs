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
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AProjectile_Bubble_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.UserConstructionScript");
		
		AProjectile_Bubble_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.Pattern1__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_Bubble_C::Pattern1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.Pattern1__FinishedFunc");
		
		AProjectile_Bubble_C_Pattern1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.Pattern1__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_Bubble_C::Pattern1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.Pattern1__UpdateFunc");
		
		AProjectile_Bubble_C_Pattern1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.Pattern2__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_Bubble_C::Pattern2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.Pattern2__FinishedFunc");
		
		AProjectile_Bubble_C_Pattern2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.Pattern2__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_Bubble_C::Pattern2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.Pattern2__UpdateFunc");
		
		AProjectile_Bubble_C_Pattern2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.GravityScale__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_Bubble_C::GravityScale__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.GravityScale__FinishedFunc");
		
		AProjectile_Bubble_C_GravityScale__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.GravityScale__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_Bubble_C::GravityScale__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.GravityScale__UpdateFunc");
		
		AProjectile_Bubble_C_GravityScale__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.Pattern3__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_Bubble_C::Pattern3__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.Pattern3__FinishedFunc");
		
		AProjectile_Bubble_C_Pattern3__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.Pattern3__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_Bubble_C::Pattern3__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.Pattern3__UpdateFunc");
		
		AProjectile_Bubble_C_Pattern3__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.Pattern4__FinishedFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_Bubble_C::Pattern4__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.Pattern4__FinishedFunc");
		
		AProjectile_Bubble_C_Pattern4__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.Pattern4__UpdateFunc
	 * 		Flags  -> (BlueprintEvent)
	 */
	void AProjectile_Bubble_C::Pattern4__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.Pattern4__UpdateFunc");
		
		AProjectile_Bubble_C_Pattern4__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AProjectile_Bubble_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.ReceiveBeginPlay");
		
		AProjectile_Bubble_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function Projectile_Bubble.Projectile_Bubble_C.ExecuteUbergraph_Projectile_Bubble
	 * 		Flags  -> (HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AProjectile_Bubble_C::ExecuteUbergraph_Projectile_Bubble(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Projectile_Bubble.Projectile_Bubble_C.ExecuteUbergraph_Projectile_Bubble");
		
		AProjectile_Bubble_C_ExecuteUbergraph_Projectile_Bubble_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectile_Bubble_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectile_Bubble_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Projectile_Bubble.Projectile_Bubble_C");
		return ptr;
	}

}


