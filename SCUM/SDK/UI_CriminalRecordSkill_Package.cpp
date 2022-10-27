/**
 * Name: SCUM
 * Version: 0.7.162
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
	 * 		Name   -> Function UI_CriminalRecordSkill.UI_CriminalRecordSkill_C.InitFromSkillTemplate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSkillTemplate                              SkillTemplate                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_CriminalRecordSkill_C::InitFromSkillTemplate(const struct FSkillTemplate& SkillTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_CriminalRecordSkill.UI_CriminalRecordSkill_C.InitFromSkillTemplate");
		
		UUI_CriminalRecordSkill_C_InitFromSkillTemplate_Params params {};
		params.SkillTemplate = SkillTemplate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_CriminalRecordSkill_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_CriminalRecordSkill_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_CriminalRecordSkill.UI_CriminalRecordSkill_C");
		return ptr;
	}

}


