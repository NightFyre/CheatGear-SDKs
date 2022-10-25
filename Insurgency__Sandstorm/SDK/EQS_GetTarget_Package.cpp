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
	 * 		RVA    -> 0x04FDADE0
	 * 		Name   -> Function EQS_GetTarget.EQS_GetTarget_C.ProvideSingleActor
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     bpp__QuerierObject__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__QuerierActor__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__ResultingActor__pf                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEQS_GetTarget_C::ProvideSingleActor(class UObject* bpp__QuerierObject__pf, class AActor* bpp__QuerierActor__pf, class AActor** bpp__ResultingActor__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQS_GetTarget.EQS_GetTarget_C.ProvideSingleActor");
		
		UEQS_GetTarget_C_ProvideSingleActor_Params params {};
		params.bpp__QuerierObject__pf = bpp__QuerierObject__pf;
		params.bpp__QuerierActor__pf = bpp__QuerierActor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ResultingActor__pf != nullptr)
			*bpp__ResultingActor__pf = params.bpp__ResultingActor__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQS_GetTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQS_GetTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass EQS_GetTarget.EQS_GetTarget_C");
		return ptr;
	}

}


