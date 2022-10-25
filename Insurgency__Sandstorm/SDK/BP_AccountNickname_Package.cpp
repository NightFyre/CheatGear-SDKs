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
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AccountNickname.BP_AccountNickname_C.BP_OnAccountChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ActiveControllerId                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AccountNickname_C::BP_OnAccountChanged(int32_t ActiveControllerId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AccountNickname.BP_AccountNickname_C.BP_OnAccountChanged");
		
		UBP_AccountNickname_C_BP_OnAccountChanged_Params params {};
		params.ActiveControllerId = ActiveControllerId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x05A96E40
	 * 		Name   -> Function BP_AccountNickname.BP_AccountNickname_C.ExecuteUbergraph_BP_AccountNickname
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AccountNickname_C::ExecuteUbergraph_BP_AccountNickname(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AccountNickname.BP_AccountNickname_C.ExecuteUbergraph_BP_AccountNickname");
		
		UBP_AccountNickname_C_ExecuteUbergraph_BP_AccountNickname_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AccountNickname_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AccountNickname_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_AccountNickname.BP_AccountNickname_C");
		return ptr;
	}

}


