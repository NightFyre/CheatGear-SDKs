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
	 * 		RVA    -> 0x04F2C3C0
	 * 		Name   -> Function BTTask_DestroySelf.BTTask_DestroySelf_C.ReceiveExecuteAI
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AAIController*                               bpp__OwnerController__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class APawn*                                       bpp__ControlledPawn__pf                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBTTask_DestroySelf_C::ReceiveExecuteAI(class AAIController* bpp__OwnerController__pf, class APawn* bpp__ControlledPawn__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTTask_DestroySelf.BTTask_DestroySelf_C.ReceiveExecuteAI");
		
		UBTTask_DestroySelf_C_ReceiveExecuteAI_Params params {};
		params.bpp__OwnerController__pf = bpp__OwnerController__pf;
		params.bpp__ControlledPawn__pf = bpp__ControlledPawn__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTTask_DestroySelf_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTTask_DestroySelf_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BTTask_DestroySelf.BTTask_DestroySelf_C");
		return ptr;
	}

}


