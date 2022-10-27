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
	 * 		Name   -> Function BPWeapon_RedDot_Medium.BPWeapon_RedDot_Medium_C.ExecuteUbergraph_BPWeapon_RedDot_Medium
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPWeapon_RedDot_Medium_C::ExecuteUbergraph_BPWeapon_RedDot_Medium(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPWeapon_RedDot_Medium.BPWeapon_RedDot_Medium_C.ExecuteUbergraph_BPWeapon_RedDot_Medium");
		
		UBPWeapon_RedDot_Medium_C_ExecuteUbergraph_BPWeapon_RedDot_Medium_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPWeapon_RedDot_Medium_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPWeapon_RedDot_Medium_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPWeapon_RedDot_Medium.BPWeapon_RedDot_Medium_C");
		return ptr;
	}

}


