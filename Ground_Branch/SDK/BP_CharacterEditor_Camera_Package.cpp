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
	 * 		Name   -> Function BP_CharacterEditor_Camera.BP_CharacterEditor_Camera_C.FitToBounds
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   InBounds                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              InFieldOfView                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterEditor_Camera_C::FitToBounds(const struct FVector2D& InBounds, float InFieldOfView)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterEditor_Camera.BP_CharacterEditor_Camera_C.FitToBounds");
		
		ABP_CharacterEditor_Camera_C_FitToBounds_Params params {};
		params.InBounds = InBounds;
		params.InFieldOfView = InFieldOfView;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterEditor_Camera.BP_CharacterEditor_Camera_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CharacterEditor_Camera_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterEditor_Camera.BP_CharacterEditor_Camera_C.ReceiveBeginPlay");
		
		ABP_CharacterEditor_Camera_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterEditor_Camera.BP_CharacterEditor_Camera_C.ExecuteUbergraph_BP_CharacterEditor_Camera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CharacterEditor_Camera_C::ExecuteUbergraph_BP_CharacterEditor_Camera(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterEditor_Camera.BP_CharacterEditor_Camera_C.ExecuteUbergraph_BP_CharacterEditor_Camera");
		
		ABP_CharacterEditor_Camera_C_ExecuteUbergraph_BP_CharacterEditor_Camera_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CharacterEditor_Camera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CharacterEditor_Camera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterEditor_Camera.BP_CharacterEditor_Camera_C");
		return ptr;
	}

}


