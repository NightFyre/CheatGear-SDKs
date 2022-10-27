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
	 * 		Name   -> Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBPHeatComponent_CoV_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ReceiveBeginPlay");
		
		UBPHeatComponent_CoV_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.OnStartOverheat
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void UBPHeatComponent_CoV_C::OnStartOverheat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.OnStartOverheat");
		
		UBPHeatComponent_CoV_C_OnStartOverheat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ExecuteUbergraph_BPHeatComponent_CoV
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPHeatComponent_CoV_C::ExecuteUbergraph_BPHeatComponent_CoV(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPHeatComponent_CoV.BPHeatComponent_CoV_C.ExecuteUbergraph_BPHeatComponent_CoV");
		
		UBPHeatComponent_CoV_C_ExecuteUbergraph_BPHeatComponent_CoV_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPHeatComponent_CoV_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPHeatComponent_CoV_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPHeatComponent_CoV.BPHeatComponent_CoV_C");
		return ptr;
	}

}


