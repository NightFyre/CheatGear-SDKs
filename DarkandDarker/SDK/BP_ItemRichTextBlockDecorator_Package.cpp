/**
 * Name: DarkAndDarker-Playtest
 * Version: Playtest_3_Hotfix_3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x01B2D860
	 * 		Name   -> Function BP_ItemRichTextBlockDecorator.BP_ItemRichTextBlockDecorator_C.GetItemTextBlockStyle
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FGameplayTag                                InRarityType                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	struct FTextBlockStyle UBP_ItemRichTextBlockDecorator_C::GetItemTextBlockStyle(const struct FGameplayTag& InRarityType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemRichTextBlockDecorator.BP_ItemRichTextBlockDecorator_C.GetItemTextBlockStyle");
		
		UBP_ItemRichTextBlockDecorator_C_GetItemTextBlockStyle_Params params {};
		params.InRarityType = InRarityType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ItemRichTextBlockDecorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ItemRichTextBlockDecorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemRichTextBlockDecorator.BP_ItemRichTextBlockDecorator_C");
		return ptr;
	}

}


