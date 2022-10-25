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
	 * 		RVA    -> 0x04FD2B90
	 * 		Name   -> Function EnvQueryContext_DownwardTrace.EnvQueryContext_DownwardTrace_C.ProvideSingleLocation
	 * 		Flags  -> (Native, Event, Public, HasOutParms, HasDefaults, BlueprintCallable)
	 * Parameters:
	 * 		class UObject*                                     bpp__QuerierObject__pf                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      bpp__QuerierActor__pf                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     bpp__ResultingLocation__pf                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UEnvQueryContext_DownwardTrace_C::ProvideSingleLocation(class UObject* bpp__QuerierObject__pf, class AActor* bpp__QuerierActor__pf, struct FVector* bpp__ResultingLocation__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function EnvQueryContext_DownwardTrace.EnvQueryContext_DownwardTrace_C.ProvideSingleLocation");
		
		UEnvQueryContext_DownwardTrace_C_ProvideSingleLocation_Params params {};
		params.bpp__QuerierObject__pf = bpp__QuerierObject__pf;
		params.bpp__QuerierActor__pf = bpp__QuerierActor__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bpp__ResultingLocation__pf != nullptr)
			*bpp__ResultingLocation__pf = params.bpp__ResultingLocation__pf;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEnvQueryContext_DownwardTrace_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEnvQueryContext_DownwardTrace_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass EnvQueryContext_DownwardTrace.EnvQueryContext_DownwardTrace_C");
		return ptr;
	}

}


