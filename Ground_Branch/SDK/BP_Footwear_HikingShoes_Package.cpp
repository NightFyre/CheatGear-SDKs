/**
 * Name: Ground_Branch
 * Version: 1032
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Footwear_HikingShoes.BP_Footwear_HikingShoes_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Footwear_HikingShoes_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footwear_HikingShoes.BP_Footwear_HikingShoes_C.ReceiveBeginPlay");
		
		ABP_Footwear_HikingShoes_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Footwear_HikingShoes.BP_Footwear_HikingShoes_C.ExecuteUbergraph_BP_Footwear_HikingShoes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Footwear_HikingShoes_C::ExecuteUbergraph_BP_Footwear_HikingShoes(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Footwear_HikingShoes.BP_Footwear_HikingShoes_C.ExecuteUbergraph_BP_Footwear_HikingShoes");
		
		ABP_Footwear_HikingShoes_C_ExecuteUbergraph_BP_Footwear_HikingShoes_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Footwear_HikingShoes_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Footwear_HikingShoes_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Footwear_HikingShoes.BP_Footwear_HikingShoes_C");
		return ptr;
	}

}


