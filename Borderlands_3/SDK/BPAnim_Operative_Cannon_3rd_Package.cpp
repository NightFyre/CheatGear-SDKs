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
	 * 		Name   -> Function BPAnim_Operative_Cannon_3rd.BPAnim_Operative_Cannon_3rd_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Operative_Cannon_3rd_GbxAnimGraphNode_LookAt_07969AA542B1958A4694FA9A4027B952
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPAnim_Operative_Cannon_3rd_C::EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Operative_Cannon_3rd_GbxAnimGraphNode_LookAt_07969AA542B1958A4694FA9A4027B952()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_Operative_Cannon_3rd.BPAnim_Operative_Cannon_3rd_C.EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Operative_Cannon_3rd_GbxAnimGraphNode_LookAt_07969AA542B1958A4694FA9A4027B952");
		
		UBPAnim_Operative_Cannon_3rd_C_EvaluateGraphExposedInputs_ExecuteUbergraph_BPAnim_Operative_Cannon_3rd_GbxAnimGraphNode_LookAt_07969AA542B1958A4694FA9A4027B952_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPAnim_Operative_Cannon_3rd.BPAnim_Operative_Cannon_3rd_C.ExecuteUbergraph_BPAnim_Operative_Cannon_3rd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPAnim_Operative_Cannon_3rd_C::ExecuteUbergraph_BPAnim_Operative_Cannon_3rd(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPAnim_Operative_Cannon_3rd.BPAnim_Operative_Cannon_3rd_C.ExecuteUbergraph_BPAnim_Operative_Cannon_3rd");
		
		UBPAnim_Operative_Cannon_3rd_C_ExecuteUbergraph_BPAnim_Operative_Cannon_3rd_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPAnim_Operative_Cannon_3rd_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPAnim_Operative_Cannon_3rd_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BPAnim_Operative_Cannon_3rd.BPAnim_Operative_Cannon_3rd_C");
		return ptr;
	}

}


