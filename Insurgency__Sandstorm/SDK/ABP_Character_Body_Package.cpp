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
	 * 		RVA    -> 0x04DB9E90
	 * 		Name   -> Function ABP_Character_Body.ABP_Character_Body_C.OnDoorKick
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		bool                                               bpp__bKickWillSucceed__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Character_Body_C::OnDoorKick(bool bpp__bKickWillSucceed__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Character_Body.ABP_Character_Body_C.OnDoorKick");
		
		UABP_Character_Body_C_OnDoorKick_Params params {};
		params.bpp__bKickWillSucceed__pf = bpp__bKickWillSucceed__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9610
	 * 		Name   -> Function ABP_Character_Body.ABP_Character_Body_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		float                                              bpp__DeltaTimeX__pf                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Character_Body_C::BlueprintUpdateAnimation(float bpp__DeltaTimeX__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Character_Body.ABP_Character_Body_C.BlueprintUpdateAnimation");
		
		UABP_Character_Body_C_BlueprintUpdateAnimation_Params params {};
		params.bpp__DeltaTimeX__pf = bpp__DeltaTimeX__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04DB9460
	 * 		Name   -> Function ABP_Character_Body.ABP_Character_Body_C.AnimGraph
	 * 		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		struct FPoseLink                                   bpp__AnimGraph__pf                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void UABP_Character_Body_C::AnimGraph(struct FPoseLink* bpp__AnimGraph__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Character_Body.ABP_Character_Body_C.AnimGraph");
		
		UABP_Character_Body_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__AnimGraph__pf != nullptr)
			*bpp__AnimGraph__pf = params.bpp__AnimGraph__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> DelegateFunction ABP_Character_Body.ABP_Character_Body_C.DelegateDoorKick__DelegateSignature
	 * 		Flags  -> (Public, Delegate)
	 * Parameters:
	 * 		bool                                               bpp__bKickWillSucceed__pf                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UABP_Character_Body_C::DelegateDoorKick__DelegateSignature(bool bpp__bKickWillSucceed__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("DelegateFunction ABP_Character_Body.ABP_Character_Body_C.DelegateDoorKick__DelegateSignature");
		
		UABP_Character_Body_C_DelegateDoorKick__DelegateSignature_Params params {};
		params.bpp__bKickWillSucceed__pf = bpp__bKickWillSucceed__pf;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Character_Body_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Character_Body_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass ABP_Character_Body.ABP_Character_Body_C");
		return ptr;
	}

}


