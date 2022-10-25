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
	 * 		Name   -> Function EQS_GetAllOccupiedCover.EQS_GetAllOccupiedCover_C.ProvideLocationsSet
	 * 		Flags  -> (Native, Event, Public, HasOutParms, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     bpp__QuerierObject__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__QuerierActor__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             bpp__ResultingLocationSet__pf                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEQS_GetAllOccupiedCover_C::ProvideLocationsSet(class UObject* bpp__QuerierObject__pf, class AActor* bpp__QuerierActor__pf, TArray<struct FVector>* bpp__ResultingLocationSet__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EQS_GetAllOccupiedCover.EQS_GetAllOccupiedCover_C.ProvideLocationsSet");
		
		UEQS_GetAllOccupiedCover_C_ProvideLocationsSet_Params params {};
		params.bpp__QuerierObject__pf = bpp__QuerierObject__pf;
		params.bpp__QuerierActor__pf = bpp__QuerierActor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ResultingLocationSet__pf != nullptr)
			*bpp__ResultingLocationSet__pf = params.bpp__ResultingLocationSet__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEQS_GetAllOccupiedCover_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEQS_GetAllOccupiedCover_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass EQS_GetAllOccupiedCover.EQS_GetAllOccupiedCover_C");
		return ptr;
	}

}


