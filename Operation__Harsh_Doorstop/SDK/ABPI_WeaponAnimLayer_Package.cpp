/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.WeaponJumpLoop
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   LowerJumpLoop                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   WeaponJumpLoop                                             (Parm, OutParm, NoDestructor)
	 */
	void UABPI_WeaponAnimLayer_C::WeaponJumpLoop(const struct FPoseLink& LowerJumpLoop, struct FPoseLink* WeaponJumpLoop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.WeaponJumpLoop");
		
		UABPI_WeaponAnimLayer_C_WeaponJumpLoop_Params params {};
		params.LowerJumpLoop = LowerJumpLoop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponJumpLoop != nullptr)
			*WeaponJumpLoop = params.WeaponJumpLoop;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.Move
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   Move                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   Move2                                                      (Parm, OutParm, NoDestructor)
	 */
	void UABPI_WeaponAnimLayer_C::Move(const struct FPoseLink& Move, struct FPoseLink* Move2)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.Move");
		
		UABPI_WeaponAnimLayer_C_Move_Params params {};
		params.Move = Move;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Move2 != nullptr)
			*Move2 = params.Move2;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.WeaponAdditive
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   WeaponAdditive                                             (Parm, OutParm, NoDestructor)
	 */
	void UABPI_WeaponAnimLayer_C::WeaponAdditive(struct FPoseLink* WeaponAdditive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.WeaponAdditive");
		
		UABPI_WeaponAnimLayer_C_WeaponAdditive_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponAdditive != nullptr)
			*WeaponAdditive = params.WeaponAdditive;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.WeaponUpperBody
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   UpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   WeaponUpperBody                                            (Parm, OutParm, NoDestructor)
	 */
	void UABPI_WeaponAnimLayer_C::WeaponUpperBody(const struct FPoseLink& UpperBody, struct FPoseLink* WeaponUpperBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C.WeaponUpperBody");
		
		UABPI_WeaponAnimLayer_C_WeaponUpperBody_Params params {};
		params.UpperBody = UpperBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WeaponUpperBody != nullptr)
			*WeaponUpperBody = params.WeaponUpperBody;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABPI_WeaponAnimLayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABPI_WeaponAnimLayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABPI_WeaponAnimLayer.ABPI_WeaponAnimLayer_C");
		return ptr;
	}

}


