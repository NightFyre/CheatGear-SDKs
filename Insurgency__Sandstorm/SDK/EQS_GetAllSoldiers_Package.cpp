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
	 * 		RVA    -> 0x04FDACB0
	 * 		Name   -> Function EQS_GetAllSoldiers.EQS_GetAllSoldiers_C.ProvideActorsSet
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     bpp__QuerierObject__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__QuerierActor__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              bpp__ResultingActorsSet__pf                                (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEQS_GetAllSoldiers_C::ProvideActorsSet(class UObject* bpp__QuerierObject__pf, class AActor* bpp__QuerierActor__pf, TArray<class AActor*>* bpp__ResultingActorsSet__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQS_GetAllSoldiers.EQS_GetAllSoldiers_C.ProvideActorsSet");
		
		UEQS_GetAllSoldiers_C_ProvideActorsSet_Params params {};
		params.bpp__QuerierObject__pf = bpp__QuerierObject__pf;
		params.bpp__QuerierActor__pf = bpp__QuerierActor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ResultingActorsSet__pf != nullptr)
			*bpp__ResultingActorsSet__pf = params.bpp__ResultingActorsSet__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQS_GetAllSoldiers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQS_GetAllSoldiers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass EQS_GetAllSoldiers.EQS_GetAllSoldiers_C");
		return ptr;
	}

}


