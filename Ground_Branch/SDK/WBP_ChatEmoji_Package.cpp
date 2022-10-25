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
	 * 		Name   -> Function WBP_ChatEmoji.WBP_ChatEmoji_C.OnLoaded_6A9F10CF434496C720E0D18E8782622A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatEmoji_C::OnLoaded_6A9F10CF434496C720E0D18E8782622A(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmoji.WBP_ChatEmoji_C.OnLoaded_6A9F10CF434496C720E0D18E8782622A");
		
		UWBP_ChatEmoji_C_OnLoaded_6A9F10CF434496C720E0D18E8782622A_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatEmoji.WBP_ChatEmoji_C.Construct
	 * 		Flags  -> ()
	 */
	void UWBP_ChatEmoji_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmoji.WBP_ChatEmoji_C.Construct");
		
		UWBP_ChatEmoji_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_ChatEmoji.WBP_ChatEmoji_C.ExecuteUbergraph_WBP_ChatEmoji
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_ChatEmoji_C::ExecuteUbergraph_WBP_ChatEmoji(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_ChatEmoji.WBP_ChatEmoji_C.ExecuteUbergraph_WBP_ChatEmoji");
		
		UWBP_ChatEmoji_C_ExecuteUbergraph_WBP_ChatEmoji_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_ChatEmoji_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_ChatEmoji_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ChatEmoji.WBP_ChatEmoji_C");
		return ptr;
	}

}


